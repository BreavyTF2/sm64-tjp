//Heavily modified version of the original Blargg code.
struct ObjectHitbox sBlarggHitbox = { //Custom Hitbox
    /* interactType: */ INTERACT_DAMAGE,
    /* downOffset: */ 0,
    /* damageOrCoinValue: */ 2,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 200,
    /* height: */ 250,
    /* hurtboxRadius: */ 201,
    /* hurtboxHeight: */ 251,
};
void unbaba_act_init(void) // Why is this needed?
{
	o->oAction++;
	o->oGraphYOffset = -175;
	obj_set_hitbox(o, &sBlarggHitbox);
}
void unbaba_act_swim(void) // Define Swimming Action for Blargg
{
	s8 shellspeed; //turn and speed multiplier

	if (gMarioState->action & ACT_FLAG_RIDING_SHELL) {
	shellspeed = 2;
	} else shellspeed = 1;

	    if (o->oMoveFlags & OBJ_MOVE_HIT_WALL) {
        o->oAction = 2;
    }
	
	if ( o->oDistanceToMario >= 2000 ) {
		cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x40*shellspeed);
		approach_forward_vel(&o->oForwardVel, 0.0f, .4f);
		approach_forward_vel(&o->oGraphYOffset, -175, 1.0f);
	} else if ( o->oDistanceToMario < 2000 ) {
		cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x60*shellspeed);
		approach_forward_vel(&o->oForwardVel, 2.0f*shellspeed, .8f);
		if ( o->oDistanceToMario < 1500 ) {
			if (cur_obj_check_if_near_animation_end()) {
				cur_obj_play_sound_2(SOUND_OBJ_SUSHI_SHARK_WATER_SOUND);   
			}
			approach_forward_vel(&o->oGraphYOffset, -100, 1.0f);
		} if ( o->oDistanceToMario < 1000 ) {
			if ( o->oDistanceToMario < 750 || (gMarioState->action & ACT_FLAG_RIDING_SHELL)) {
				if (abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw) < 0x200 && o->oTimer > 20) {
					o->oAction = 2;
				}
			}
		}
	}
	cur_obj_init_animation_with_accel_and_sound(0, 1);
}
void unbaba_act_attack(void) // Define Attacking Action for Blargg
{
	s32 animTimer = o->header.gfx.animInfo.animFrame;
	f32 shellspeed; ////turn and speed multiplier
	if (gMarioState->action & ACT_FLAG_RIDING_SHELL) {
		shellspeed = 1.4f;
	} else shellspeed = 1;
    if (o->oTimer == 0) {
        cur_obj_play_sound_2(SOUND_OBJ2_BLARGG_YELL); //XDelta
    } 
	cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x40);
	cur_obj_init_animation_with_accel_and_sound(1, 1*shellspeed);	
	if (animTimer >= (0) ){
		approach_forward_vel(&o->oForwardVel, 16.0f*shellspeed, 1.6f*shellspeed);
		approach_forward_vel(&o->oGraphYOffset, 0, 8.0f);
	} if (animTimer > (21) ){
		approach_forward_vel(&o->oForwardVel, 0, 2.0f*shellspeed);
		approach_forward_vel(&o->oGraphYOffset, -100, 16.0f);
	}
    if (cur_obj_check_if_near_animation_end()) {
     cur_obj_play_sound_2(SOUND_GENERAL_BUBBLES);    //XDelta
     o->oAction = 1;
	 o->oTimer = 1;
	}
}

void (*sBlarggActions[])(void) = { // Initiate action table for Blargg
   unbaba_act_init,
   unbaba_act_swim,
   unbaba_act_attack
};

void bhv_unbaba_loop(void) // Define what to do as well.
{
	switch (o->oAction) {
	case 0:
	unbaba_act_init(); //Initilize Hitbox
	break;
	case 1:
	unbaba_act_swim();
	break;
	case 2:
	unbaba_act_attack();
	break;
	}
	cur_obj_become_tangible();
	cur_obj_update_walls2();
	cur_obj_if_hit_wall_bounce_away();// Initiate Wall Collision
	cur_obj_scale(2.0f); // Scale Model to 2.0
	cur_obj_move_standard(-87); // Set wall collision angle
	cur_obj_call_action_function(sBlarggActions);
	o->hitboxDownOffset = -o->oGraphYOffset;
    o->oInteractStatus = 0;
}
