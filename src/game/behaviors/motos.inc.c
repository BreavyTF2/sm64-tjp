void s_motos_hand(void)
{

//	struct Object *firep;
 //   struct Object *parent = o->parentObj;
//    obj_copy_pos(o, parent);
//	o->oPosY += 150.0f;
//	o->oPosX += 0.0f;
//	o->oPosZ += 100.0f;
	o->oMoveAngleYaw = o->parentObj->oMoveAngleYaw;

	switch (o->parentObj->oMotosUnk88 ){
	 	case	0:
			break;
		case	1:
			obj_set_gfx_pos_at_obj_pos(gMarioObject, o);
			break;
		case	2:
            gMarioObject->oInteractStatus |=
                (INT_STATUS_MARIO_UNK2 + INT_STATUS_MARIO_UNK6); 
			gMarioStates[0].forwardVel = 50.0f;
			o->parentObj->oMotosUnk88 = 0;
			break;
	}



//	if (o->parentObj->oMotosUnk88 != 0){
//		o->parentObj->oMotosUnk88 = 0;
//	 	firep = spawn_object(o, MODEL_UNKNOWN_7D, bhvUnusedParticleSpawn);
//		firep->oForwardVel = 40.0f;
//		firep->oVelY = 20.0f;
//		firep->oMoveAngleYaw = o->parentObj->oMoveAngleYaw;
//	}


}

int s_ai_pitch(s32 angle, f32 dist)
{

	if ( (cur_obj_rotate_yaw_toward(o->oAngleToMario,angle)) && (o->oDistanceToMario < dist) ) 
	return(1);
	else																	  return(0);
	
}

void bhv_motos_anchor_mario_loop(void) {
    common_anchor_mario_behavior(50.0f, 50.0f, 64);
}

void motos_wait(void)
{
    o->oForwardVel = 0.0f;
    o->oVelY = 0.0f;
	cur_obj_init_animation_with_sound(8);

	if ( o->oDistanceToMario < 1000 )	o->oAction = 1;

}

void motos_player_search(void)
{
	s32 sp1C = gGlobalTimer;
	if ((sp1C & 14) == 0) {
cur_obj_play_sound_2(SOUND_OBJ_BULLY_WALKING);
}

	cur_obj_init_animation_with_sound(9);
	o->oForwardVel = 2.0f;
	cur_obj_rotate_yaw_toward(o->oAngleToMario,300);

	if ( o->oInteractStatus & INT_STATUS_GRABBED_MARIO){
		o->oAction = 2;
	 	o->oMotosUnk88 = 1;
	}


}


void motos_player_carry(void)
{

	cur_obj_init_animation_with_sound(3);
	if ( cur_obj_check_if_near_animation_end() )	o->oAction = 5;

}

void motos_player_pitch(void){

	o->oForwardVel = 0.0f;
	cur_obj_init_animation_with_sound(6);
	if ( cur_obj_check_anim_frame(14) ){
		o->oMotosUnk88 = 2;		/* nageru shyn kan	*/
		o->oMotosUnk100 = 10;		/* hit time wait!!	*/
	}
	if ( cur_obj_check_if_near_animation_end() ){
		o->oAction = 0;
		o->oInteractStatus &= ~(INT_STATUS_GRABBED_MARIO);
	}

}

void motos_carry_start(void)
{
	cur_obj_init_animation_with_sound(3);
	if ( cur_obj_check_if_near_animation_end() ){
		if ( s_ai_pitch(0x100,250) ) o->oAction = 3;
		else			   			 o->oAction = 5;
	}		

}

void motos_carry_run(void)
{
	s32 sp1C = gGlobalTimer;
	o->oForwardVel = 5.0f;
	if ((sp1C & 4) == 0) {
cur_obj_play_sound_2(SOUND_ACTION_METAL_STEP);
}
	cur_obj_init_animation_with_sound(2);
	if ( s_ai_pitch(0x100,250) )  o->oAction = 3;
	else			   			  o->oAction = 5;

}

void motos_pitch(void)
{
	o->oForwardVel = 0.0f;
	cur_obj_init_animation_with_sound(6);

	if ( cur_obj_check_anim_frame(14) ){
		o->oMotosUnk88 = 0;
	}
	if ( cur_obj_check_if_near_animation_end() )	
	o->oAction = 0;

}

void motos_fly(void)
{
//   o->oForwardVel = 5.0f;
	cur_obj_init_animation_with_sound(5);
	if ( o->oMoveFlags & OBJ_MOVE_LANDED ) {
	cur_obj_play_sound_2(SOUND_OBJ2_KING_BOBOMB_DAMAGE);           
	cur_obj_init_animation_with_sound(4);
	o->oAction = 0;
	}

}

void (*sMotosActions[])(void) = { motos_wait, motos_player_search, motos_player_carry, motos_player_pitch, motos_carry_start, motos_carry_run, motos_pitch, motos_fly};

void motos_main(void)
{
    cur_obj_update_floor_and_walls();
//cur_obj_move_using_fvel_and_gravity();	
	

//	default: rmonpf(("Error objmode motos\n")); }

	    cur_obj_move_standard(-78);							/*	monky moving 	*/
    if (o->oDistanceToMario < 5000.0f)
        cur_obj_enable_rendering();
    else
        cur_obj_disable_rendering();
}

void s_motos(void)
{
    f32 sp2C = 10.0f;
    f32 sp28 = 20.0f;

	cur_obj_scale(2.0f);

    o->oInteractionSubtype |= INT_SUBTYPE_GRABS_MARIO;

	switch (o->oAction) {
	case 0:
	motos_wait();
	break;
	case 1:
	motos_player_search();
	break;
	case 2:
	motos_player_carry();
	break;
	case 3:
	motos_player_pitch();
	break;
	case 4:
	motos_carry_start();
	break;
	case 5:
	motos_carry_run();
	break;
	case 6:
	motos_pitch();
	break;
	case 7:
	motos_fly();
	break;
	}
cur_obj_call_action_function(sMotosActions);
	switch (o->oHeldState) {
        case HELD_FREE:
            motos_main();
            break;
        case HELD_HELD:
            cur_obj_unrender_and_reset_state(1, 7);
            break;
        case HELD_THROWN:
        case HELD_DROPPED:
            cur_obj_get_thrown_or_placed(sp2C, sp28, 7);
            break;
	}
    o->oInteractStatus = 0;
//	s_erase_shape(obj_playerdist,2000);
 // cur_obj_become_tangible();
}
