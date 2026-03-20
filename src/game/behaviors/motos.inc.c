//#define ANM_motos_basedata_A    	0
//#define ANM_motos_carry         	1
#define ANM_motos_carry_run     	2
#define ANM_motos_carry_start   	3
#define ANM_motos_down_recover  	4
#define ANM_motos_down_stop     	5
#define ANM_motos_pitch         	6
#define ANM_motos_safe_down     	7
#define ANM_motos_wait          	8
#define ANM_motos_walk          	9

#define mode_motos_wait				0
#define mode_motos_player_search	1
#define mode_motos_player_carry		2
#define mode_motos_player_pitch		3
#define mode_motos_carry_start		4
#define mode_motos_carry_run		5
#define mode_motos_pitch			6
#define mode_motos_fly				7
#define mode_motos_recover			8
#define mode_motos_death			9
//#define mode_motos_recover2			10

void s_motos_hand(void)
{

	struct Object *firep;


	o->oParentRelativePosX = 100.0f;
//	o->oParentRelativePosY = 0.0f;
	o->oParentRelativePosZ = 150.0f;

	o->oMoveAngleYaw = o->parentObj->oMoveAngleYaw;

	switch (o->parentObj->oMotosHandStatus ){
	 	case	0:
			if (o->parentObj->prevObj != NULL && o->parentObj->prevObj != o){
				o->parentObj->prevObj->oIntangibleTimer = 0;
				o->parentObj->prevObj->oForwardVel = 40.0f;
				o->parentObj->prevObj->oVelY = (-30.0f + o->parentObj->oDistanceToMario * 0.066f);
				o->parentObj->prevObj->oMoveAngleYaw = o->parentObj->oMoveAngleYaw;
				o->parentObj->prevObj->oFaceAngleYaw = o->parentObj->oFaceAngleYaw;
				o->parentObj->prevObj->oAction = BULLY_ACT_KNOCKBACK;
				o->parentObj->prevObj->oFlags &= ~OBJ_FLAG_ACTIVE_FROM_AFAR;
				o->parentObj->prevObj->oMotosUnk100 = 0;
			}
			o->parentObj->prevObj = o;
			break;
		case	1:
			obj_set_gfx_pos_at_obj_pos(gMarioObject, o);
			break;
		case	2:
            gMarioObject->oInteractStatus |= (INT_STATUS_MARIO_UNK6 + INT_STATUS_MARIO_UNK2);
			gMarioStates[0].forwardVel = 50.0f;
			gMarioStates[0].vel[1] = 0.0f;
			o->oInteractStatus &= ~(INT_STATUS_GRABBED_MARIO);
			o->parentObj->oMotosHandStatus = 0;
			break;
		case	3: //hold object
			if (o->parentObj->prevObj != NULL && o->parentObj->prevObj != o){
				//obj_set_gfx_pos_at_obj_pos(o->parentObj->prevObj, o);
				o->parentObj->prevObj->oParentRelativePosZ = 150.0f;
				o->parentObj->prevObj->oParentRelativePosX = 100.0f;
				o->parentObj->prevObj->oForwardVel = 0;
				o->parentObj->prevObj->oVelY = -20;
				o->parentObj->prevObj->oIntangibleTimer = -1;
				o->parentObj->prevObj->oMoveAngleYaw = o->parentObj->oMoveAngleYaw;
				o->parentObj->prevObj->oFaceAngleYaw = o->parentObj->oFaceAngleYaw;
				o->parentObj->prevObj->oFlags |= OBJ_FLAG_ACTIVE_FROM_AFAR;
				o->parentObj->prevObj->oAction = BULLY_ACT_KNOCKBACK;
				o->parentObj->prevObj->oMotosUnk100 = 1;
			}
			break;
		case	4: //spawn projectile
			if ((firep = spawn_object_with_scale(o, MODEL_UNKNOWN_7D, bhvUnusedParticleSpawn, o->parentObj->header.gfx.scale[0])) != NULL) {
				o->parentObj->prevObj = firep;
				o->parentObj->oMotosHandStatus = 3;
			}
			break;
    }

//Below is legacy code that was commented out in pathmotos.p

//	if (o->parentObj->oMotosHandStatus != 0){
//		o->parentObj->oMotosHandStatus = 0;
//	 	firep = spawn_object(o, MODEL_UNKNOWN_7D, bhvUnusedParticleSpawn);
//		firep->oForwardVel = 40.0f;
//		firep->oVelY = 20.0f;
//		firep->oMoveAngleYaw = o->parentObj->oMoveAngleYaw;
//	}

}

Gfx *MotosProc1(s32 run, UNUSED struct GraphNode *node, Mat4 mtx) {
    Mat4 sp20;
    struct Object *sp1C;

    if (run == TRUE) {
        sp1C = (struct Object *) gCurGraphNodeObject;
        if (sp1C->prevObj != NULL) {
            create_transformation_from_matrices(sp20, mtx, *gCurGraphNodeCamera->matrixPtr);
            obj_update_pos_from_parent_transformation(sp20, sp1C->prevObj);
            obj_set_gfx_pos_from_pos(sp1C->prevObj);
        }
    }
    return NULL;
}

//
s32 s_ai_pitch(s32 ang, f32 dist)
{
	if ( (cur_obj_rotate_yaw_toward(o->oAngleToMario, ang)) && (o->oDistanceToMario < dist) ) {
		return(1);
	} else {
		return(0);
	}
}

void motos_wait(void)
{
    o->oForwardVel = 0.0f;
    o->oVelY = 0.0f;
	cur_obj_init_animation_with_sound(ANM_motos_wait);
	if ( o->oDistanceToMario < 1500 )
		o->oAction = mode_motos_player_search;

}

void motos_player_search(void)
{
    struct Object *Bully = cur_obj_nearest_object_with_behavior(bhvSmallBully);
    struct Object *ChillBully = cur_obj_nearest_object_with_behavior(bhvSmallChillBully);
    struct Object *Dice = cur_obj_nearest_object_with_behavior(bhvStub1D70);

	if (cur_obj_check_anim_frame(13) | cur_obj_check_if_near_animation_end()) 
		cur_obj_play_sound_2(SOUND_OBJ_BULLY_WALKING);
		
	cur_obj_init_animation_with_sound(ANM_motos_walk);
	o->oForwardVel = 2.0f;
	cur_obj_rotate_yaw_toward(o->oAngleToMario, 300);
	if ( o->oDistanceToMario > 1500 ) {
		o->oAction = mode_motos_wait;
	}
	if ((o->oPosY < o->oHomeY - 100) & (o->oTimer >= 20)) { //If we are off the platform, just die.
		o->oAction = mode_motos_fly;
	}

	if ( o->oInteractStatus & INT_STATUS_GRABBED_MARIO ){
		o->oAction = mode_motos_player_carry;
	 	o->oMotosHandStatus = 1;
	}
	
	if (o->oDistanceToMario < 1000) {
	// Let Motosman grab Bullies, and Dice
		if (Bully != NULL) {
			if ((dist_between_objects(o, Bully) <= 150)) {
				o->prevObj = Bully;
				o->oMotosHandStatus = 3;
				o->oAction = mode_motos_carry_start;
			}
		}

		if (ChillBully != NULL) {
			if ((dist_between_objects(o, ChillBully) <= 150)) {
				o->prevObj = ChillBully;
				o->oMotosHandStatus = 3;
				o->oAction = mode_motos_carry_start;
			}
		}

		if (Dice != NULL) {
			if ((dist_between_objects(o, Dice) <= 150) && !(Dice->header.gfx.node.flags & GRAPH_RENDER_INVISIBLE)) {
				o->prevObj = Dice;
				o->oMotosHandStatus = 3;
				o->oAction = mode_motos_carry_start;
			}
		}

		if (o->oBehParams2ndByte == 0x01 && !((o->oTimer+1) % 150) && o->oDistanceToMario > 250) {
			o->oAction = mode_motos_carry_start;
			o->oMotosHandStatus = 4;
		}
	}
}

void motos_player_carry(void)
{

	if (o->oTimer == 0) {
		cur_obj_init_animation_with_sound(ANM_motos_carry_start);
		cur_obj_play_sound_2(SOUND_OBJ_UNKNOWN3);
	}
	cur_obj_become_intangible();
	if ( cur_obj_check_if_near_animation_end() )	o->oAction = mode_motos_player_pitch;

}

void motos_player_pitch(void)
{

	o->oForwardVel = 0.0f;
	if (o->oTimer == 0) {
		cur_obj_init_animation_with_sound(ANM_motos_pitch);
	}
	if ( cur_obj_check_anim_frame(7) ) {
		cur_obj_play_sound_2(SOUND_OBJ_UNKNOWN4);
	}
	if ( cur_obj_check_anim_frame(14) ) { 
		o->oMotosHandStatus = 2;
		o->numCollidedObjs = 10;
	}
	if ( cur_obj_check_if_near_animation_end() ){
		o->oAction = mode_motos_wait;
		cur_obj_become_tangible();
	}

}

void motos_carry_start(void)
{

	o->oForwardVel = 0.0f;

	if (o->oTimer == 0) {
		cur_obj_init_animation_with_sound(ANM_motos_carry_start);
		cur_obj_play_sound_2(SOUND_OBJ_UNKNOWN3);
	}

	o->oMotosUnk104 = TRUE;

	if (cur_obj_check_if_near_animation_end()) {
		if ( s_ai_pitch(0x200,500) ) o->oAction = mode_motos_pitch;
		else			   			 o->oAction = mode_motos_carry_run;
	}
}

void motos_carry_run(void)
{
	o->oForwardVel = 5.0f;

	if (cur_obj_check_anim_frame(2) || cur_obj_check_anim_frame(11))
		cur_obj_play_sound_2(SOUND_OBJ_POUNDING1_HIGHPRIO);

	cur_obj_init_animation_with_sound(ANM_motos_carry_run);
	
	if ( (o->oDistanceToMario > 1000) || (o->oMoveFlags & OBJ_MOVE_HIT_EDGE) ) { //Give up if Mario is unreachable
		o->oMotosHandStatus = 0;
		o->oAction = mode_motos_wait;
	} else if ( (s_ai_pitch(0x200,500) ) ) {
		o->oAction = mode_motos_pitch;
		cur_obj_play_sound_2(SOUND_OBJ_POUNDING1_HIGHPRIO);
	} else {
		o->oAction = mode_motos_carry_run;
	}
}

void motos_pitch(void)
{
	o->oForwardVel = 0.0f;
	cur_obj_init_animation_with_sound(ANM_motos_pitch);

	if ( cur_obj_check_anim_frame(7) ) 
		cur_obj_play_sound_2(SOUND_OBJ_UNKNOWN4);
	
	if ( cur_obj_check_anim_frame(14) ) { 
		o->oMotosHandStatus = 0;
		o->numCollidedObjs = 10;
	}
	if ( cur_obj_check_if_near_animation_end() ) {
		o->oAction = mode_motos_wait;
		o->oMotosUnk104 = FALSE;
	}
}

void motos_fly(void)
{
	cur_obj_init_animation_and_extend_if_at_end(ANM_motos_down_stop);

		if (((gCurrLevelNum == LEVEL_SL) & (o->oPosY < 1000.0f)) || ((o->oPosY < o->oHomeY - 300) && ( o->oMoveFlags & OBJ_MOVE_LANDED))) {
			if ((o->oFloor->type == SURFACE_BURNING)) { 
				spawn_object_with_scale(o, MODEL_BURN_SMOKE, bhvBlackSmokeBowser, o->parentObj->header.gfx.scale[0]);
			}
			cur_obj_play_sound_2(SOUND_OBJ_BULLY_EXPLODE_2);
			cur_obj_play_sound_2(SOUND_OBJ2_LARGE_BULLY_ATTACKED);
            o->oAction = mode_motos_death;
			}
	if ((o->oMoveFlags & OBJ_MOVE_LANDED) && (o->oFloor->type != SURFACE_BURNING) && (o->oPosY > o->oHomeY - 300)  ) {
		cur_obj_play_sound_2(SOUND_OBJ2_BULLY_ATTACKED);
		o->oAction = mode_motos_recover;
	}
}

void motos_recover(void) {
	approach_forward_vel(&o->oForwardVel, 0.0f, 2.0f);
	o->oVelY = 0.0f;
	if (o->oTimer == 0) { 
		cur_obj_become_intangible();
		cur_obj_shake_screen(SHAKE_POS_SMALL); 
		cur_obj_play_sound_2(SOUND_OBJ_BULLY_METAL);
	}

    if (cur_obj_check_if_near_animation_end()) {
            o->oSubAction++;
	} if (o->oSubAction == 1) {
        cur_obj_init_animation_with_sound(ANM_motos_down_recover);
	} else if (o->oSubAction == 2 ) {
			cur_obj_become_tangible();
            o->oAction = mode_motos_player_search;
	}
}
#if 0 //Not used after rework
void motos_recover2(void) {
		cur_obj_init_animation_with_sound(ANM_motos_safe_down);
		approach_forward_vel(&o->oForwardVel, 0.0f, 2.0f);
		o->oVelY = 0.0f;
		if (cur_obj_check_if_near_animation_end()) {
			cur_obj_become_tangible();
			o->oAction = mode_motos_player_search;
	}
}
#endif
void motos_spawn_minion(s32 arg0, s32 arg1, s32 arg2, u32 model, const BehaviorScript *behavior) {
	struct Object *mbully =
		spawn_object_abs_with_rot(o, 0, model, behavior, arg0, arg1, arg2, 0, 0, 0);
			mbully->oBullySubtype = BULLY_STYPE_MINION;
			mbully->oBehParams2ndByte = BULLY_BP_SIZE_SMALL;
}

void motos_minions(void) {
	if ((o->oBehParams >> 8) & 0x01) { //Check if Boss Version
		if (gCurrLevelNum == LEVEL_SL) {
			motos_spawn_minion(o->oPosX+390, o->oPosY, o->oPosZ+95, MODEL_CHILL_BULLY, bhvSmallChillBully);
			motos_spawn_minion(o->oPosX-196, o->oPosY, o->oPosZ-320, MODEL_CHILL_BULLY, bhvSmallChillBully);
			motos_spawn_minion(o->oPosX-620, o->oPosY, o->oPosZ+95, MODEL_CHILL_BULLY, bhvSmallChillBully);
		} else {
			motos_spawn_minion(o->oPosX+390, o->oPosY, o->oPosZ+95, MODEL_BULLY, bhvSmallBully);
			motos_spawn_minion(o->oPosX-196, o->oPosY, o->oPosZ-520, MODEL_BULLY, bhvSmallBully);
			motos_spawn_minion(o->oPosX-820, o->oPosY, o->oPosZ+95, MODEL_BULLY, bhvSmallBully);
		}
	}
}
void motos_death(void) { 
	o->oForwardVel = 0.0f;
	o->oVelY = 0.0f;
		switch (o->oSubAction) {
		case 0:
			create_sound_spawner(SOUND_OBJ_KING_WHOMP_DEATH);
			spawn_triangle_break_particles(20, 138, 3.0f, 4);
			cur_obj_hide();
			cur_obj_become_intangible();
			cur_obj_shake_screen(SHAKE_POS_SMALL); 
			spawn_mist_particles_variable(0, 0, 200.0f);
			o->oSubAction++;
			break;
        case 1:
			if ((o->oBehParams >> 8) & 0x01) { //Check if Boss Version
				if (o->oBullyKBTimerAndMinionKOCounter == 3) {
					
					o->oSubAction++;
				}
			} else o->oSubAction = 3;
            break;
        case 2:
			if (gCurrLevelNum == LEVEL_SL) {
				spawn_default_star(300.0f, 1500.0f, -4800.0f);
			} else {
				spawn_default_star(3700.0f, 600.0f, -5500.0f);
			}
			obj_mark_for_deletion(o);
            break;
		case 3:
			obj_explode_and_spawn_coins(46.0f, 2);
			break;
	}
}

void motos_main(void)
{
    cur_obj_update_floor_and_walls();

	o->oInteractionSubtype |= INT_SUBTYPE_GRABS_MARIO;
	
	switch (o->oAction) {
		case mode_motos_wait:
			motos_wait();
			break;
		case mode_motos_player_search:
			motos_player_search();
			break;
		case mode_motos_player_carry:
			motos_player_carry();
			break;
		case mode_motos_player_pitch:
			motos_player_pitch();
			break;
		case mode_motos_carry_start:
			motos_carry_start();
			break;
		case mode_motos_carry_run:
			motos_carry_run();
			break;
		case mode_motos_pitch:
			motos_pitch();
			break;
		case mode_motos_fly:
			motos_fly();
			break;
		case mode_motos_recover:
			motos_recover();
			break;
		case mode_motos_death:
			motos_death();
			break;
	}
//	default: rmonpf(("Error objmode motos\n")); }

	    cur_obj_move_standard(-78);							/*	monky moving 	*/
    if (o->oDistanceToMario < 5000.0f)
        cur_obj_enable_rendering();
    else
        cur_obj_disable_rendering();
}

void s_motos(void)
{
    f32 sp2C = 25.0f;
    f32 sp28 = 20.0f;

	cur_obj_scale(2.0f);

    o->oInteractionSubtype |= INT_SUBTYPE_GRABS_MARIO;

	switch (o->oHeldState) {
        case HELD_FREE:
            motos_main();
            break;
        case HELD_HELD:
			if (o->prevObj != NULL) {
				o->prevObj->oMotosUnk100 = 0;
				o->prevObj = NULL;
			}
			o->oMotosHandStatus = 0;
			o->oMotosUnk104 = FALSE;
            cur_obj_unrender_and_reset_state(8, 1);
            break;
        case HELD_THROWN:
            cur_obj_get_thrown_or_placed(sp2C, sp28, mode_motos_fly);
            break;
	}
    o->oInteractStatus = 0;
}
