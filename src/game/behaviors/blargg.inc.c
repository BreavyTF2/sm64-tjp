//Heavily modified version of the original Blargg code.
struct ObjectHitbox sBlarggHitbox = { //Custom Hitbox
    /* interactType: */ INTERACT_DAMAGE,
    /* downOffset: */ 0,
    /* damageOrCoinValue: */ 2,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 180,
    /* height: */ 113,
    /* hurtboxRadius: */ 181,
    /* hurtboxHeight: */ 123,
};
void unbaba_act_init(void) // Why is this needed?
{
o->oAction++;
obj_set_hitbox(o, &sBlarggHitbox);
}
void unbaba_act_swim(void) // Define Swimming Action for Blargg
{
	s8 shellspeed; //turn and speed multiplier
	
	cur_obj_become_tangible();
	if (gMarioState->action & ACT_FLAG_RIDING_SHELL) {
	shellspeed = 2;
	} else shellspeed = 1;

	    if (o->oMoveFlags & OBJ_MOVE_HIT_WALL) {
        o->oAction = 2;
    }
	
	if ( o->oDistanceToMario >= 2000 ) {
			cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x40*shellspeed);
			o->oForwardVel = 0.0f;
	}
	if ( o->oDistanceToMario < 2000 ) {
			cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x60*shellspeed);
			o->oForwardVel = 2.0f*shellspeed;
	}
	if ( o->oDistanceToMario < 1500 ) {
			o->oForwardVel = 2.0f*shellspeed;
		if (cur_obj_check_if_near_animation_end()) {
		cur_obj_play_sound_2(SOUND_OBJ_SUSHI_SHARK_WATER_SOUND);   
		}
	}
	if ( o->oDistanceToMario < 1000 ) {
		if ((gMarioState->action & ACT_FLAG_RIDING_SHELL) && o->oTimer > 20 && (abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw) < 0x200)) {
		o->oAction = 2;
		}
		cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x20*shellspeed);
		o->oForwardVel = 3.75f;
		}
	if ( o->oDistanceToMario < 750) {
		if (abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw) < 0x200 && o->oTimer > 25) {
	o->oAction = 2;
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
	
	cur_obj_become_tangible();
	cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x40*shellspeed);
	cur_obj_init_animation_with_accel_and_sound(1, 1*shellspeed);
	if (animTimer < (20)){
			o->oForwardVel = ((1.5f*animTimer)*shellspeed);
			o->hurtboxHeight = 205;
	} if (animTimer >= (20)){
			o->oForwardVel = ((animTimer)+5)*shellspeed;
			o->hurtboxHeight = 245;
	} if (animTimer > (25)){
			o->oForwardVel = (36/(animTimer-12)+4)*shellspeed;
			o->hurtboxHeight = 205;
	}
    if (o->oTimer == 0) {
        cur_obj_play_sound_2(SOUND_OBJ2_BLARGG_YELL); //XDelta
    } 
    if (cur_obj_check_if_near_animation_end()) {
     cur_obj_play_sound_2(SOUND_GENERAL_BUBBLES);    //XDelta
     o->hurtboxHeight = 123;
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
    obj_check_attacks(&sBlarggHitbox, o->oAction);
	cur_obj_call_action_function(sBlarggActions);
}
