/*------------------

---------------*/

#define	terecount(n)	n->oBigBooNumMinionBoosKilled
#define	Mbitclr(work,bit)		(work) = (work) & ((bit)^-1)
#define	Mbitset(work,bit)		(work) = (work) | (bit)

/********************************************************************************
		Appear / No-Appear Check
 ********************************************************************************/

static int obake_appearcheck(void)
{

	if ( o->oRoom == -1 ){
	 	if ( o->oDistanceToMario < 1500 )	return(1);
	} else {
		if ( o->oDistanceToMario < 1500 && ( o->oRoom == gMarioCurrentRoom ) ) return(1);
	}
	
	return(0);
}

/********************************************************************************
		Effect Mini Teresa
 ********************************************************************************/

extern void s_make3teresa(void)
{	
	static s16 teredata[][3] = {
		{    0,  50,   0 },
		{  210, 110, 210 },
		{ -210,  70,-210 },
	};

	int i;
 	struct Object *stp;

	for (i=0;i<3;i++){
		stp = spawn_object_relative(1,teredata[i][0],
							    teredata[i][1],
							    teredata[i][2],
							    o,MODEL_BOO,bhvGhostHuntBoo);
		stp->oMoveAngleYaw = random_u16();
	}

}

/********************************************************************************
		Effect Mini Teresa
 ********************************************************************************/

static void oba_effect(void)
{

	float s;

	if ( o->oBooTargetOpacity != o->oOpacity ){
		if ( o->oBooTargetOpacity > o->oOpacity ){
			o->oOpacity += 20;
			if ( o->oBooTargetOpacity < o->oOpacity )	o->oOpacity = o->oBooTargetOpacity;
		} else {
			o->oOpacity -= 20;
			if ( o->oBooTargetOpacity > o->oOpacity )	o->oOpacity = o->oBooTargetOpacity;
		}
	}

	s = ( (o->oOpacity  / 255.0f) * 0.4 + 0.6 ) * o->oBooBaseScale;
	obj_scale( o , s );

}

/********************************************************************************
		Animation Scale
 ********************************************************************************/

static void oba_animation_scale(void)
{
	o->oFaceAnglePitch = sins(o->oBooOscillationTimer)*0x400;

	if ( o->oOpacity == 255 ){
		o->header.gfx.scale[0] = ( sins(o->oBooOscillationTimer) * 0.08 + o->oBooBaseScale); 
		o->header.gfx.scale[1] = (-sins(o->oBooOscillationTimer) * 0.08 + o->oBooBaseScale);
		o->header.gfx.scale[2] = o->header.gfx.scale[0];
		o->oGravity = sins(o->oBooOscillationTimer) * o->oBooBaseScale;

#if 0 
        if ( ( o->oPosY - obj_animepositionY - obj_groundY ) < (50*o->oBooBaseScale) ){ //Causes the boo to slightly shake when approuching on the ground
           if ( o->oGravity < 0 ) o->oGravity = -o->oGravity;
        }
#endif

		o->oBooOscillationTimer	+= 0x400;
	}

}

/********************************************************************************
		mode check
 ********************************************************************************/

static int teresa_modecheck(void)
{

	short 	dangle1 = s_calc_dangle(o->oAngleToMario,gMarioObject->oFaceAngleYaw);
	short 	dangle2 = s_calc_dangle(o->oMoveAngleYaw,gMarioObject->oFaceAngleYaw);
	short 	data2	= 0x5000;
	short 	data3 	= 0x5000;
	int		flag 	= 0;

	o->oVelY = 0;

	if ( dangle1 < data2 || dangle2 < data3 ){
		o->oBooTargetOpacity 	= 255;
		if ( o->oOpacity > 180 )	flag = 1;
	} else {
		o->oBooTargetOpacity 	= 40;
	}

	return(flag);

}

/********************************************************************************
		=================
		 ob roll
		=================
 ********************************************************************************/

#define	MT_ROLL_TIME			32			/* obake to player ga atatta toki!!		 */
#define	MT_PULU_TIME			8			/* obake to player ga atatta toki!!		 */
#define	MT_PULU_SPEED			0x400		
#define	MT_ROLL_SPEED_Y			3			/* rolling back speed Y 				 */

/*------------------------------------------------------------------------------*/

static void obroll_init(void)
{
	cur_obj_become_intangible();
	Mbitclr(o->oFlags,stf_YangleSAME);
	o->oBooMoveYawBeforeHit = o->oMoveAngleYaw;
	if	( coss((short)o->oMoveAngleYaw-(short)o->oAngleToMario) < 0 ){
		o->oBooMoveYawDuringHit	 = o->oMoveAngleYaw;
	} else {
		o->oBooMoveYawDuringHit	 = (short)(o->oMoveAngleYaw+0x8000);
	}

}
/*------------------------------------------------------------------------------*/
static void obroll_roll(float sF)
{
	int 	time;
	time = (o->oTimer+1)*( 0x10000/MT_ROLL_TIME );
	o->oForwardVel  = sF;		
	o->oVelY	= coss(time);
	o->oMoveAngleYaw	= o->oBooMoveYawDuringHit;
	o->oFaceAngleYaw += D_8032F0CC[o->oTimer];
	o->oFaceAngleRoll += D_8032F0CC[o->oTimer];
}
/*------------------------------------------------------------------------------*/
static void obroll_rollend(void)
{
	int	time;
	time = (o->oTimer-MT_ROLL_TIME+1) * 0x10000/MT_PULU_TIME;
	o->oFaceAngleYaw += coss(time) * MT_PULU_SPEED;
}
/*------------------------------------------------------------------------------*/
static void obroll_exit(void)
{
	o->oMoveAngleYaw = o->oBooMoveYawBeforeHit;
	Mbitset(o->oFlags,stf_YangleSAME);
	Mbitclr(o->oInteractStatus,EMAIL_PLAYERHITALL);
}

/*------------------------------------------------------------------------------*/
static int obake_roll(void)
{

	o->oForwardVel = 0;
	o->oVelY = 0;
	if 		( o->oTimer == 0 )								obroll_init();
	if 		( o->oTimer <  MT_ROLL_TIME )					obroll_roll(D_8032F0CC[o->oTimer]/5000.0f);
	else if ( o->oTimer < (MT_ROLL_TIME)+(MT_PULU_TIME) )	obroll_rollend();
	else {
		cur_obj_become_tangible();
		obroll_exit();
		o->oAction = mode_oba_playersearch;
		return(1);
	}

	return(0);
}


/********************************************************************************
		============
		 obake away
		============
 ********************************************************************************/

#define	MT_REMOVEDEMO_TIME	30

static int obake_hitaway(void)
{

	struct Object *stp;

	if ( o->oTimer == 0 ){ 
		o->oForwardVel 			= 40;
		o->oMoveAngleYaw			= gMarioObject->oMoveAngleYaw;
		o->oBooDeathStatus = 1;	/* set message */
		Mbitclr(o->oFlags,stf_YangleSAME);
	} else {
		if ( o->oTimer == MT_REMOVEDEMO_TIME-25 )	o->oBooTargetOpacity = 0;
		if ( o->oTimer > MT_REMOVEDEMO_TIME || obj_movestatus & MOVESTAT_WALL ){
			s_kemuri();
			o->oBooDeathStatus = 2;	/* set message */
			if ( o->oBooParentBigBoo != NULL ){
			 	stp = (struct Object *)o->oBooParentBigBoo;
				terecount(stp)++;
			}
			return(1);
		}
	}

	o->oVelY 			= 5;
	obj_animeangleZ += 0x800;
	obj_animeangleY += 0x800;

	return(0);

}


/********************************************************************************

		ob hitcheck

		flag ... 0  safe
				 1  Hit Win  !!
				-1	Hit Lost !!

 ********************************************************************************/

static int oba_hitcheck(void)
{

	int flag = 0;

	if ( (o->oInteractStatus & EMAIL_PLAYERHIT) != 0 ){
		if ( o->oInteractStatus & EMAIL_PLAYERATTACK ){
			cur_obj_become_intangible();
			Mbitclr(o->oInteractStatus,EMAIL_PLAYERHITALL);
			cur_obj_play_sound_2(SOUND_OBJ_BOO_LAUGH_SHORT);
			flag = 1;
		} else	{
			cur_obj_play_sound_2(SOUND_OBJ_BOO_BOUNCE_TOP);
			Mbitclr(o->oInteractStatus,EMAIL_PLAYERHITALL);
			flag = -1;
		}

	}

	return(flag);

}


/********************************************************************************

		obake mainmove program

 ********************************************************************************/


static void obake_mainmove(float ymin,short anglespeed)
{

 	float	Ydist;
	short	angle;

	if ( teresa_modecheck() ){
	 	o->oInteractType = 0x8000;		/* punch attack enemy */

		if ( cur_obj_lateral_dist_from_mario_to_home() > 1500 ) angle = cur_obj_angle_to_home();
		else							   angle = o->oAngleToMario;
		cur_obj_rotate_yaw_toward(angle,anglespeed);

		o->oVelY = 0;
		if(	mario_is_in_air_action() == 0 ){
			Ydist =  o->oPosY - gMarioObject->oPosY;
			if (  ( ymin < Ydist ) && ( Ydist < 500 ) ){
				o->oVelY = increment_velocity_toward_range(o->oPosY,(gMarioObject->oPosY+60*o->oBooBaseScale),10,2);
			}
		}
		cur_obj_set_vel_from_mario_vel(10,0.5);

		if ( o->oForwardVel != 0 ) oba_animation_scale();

	} else {
	 	o->oInteractType = 0;	/* hitcheck off	*/
		o->oForwardVel = 0;
		o->oVelY  = 0;
		o->oGravity = 0;
	}

}

/********************************************************************************
		 ob init 
 ********************************************************************************/

static void oba_init(void)
{

	cur_obj_set_pos_to_home();
	o->oBooParentBigBoo	= (void *)cur_obj_nearest_object_with_behavior(bhvGhostHuntBigBoo);	/* kaidan pointer */
	o->oBooBaseScale 		= 1.0;									/* scale 		  */
	o->oBooTargetOpacity	= 255;
	if ( obake_appearcheck() ) o->oAction = mode_oba_playersearch;

}

/********************************************************************************
		 ob playersearch
 ********************************************************************************/

static void oba_playersearch(void)
{

	int		flag;
	obake_mainmove(-100,0x200);
	flag = oba_hitcheck();

	if ( o->activeFlags & OBJECT_AREAOUT ) o->oAction = mode_oba_init;
	if ( flag == -1 )	o->oAction = mode_oba_roll;
	if ( flag ==  1 )	o->oAction = mode_oba_hitaway;

}

/********************************************************************************
		 oba roll
 ********************************************************************************/

static void oba_roll(void)
{
	if ( obake_roll() ) o->oAction = mode_oba_playersearch;
}

/********************************************************************************
		 oba hitaway
 ********************************************************************************/

static void oba_hitaway(void)
{
	if ( obake_hitaway() ){
		if ( o->oBehParams2ndByte )	obj_mark_for_deletion(o);
		else {		
			o->oAction = mode_oba_endmessage;
			cur_obj_hide();
			cur_obj_become_intangible();
		}
	}
}

/********************************************************************************
		 oba hitaway
 ********************************************************************************/

static void oba_endmessage(void)
{

	if ( cur_obj_update_dialog(DLOG_LOOKUP,ENEMYDEMO_SETMESSAGE,99,0) ){
		obj_mark_for_deletion(o);
	}
}

/********************************************************************************
	======================
	 mini teresa program
	======================
 ********************************************************************************/

static void (*oba_modejmp[])(void) = {
	
	 oba_init,
	 oba_playersearch,
	 oba_roll,
	 oba_hitaway,
	 oba_endmessage
	
};

/*-----------------------------------------------------------------------------*/
extern void s_oba(void)
{

	s_enemybgcheck();
	s_modejmp(oba_modejmp);
	s_enemymove(-78);
	oba_effect();

}


/********************************************************************************
	======================
	 kaidan teresa program
	======================
 ********************************************************************************/


/*------------------------------------------------------------------------------*/
/*		kaidan teresa initialize												*/
/*------------------------------------------------------------------------------*/
static void kaidanteresa_init(void)
{

	o->oBooParentBigBoo	= NULL;
	if ( terecount(o) >= (5) ){
		cur_obj_set_pos_to_home();
		cur_obj_unhide();
		o->oBooTargetOpacity = 255;
		o->oBooBaseScale	  = 2;
		cur_obj_scale(2);
		cur_obj_become_tangible();	
		if ( obake_appearcheck() ) o->oAction = mode_kaidanteresa_main;
	} else {
		cur_obj_hide();
	}

}

/*------------------------------------------------------------------------------*/
/*		kaidan teresa mainprogram												*/
/*------------------------------------------------------------------------------*/
static void kaidanteresa_main(void)
{
 
	int		flag;
	obake_mainmove(100,0x200);
	flag = oba_hitcheck();

	if ( o->activeFlags & OBJECT_AREAOUT ) o->oAction = mode_kaidanteresa_init;
	if ( flag == -1 )						o->oAction = mode_kaidanteresa_roll;
	if ( flag ==  1 )						o->oAction = mode_kaidanteresa_hitaway;

}

/*------------------------------------------------------------------------------*/
/*		kaidan teresa mainprogram												*/
/*------------------------------------------------------------------------------*/
static void kaidanteresa_roll(void)
{
	if ( obake_roll() ) o->oAction = mode_kaidanteresa_main;
}

/*------------------------------------------------------------------------------*/
/*		kaidan teresa mainprogram												*/
/*------------------------------------------------------------------------------*/
static void kaidanteresa_hitaway(void)
{
	if ( obake_hitaway() ){
		o->oAction = mode_kaidanteresa_demo;
		s_set_world(o,973,0,717);
		s_set_angle(o,0,0,0);
		s_makeobj_chain(0,0,0,   0,o,MODEL_BBH_STAIRCASE_STEP,bhvBooBossSpawnedBridge);
		s_makeobj_chain(1,0,0,-200,o,MODEL_BBH_STAIRCASE_STEP,bhvBooBossSpawnedBridge);
		s_makeobj_chain(2,0,0, 200,o,MODEL_BBH_STAIRCASE_STEP,bhvBooBossSpawnedBridge);
	}

}

/*------------------------------------------------------------------------------*/
/*		kaidan teresa demo														*/
/*------------------------------------------------------------------------------*/
static void kaidanteresa_demo(void)
{

	if ( o->oTimer == 100 ){
	 	spawn_object_abs_with_rot(o,0,MODEL_STAR,bhvStar,972,819+200,292,0,0,0);
		obj_mark_for_deletion(o);
	}

}

/*-----------------------------------------------------------------------------*/

static void (*kaidanteresa_modejmp[])(void) = {
	
	 kaidanteresa_init,
	 kaidanteresa_main,
	 kaidanteresa_roll,
	 kaidanteresa_hitaway,
	 kaidanteresa_demo
	
};

/*-----------------------------------------------------------------------------*/

extern void s_kaidanteresa(void)
{

	s_enemybgcheck();
	s_modejmp(kaidanteresa_modejmp);
	s_enemymove(-78);
	oba_effect();

}

/********************************************************************************
	======================
	 kago teresa program
	======================
 ********************************************************************************/


/*------------------------------------------------------------------------------*/
/*		kago teresa initialize													*/
/*------------------------------------------------------------------------------*/
static void kagoteresa_init(void)
{
	o->oBooParentBigBoo	= NULL;
	o->oBooTargetOpacity = 255;
	o->oBooBaseScale	  = 2;
	cur_obj_scale(2);
	cur_obj_become_tangible();	
	if ( obake_appearcheck() ) o->oAction = mode_kagoteresa_main;

}

/*------------------------------------------------------------------------------*/
/*		kago teresa mainprogram													*/
/*------------------------------------------------------------------------------*/
static void kagoteresa_main(void)
{
 
	int		flag;
	obake_mainmove(100,0x200);
	flag = oba_hitcheck();

	if ( o->activeFlags & OBJECT_AREAOUT ) o->oAction = mode_kagoteresa_init;
	if ( flag == -1 )						o->oAction = mode_kagoteresa_roll;
	if ( flag ==  1 )						o->oAction = mode_kagoteresa_hitaway;

}

/*------------------------------------------------------------------------------*/
/*		kago teresa mainprogram													*/
/*------------------------------------------------------------------------------*/
static void kagoteresa_roll(void)
{
	if ( obake_roll() ) o->oAction = mode_kagoteresa_main;
}


/*------------------------------------------------------------------------------*/
/*		kago teresa mainprogram													*/
/*------------------------------------------------------------------------------*/
static void kagoteresa_hitaway(void)
{

	if ( obake_hitaway() ) obj_mark_for_deletion(o);

}


/*-----------------------------------------------------------------------------*/

static void (*kagoteresa_modejmp[])(void) = {
	
	 kagoteresa_init,
	 kagoteresa_main,
	 kagoteresa_roll,
	 kagoteresa_hitaway
	
};

/*-----------------------------------------------------------------------------*/

extern void s_kagoteresa_makekago(void)
{
	struct Object *stp = s_makeobj_nowpos(o,MODEL_HAUNTED_CAGE,bhvBooCage);
	stp->oBehParams = o->oBehParams;	
}

extern void s_kagoteresa(void)
{

	s_enemybgcheck();
	s_modejmp(kagoteresa_modejmp);
	s_enemymove(-78);
	oba_effect();

}
/*===============================================================================
		end end end end end end end end 
===============================================================================*/

void bhv_boo_boss_spawned_bridge_loop(void) {
    f32 targetY;

    switch (o->oBehParams2ndByte) {
        case 1:
            targetY = 0.0f;
            break;
        case 0:
            targetY = -206.0f;
            break;
        case 2:
            targetY = -413.0f;
            break;
    }

    switch(o->oAction) {
        case 0:
            o->oPosY = o->oHomeY - 620.0f;
            o->oAction++;
            // fallthrough
        case 1:
            o->oPosY += 8.0f;
            cur_obj_play_sound_1(SOUND_ENV_ELEVATOR2);

            if (o->oPosY > targetY) {
                o->oPosY = targetY;
                o->oAction++;
            }

            break;
        case 2:
            if (o->oTimer == 0) {
                cur_obj_play_sound_2(SOUND_GENERAL_UNKNOWN4_LOWPRIO);
            }

            if (cur_obj_move_up_and_down(o->oTimer)) {
                o->oAction++;
            }

            break;
        case 3:
            if (o->oTimer == 0 && o->oBehParams2ndByte == 1) {
                play_puzzle_jingle();
            }

            break;
    }
}
