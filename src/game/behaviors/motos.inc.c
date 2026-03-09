//#define ANM_motos_basedata_A    	0
//#define ANM_motos_carry         	1
//#define ANM_motos_carry_run     	2
//#define ANM_motos_carry_start   	3
//#define ANM_motos_down_recover  	4
//#define ANM_motos_down_stop     	5
//#define ANM_motos_pitch         	6
//#define ANM_motos_safe_down     	7
//#define ANM_motos_wait          	8
//#define ANM_motos_walk          	9

void s_motos_hand(void)
{

	struct Object *firep;


	o->oParentRelativePosX = 100.0f;
//	o->oParentRelativePosY = 0.0f;
	o->oParentRelativePosZ = 150.0f;

	o->oMoveAngleYaw = o->parentObj->oMoveAngleYaw;

	switch (o->parentObj->oMotosUnk88 ){
	 	case	0:
			if (o->parentObj->prevObj != NULL && o->parentObj->prevObj != o){
				o->parentObj->prevObj->oFlags &= ~OBJ_FLAG_ACTIVE_FROM_AFAR;
				o->parentObj->prevObj->oMotosUnk100 = 0;
			}
			o->parentObj->prevObj = o;
			break;
		case	1:
			obj_set_gfx_pos_at_obj_pos(gMarioObject, o);
			vec3f_copy(gMarioState->pos, gMarioObject->header.gfx.pos); // Added to fix camera
			break;
		case	2:
            gMarioObject->oInteractStatus |= (INT_STATUS_MARIO_UNK6 + INT_STATUS_MARIO_UNK2);
			gMarioStates[0].forwardVel = 50.0f;
			gMarioStates[0].vel[1] = 0.0f;
			o->oInteractStatus &= ~(INT_STATUS_GRABBED_MARIO);
			o->parentObj->oMotosUnk88 = 0;
			o->parentObj->oMotosUnk100 = 0;
			break;
		case	4: //spawn fire
			if ((firep = spawn_object_with_scale(o, MODEL_UNKNOWN_7D, bhvUnusedParticleSpawn, o->parentObj->header.gfx.scale[0])) != NULL) {
				o->parentObj->prevObj = firep;
				o->parentObj->oMotosUnk88 = 5;
			}
			break;
		case	5: //hold object
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
		case	6: //throw object
			if (o->parentObj->prevObj != NULL && o->parentObj->prevObj != o){
				o->parentObj->prevObj->oIntangibleTimer = 0;
				o->parentObj->prevObj->oForwardVel = 40.0f;
				o->parentObj->prevObj->oVelY = (-30.0f + o->parentObj->oDistanceToMario * 0.066f);
				o->parentObj->prevObj->oMoveAngleYaw = o->parentObj->oMoveAngleYaw;
				o->parentObj->prevObj->oFaceAngleYaw = o->parentObj->oFaceAngleYaw;
				o->parentObj->prevObj->oAction = BULLY_ACT_KNOCKBACK;
			}
				o->parentObj->oMotosUnk88 = 0;
			break;
		
    }

//Below is legacy code that was commented out for pathmotos.p

//	if (o->parentObj->oMotosUnk88 != 0){
//		o->parentObj->oMotosUnk88 = 0;
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

s32 motos_velocity(f32 *forwardVel, f32 spC, f32 sp10) {
    s32 sp4 = 0;

    if (*forwardVel > spC) {
        *forwardVel -= sp10;
        if (*forwardVel < spC) {
            *forwardVel = spC;
        }
    } else if (*forwardVel < spC) {
        *forwardVel += sp10;
        if (*forwardVel > spC) {
            *forwardVel = spC;
        }
    } else {
        sp4 = 1;
    }

    return sp4;
}


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
	cur_obj_init_animation_with_sound(8);
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
		
	cur_obj_init_animation_with_sound(9);
	o->oForwardVel = 2.0f * o->header.gfx.scale[0]/2;
	cur_obj_rotate_yaw_toward(o->oAngleToMario, 300);
	if ( o->oDistanceToMario > 1500 ) {
		o->oAction = mode_motos_wait;
	}
	if ((o->oPosY < o->oHomeY - 100) & (o->oTimer >= 20)) { //Should not happen unless Light Motos is performed, or the player lures motos off the platform in SL.
		o->oAction = 9;
	}

	if ( o->oInteractStatus & INT_STATUS_GRABBED_MARIO ){
		o->oAction = mode_motos_player_carry;
	 	o->oMotosUnk88 = 1;
	}
	
	if (o->oDistanceToMario < 1000) {
	// Let Motosman grab Bullies, and Dice
		if (Bully != NULL) {
			if ((dist_between_objects(o, Bully) <= 150)) {
				o->prevObj = Bully;
				o->oMotosUnk88 = 5;
				o->oAction = mode_motos_carry_start;
			}
		}

		if (ChillBully != NULL) {
			if ((dist_between_objects(o, ChillBully) <= 150)) {
				o->prevObj = ChillBully;
				o->oMotosUnk88 = 5;
				o->oAction = mode_motos_carry_start;
			}
		}

		if (Dice != NULL) {
			if ((dist_between_objects(o, Dice) <= 150) && !(Dice->header.gfx.node.flags & GRAPH_RENDER_INVISIBLE)) {
				o->prevObj = Dice;
				o->oMotosUnk88 = 5;
				o->oAction = mode_motos_carry_start;
			}
		}

		if (o->oBehParams2ndByte == 0x01 && !((o->oTimer+1) % 150) && o->oDistanceToMario > 250) {
			o->oAction = mode_motos_carry_start;
			o->oMotosUnk88 = 4;
		}
	}
}

void motos_player_carry(void)
{

	if (o->oTimer == 0) {
		cur_obj_init_animation_with_sound(3);
		cur_obj_play_sound_2(SOUND_OBJ_UNKNOWN3);
	}
	cur_obj_become_intangible();
	if ( cur_obj_check_if_near_animation_end() )	o->oAction = mode_motos_player_pitch;

}

void motos_player_pitch(void)
{

	motos_velocity(&o->oForwardVel, 0.0f, 1.0f);
	if (o->oTimer == 0) {
		cur_obj_init_animation_with_sound(6);
	}
	if ( cur_obj_check_anim_frame(7) ) {
		cur_obj_play_sound_2(SOUND_OBJ_UNKNOWN4);
	}
	if ( cur_obj_check_anim_frame(14) ) { 
		o->oMotosUnk88 = 2;
		o->numCollidedObjs = 10;
	}
	if ( cur_obj_check_if_near_animation_end() ){
		o->oAction = mode_motos_wait;
		cur_obj_become_tangible();
	}

}

void motos_carry_start(void)
{

	motos_velocity(&o->oForwardVel, 0.0f, 1.0f);

	if (o->oTimer == 0) {
		cur_obj_init_animation_with_sound(3);
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

	cur_obj_init_animation_with_sound(2);
	
	if ( (o->oDistanceToMario > 1000) || (o->oMoveFlags & OBJ_MOVE_HIT_EDGE) ) { //Give up if Mario is unreachable
		o->oMotosUnk88 = 0;
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
	motos_velocity(&o->oForwardVel, 0.0f, 1.0f);
	cur_obj_init_animation_with_sound(6);

	if ( cur_obj_check_anim_frame(7) ) 
		cur_obj_play_sound_2(SOUND_OBJ_UNKNOWN4);
	
	if ( cur_obj_check_anim_frame(14) ) { 
		o->oMotosUnk88 = 6;
		o->numCollidedObjs = 10;
	}
	if ( cur_obj_check_if_near_animation_end() ) {
		o->oAction = mode_motos_wait;
		o->oMotosUnk104 = FALSE;
	}
}

void motos_fly(void)
{
	cur_obj_init_animation_and_extend_if_at_end(5);

		if (((gCurrLevelNum == LEVEL_SL) & (o->oPosY < 1000.0f)) || ((o->oFloor->type == SURFACE_BURNING) && ( o->oMoveFlags & OBJ_MOVE_LANDED))) {
			if ((o->oFloor->type == SURFACE_BURNING)) { 
				spawn_object_with_scale(o, MODEL_BURN_SMOKE, bhvBlackSmokeBowser, o->parentObj->header.gfx.scale[0]);
			}
			cur_obj_play_sound_2(SOUND_OBJ_BULLY_EXPLODE_2);
			cur_obj_play_sound_2(SOUND_OBJ2_LARGE_BULLY_ATTACKED);
			o->oHealth--;
			if (o->oHealth && o->oHealth != 0) {
                o->oAction = 9;
			} else
				o->oAction = 7;
	}
	if (( o->oMoveFlags & OBJ_MOVE_LANDED) && (o->oFloor->type != SURFACE_BURNING)  ) {
		cur_obj_play_sound_2(SOUND_OBJ2_BULLY_ATTACKED);
		o->oAction = 6;
	}
}

void motos_recover(void) {
	motos_velocity(&o->oForwardVel, 0.0f, 1.0f);

	if (o->oTimer == 0) { 
		cur_obj_become_intangible();
		cur_obj_shake_screen(SHAKE_POS_SMALL); 
		cur_obj_play_sound_2(SOUND_OBJ_BULLY_METAL);
	}
 
    if (o->oSubAction == 0) {
        cur_obj_init_animation_with_sound(5);
		if (o->oTimer == 10) {
			cur_obj_play_sound_2(SOUND_OBJ_UNKNOWN3);
		}
        if (cur_obj_check_if_near_animation_end()) {
            o->oSubAction++;
		}
    } else if (o->oSubAction == 1) {
        cur_obj_init_animation_with_sound(4);
        if (cur_obj_check_if_near_animation_end()){
			cur_obj_become_tangible();
            o->oAction = mode_motos_player_search;
		}
	}
}

void motos_recover2(void) { //Motos drops down after minions die, and spawns 3 extra bullies
	if (o->oTimer == 0) {
		o->oBounciness = -0.05f; //Small bounce, no bounce looks weird.
		cur_obj_become_intangible();
		cur_obj_play_sound_2(SOUND_OBJ_THWOMP);
		cur_obj_init_animation_with_sound(8);

		if (gCurrLevelNum == LEVEL_SL) {
			spawn_object_relative(0, 300, 0, 0, o, MODEL_CHILL_BULLY, bhvSmallChillBully);
			spawn_object_relative(0, -300, 0, 0, o, MODEL_CHILL_BULLY, bhvSmallChillBully);
		} else {
			spawn_object_relative(0, 300, 0, 0, o, MODEL_BULLY, bhvSmallBully);
			spawn_object_relative(0, -300, 0, 0, o, MODEL_BULLY, bhvSmallBully);
		}
	}
	

	if (o->oPosY < (o->oHomeY + 15)){
		if (cur_obj_check_anim_frame(0)) {
			cur_obj_shake_screen(SHAKE_POS_MEDIUM); 
			cur_obj_play_sound_2(SOUND_OBJ_BULLY_METAL);
		}
		cur_obj_init_animation_with_sound(7);
		if (cur_obj_check_if_near_animation_end()) {
			o->oBounciness = -0.5f;
			cur_obj_become_tangible();
			o->oAction = mode_motos_player_search;
		}
	}
}

void motos_returnhome(void) {
    switch (o->oSubAction) {
        case 0:
		    cur_obj_become_intangible();
            if (o->oTimer == 0)
                cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB_JUMP);
            cur_obj_init_animation_and_extend_if_at_end(5);
            o->oMoveAngleYaw =  cur_obj_angle_to_home();
            if (o->oPosY < o->oHomeY)
                o->oVelY = 60.0f;
            else {
                arc_to_goal_pos(&o->oHomeX, &o->oPosX, 50.0f, -4.0f);
                o->oSubAction++;
				o->oMotosUnk88 = 0;
				o->oMotosUnk100 = 0;
            }
            break;
        case 1:
		cur_obj_init_animation_and_extend_if_at_end(5);
            if (o->oVelY < 0 && o->oPosY < o->oHomeY) {
                o->oPosY = o->oHomeY;
                o->oVelY = 0;
                o->oForwardVel = 0;
                o->oGravity = -4.0f;
				o->oMotosUnk88 = 0;
				o->oMotosUnk100 = 0;
                cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB);
                cur_obj_shake_screen(SHAKE_POS_MEDIUM);
                o->oSubAction++;
            }
            break;
        case 2:
		cur_obj_init_animation(4);
		if (cur_obj_check_if_near_animation_end()) {
			cur_obj_become_tangible();
        o->oAction = mode_motos_player_search;
		}
            break;
    }
}	

void motos_spawn_minion(s32 arg0, s32 arg1, s32 arg2, s16 arg3) {
	struct Object *mbully =
		spawn_object_abs_with_rot(o, 0, MODEL_BULLY, bhvSmallBully, arg0, arg1, arg2, 0, arg3, 0);
			mbully->oBullySubtype = BULLY_STYPE_MINION;
			mbully->oBehParams2ndByte = BULLY_BP_SIZE_SMALL;
}

void motos_spawn_ice_minion(s32 arg0, s32 arg1, s32 arg2, s16 arg3) {
    struct Object *mbully =
        spawn_object_abs_with_rot(o, 0, MODEL_CHILL_BULLY, bhvSmallChillBully, arg0, arg1, arg2, 0, arg3, 0);
			mbully->oBullySubtype = BULLY_STYPE_MINION;
			mbully->oBehParams2ndByte = BULLY_BP_SIZE_SMALL;
}
void motos_minions(void) {

	if (gCurrLevelNum == LEVEL_SL) {
		motos_spawn_ice_minion(o->oPosX+390, o->oPosY, o->oPosZ+95, 0);
		motos_spawn_ice_minion(o->oPosX-196, o->oPosY, o->oPosZ-320, 0);
		motos_spawn_ice_minion(o->oPosX-620, o->oPosY, o->oPosZ+95, 0);
	} else {
		motos_spawn_minion(o->oPosX+390, o->oPosY, o->oPosZ+95, 0);
		motos_spawn_minion(o->oPosX-196, o->oPosY, o->oPosZ-520, 0);
		motos_spawn_minion(o->oPosX-820, o->oPosY, o->oPosZ+95, 0);
	}

    o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;

    cur_obj_become_intangible();

    o->oAction = 11;
}
void motos_inactive(void) {
	s16 Height;
	if (gCurrLevelNum == LEVEL_SL) {
		Height = 1421;
	} else Height = 323;

	if (o->oBullyKBTimerAndMinionKOCounter == 3) {
		play_puzzle_jingle();
		if (o->oTimer >= 91) {
			o->oPosY = Height+714.0f;
			o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
            o->oAction = 8;
		}
	}
}

void motos_death(void) { 
        create_sound_spawner(SOUND_OBJ_KING_WHOMP_DEATH);
        spawn_mist_particles_variable(0, 0, 200.0f);
        spawn_triangle_break_particles(20, 138, 3.0f, 4);
        cur_obj_shake_screen(SHAKE_POS_SMALL);
		cur_obj_hide();
        cur_obj_become_intangible();

		if (gCurrLevelNum == LEVEL_SL) {
			spawn_default_star(300.0f, 1500.0f, -4800.0f);
		}
		else {
			spawn_default_star(3700.0f, 600.0f, -5500.0f);
		}

		o->oAction = 10;
}	
void motos_deactivate(void) {  //Added so motos doesn't make walking sounds after death
		cur_obj_hide();
        cur_obj_become_intangible();
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
	case 6:
	motos_recover();
	break;
	case 7:
	motos_death();
	break;
	case 8:
	motos_recover2();
	break;
	case 9:
	motos_returnhome();
	break;
	case 10:
	motos_deactivate();
	break;
	case 11:
	motos_inactive();
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
			o->oMotosUnk88 = 0;
			o->oMotosUnk104 = FALSE;
            cur_obj_unrender_and_reset_state(8, 1);
            break;
        case HELD_THROWN:
        case HELD_DROPPED:
            cur_obj_get_thrown_or_placed(sp2C, sp28, mode_motos_fly);
            break;
	}
    o->oInteractStatus = 0;
}
