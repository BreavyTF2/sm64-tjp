#define			oba_alphawork	o->oBooTargetOpacity
#define			oba_scale	o->oBooBaseScale
#define			oba_sinmoveY	o->oBooOscillationTimer
#define			oba_damageANG	o->oBooMoveYawDuringHit
#define			oba_stockY	o->oBooMoveYawBeforeHit
#define		oba_kaidanptr	o->oBooParentBigBoo

/*------------------

---------------*/

#define	terecount(n)	n->oBigBooNumMinionBoosKilled


/********************************************************************************
		Appear / No-Appear Check
 ********************************************************************************/

static int obake_appearcheck(void)
{

	if ( obj_areamap == -1 ){
	 	if ( obj_playerdist < 1500 )	return(1);
	} else {
		if ( obj_playerdist < 1500 && ( obj_areamap == gMarioCurrentRoom ) ) return(1);
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
 	StrategyRecord *stp;

	for (i=0;i<3;i++){
		stp = spawn_object_relative(1,teredata[i][0],
							    teredata[i][1],
							    teredata[i][2],
							    execstp,MODEL_BOO,bhvGhostHuntBoo);
		stp->oMoveAngleYaw = random_u16();
	}

}

/********************************************************************************
		Effect Mini Teresa
 ********************************************************************************/

static void oba_effect(void)
{

	float s;

	if ( oba_alphawork != obj_alpha ){
		if ( oba_alphawork > obj_alpha ){
			obj_alpha += 20;
			if ( oba_alphawork < obj_alpha )	obj_alpha = oba_alphawork;
		} else {
			obj_alpha -= 20;
			if ( oba_alphawork > obj_alpha )	obj_alpha = oba_alphawork;
		}
	}

	s = ( (obj_alpha  / 255.0f) * 0.4 + 0.6 ) * oba_scale;
	s_scale( execstp , s );

}

/********************************************************************************
		Animation Scale
 ********************************************************************************/

static void oba_animation_scale(void)
{
	execstp->oFaceAnglePitch = sins(oba_sinmoveY)*0x400;

	if ( obj_alpha == 255 ){
		execstp->header.gfx.scale[0] = ( sins(oba_sinmoveY) * 0.08 + oba_scale); 
		execstp->header.gfx.scale[1] = (-sins(oba_sinmoveY) * 0.08 + oba_scale);
		execstp->header.gfx.scale[2] = execstp->header.gfx.scale[0];
		obj_gravity = sins(oba_sinmoveY) * oba_scale;

#if 0
        if ( ( obj_worldY - obj_animepositionY - obj_groundY ) < (50*oba_scale) ){
           if ( obj_gravity < 0 ) obj_gravity = -obj_gravity;
        }
#endif

		oba_sinmoveY	+= 0x400;
	}

}

/********************************************************************************
		mode check
 ********************************************************************************/

static int teresa_modecheck(void)
{

	short 	dangle1 = s_calc_dangle(obj_targetangle,gMarioObject->oFaceAngleYaw);
	short 	dangle2 = s_calc_dangle(obj_angleY,gMarioObject->oFaceAngleYaw);
	short 	data2	= 0x5000;
	short 	data3 	= 0x5000;
	int		flag 	= 0;

	obj_speedY = 0;

	if ( dangle1 < data2 || dangle2 < data3 ){
		oba_alphawork 	= 255;
		if ( obj_alpha > 180 )	flag = 1;
	} else {
		oba_alphawork 	= 40;
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
	s_hitOFF();
	Mbitclr(obj_mainflag,stf_YangleSAME);
	oba_stockY = obj_angleY;
	if	( coss((short)obj_angleY-(short)obj_targetangle) < 0 ){
		oba_damageANG	 = obj_angleY;
	} else {
		oba_damageANG	 = (short)(obj_angleY+0x8000);
	}

}
/*------------------------------------------------------------------------------*/
static void obroll_roll(float sF)
{
	int 	time;
	time = (obj_timer+1)*( 0x10000/MT_ROLL_TIME );
	obj_speedF  = sF;		
	obj_speedY	= coss(time);
	obj_angleY	= oba_damageANG;
	execstp->oFaceAngleYaw += D_8032F0CC[obj_timer];
	execstp->oFaceAngleRoll += D_8032F0CC[obj_timer];
}
/*------------------------------------------------------------------------------*/
static void obroll_rollend(void)
{
	int	time;
	time = (obj_timer-MT_ROLL_TIME+1) * 0x10000/MT_PULU_TIME;
	execstp->oFaceAngleYaw += coss(time) * MT_PULU_SPEED;
}
/*------------------------------------------------------------------------------*/
static void obroll_exit(void)
{
	obj_angleY = oba_stockY;
	Mbitset(obj_mainflag,stf_YangleSAME);
	Mbitclr(obj_mail,EMAIL_PLAYERHITALL);
}

/*------------------------------------------------------------------------------*/
static int obake_roll(void)
{

	obj_speedF = 0;
	obj_speedY = 0;
	if 		( obj_timer == 0 )								obroll_init();
	if 		( obj_timer <  MT_ROLL_TIME )					obroll_roll(D_8032F0CC[obj_timer]/5000.0f);
	else if ( obj_timer < (MT_ROLL_TIME)+(MT_PULU_TIME) )	obroll_rollend();
	else {
		s_hitON();
		obroll_exit();
		obj_mode = mode_oba_playersearch;
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

	StrategyRecord *stp;

	if ( obj_timer == 0 ){ 
		obj_speedF 			= 40;
		obj_angleY			= gMarioObject->oMoveAngleYaw;
		execstp->oBooDeathStatus = 1;	/* set message */
		Mbitclr(execstp->oFlags,stf_YangleSAME);
	} else {
		if ( obj_timer == MT_REMOVEDEMO_TIME-25 )	oba_alphawork = 0;
		if ( obj_timer > MT_REMOVEDEMO_TIME || obj_movestatus & MOVESTAT_WALL ){
			s_kemuri();
			execstp->oBooDeathStatus = 2;	/* set message */
			if ( oba_kaidanptr != NULL ){
			 	stp = (StrategyRecord *)oba_kaidanptr;
				terecount(stp)++;
			}
			return(1);
		}
	}

	obj_speedY 			= 5;
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

	if ( (obj_mail & EMAIL_PLAYERHIT) != 0 ){
		if ( obj_mail & EMAIL_PLAYERATTACK ){
			s_hitOFF();
			Mbitclr(obj_mail,EMAIL_PLAYERHITALL);
			objsound(SOUND_OBJ_BOO_LAUGH_SHORT);
			flag = 1;
		} else	{
			objsound(SOUND_OBJ_BOO_BOUNCE_TOP);
			Mbitclr(obj_mail,EMAIL_PLAYERHITALL);
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

		if ( s_calc_playerscope() > 1500 ) angle = cur_obj_angle_to_home();
		else							   angle = obj_targetangle;
		s_chase_angleY(angle,anglespeed);

		obj_speedY = 0;
		if(	s_check_playerjump() == 0 ){
			Ydist =  obj_worldY - player_worldY;
			if (  ( ymin < Ydist ) && ( Ydist < 500 ) ){
				obj_speedY = increment_velocity_toward_range(obj_worldY,(player_worldY+60*oba_scale),10,2);
			}
		}
		cur_obj_set_vel_from_mario_vel(10,0.5);

		if ( obj_speedF != 0 ) oba_animation_scale();

	} else {
	 	o->oInteractType = 0;	/* hitcheck off	*/
		obj_speedF  = 0;
		obj_speedY  = 0;
		obj_gravity = 0;
	}

}

/********************************************************************************
		 ob init 
 ********************************************************************************/

static void oba_init(void)
{

	s_copy_initpos();
	oba_kaidanptr	= (void *)s_find_obj(bhvGhostHuntBigBoo);	/* kaidan pointer */
	oba_scale 		= 1.0;									/* scale 		  */
	oba_alphawork	= 255;
	if ( obake_appearcheck() ) obj_mode = mode_oba_playersearch;

}

/********************************************************************************
		 ob playersearch
 ********************************************************************************/

static void oba_playersearch(void)
{

	int		flag;
	obake_mainmove(-100,0x200);
	flag = oba_hitcheck();

	if ( execstp->activeFlags & OBJECT_AREAOUT ) obj_mode = mode_oba_init;
	if ( flag == -1 )	obj_mode = mode_oba_roll;
	if ( flag ==  1 )	obj_mode = mode_oba_hitaway;

}

/********************************************************************************
		 oba roll
 ********************************************************************************/

static void oba_roll(void)
{
	if ( obake_roll() ) obj_mode = mode_oba_playersearch;
}

/********************************************************************************
		 oba hitaway
 ********************************************************************************/

static void oba_hitaway(void)
{
	if ( obake_hitaway() ){
		if ( obj_programselect )	s_remove_obj(execstp);
		else {		
			obj_mode = mode_oba_endmessage;
			s_shape_hide();
			s_hitOFF();
		}
	}
}

/********************************************************************************
		 oba hitaway
 ********************************************************************************/

static void oba_endmessage(void)
{

	if ( s_call_enemydemo(DLOG_LOOKUP,ENEMYDEMO_SETMESSAGE,99,0) ){
		s_remove_obj(execstp);
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

	oba_kaidanptr	= NULL;
	if ( terecount(execstp) >= (5) ){
		s_copy_initpos();
		s_shape_disp();
		oba_alphawork = 255;
		oba_scale	  = 2;
		s_set_scale(2);
		s_hitON();	
		if ( obake_appearcheck() ) obj_mode = mode_kaidanteresa_main;
	} else {
		s_shape_hide();
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

	if ( execstp->activeFlags & OBJECT_AREAOUT ) obj_mode = mode_kaidanteresa_init;
	if ( flag == -1 )						obj_mode = mode_kaidanteresa_roll;
	if ( flag ==  1 )						obj_mode = mode_kaidanteresa_hitaway;

}

/*------------------------------------------------------------------------------*/
/*		kaidan teresa mainprogram												*/
/*------------------------------------------------------------------------------*/
static void kaidanteresa_roll(void)
{
	if ( obake_roll() ) obj_mode = mode_kaidanteresa_main;
}

/*------------------------------------------------------------------------------*/
/*		kaidan teresa mainprogram												*/
/*------------------------------------------------------------------------------*/
static void kaidanteresa_hitaway(void)
{
	if ( obake_hitaway() ){
		obj_mode = mode_kaidanteresa_demo;
		s_set_world(execstp,973,0,717);
		s_set_angle(execstp,0,0,0);
		s_makeobj_chain(0,0,0,   0,execstp,MODEL_BBH_STAIRCASE_STEP,bhvBooBossSpawnedBridge);
		s_makeobj_chain(1,0,0,-200,execstp,MODEL_BBH_STAIRCASE_STEP,bhvBooBossSpawnedBridge);
		s_makeobj_chain(2,0,0, 200,execstp,MODEL_BBH_STAIRCASE_STEP,bhvBooBossSpawnedBridge);
	}

}

/*------------------------------------------------------------------------------*/
/*		kaidan teresa demo														*/
/*------------------------------------------------------------------------------*/
static void kaidanteresa_demo(void)
{

	if ( obj_timer == 100 ){
	 	spawn_object_abs_with_rot(execstp,0,MODEL_STAR,bhvStar,972,819+200,292,0,0,0);
		s_remove_obj(execstp);
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
	oba_kaidanptr	= NULL;
	oba_alphawork = 255;
	oba_scale	  = 2;
	s_set_scale(2);
	s_hitON();	
	if ( obake_appearcheck() ) obj_mode = mode_kagoteresa_main;

}

/*------------------------------------------------------------------------------*/
/*		kago teresa mainprogram													*/
/*------------------------------------------------------------------------------*/
static void kagoteresa_main(void)
{
 
	int		flag;
	obake_mainmove(100,0x200);
	flag = oba_hitcheck();

	if ( execstp->activeFlags & OBJECT_AREAOUT ) obj_mode = mode_kagoteresa_init;
	if ( flag == -1 )						obj_mode = mode_kagoteresa_roll;
	if ( flag ==  1 )						obj_mode = mode_kagoteresa_hitaway;

}

/*------------------------------------------------------------------------------*/
/*		kago teresa mainprogram													*/
/*------------------------------------------------------------------------------*/
static void kagoteresa_roll(void)
{
	if ( obake_roll() ) obj_mode = mode_kagoteresa_main;
}


/*------------------------------------------------------------------------------*/
/*		kago teresa mainprogram													*/
/*------------------------------------------------------------------------------*/
static void kagoteresa_hitaway(void)
{

	if ( obake_hitaway() ) s_remove_obj(execstp);

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
	StrategyRecord *stp = s_makeobj_nowpos(execstp,MODEL_HAUNTED_CAGE,bhvBooCage);
	stp->oBehParams = execstp->oBehParams;	
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
