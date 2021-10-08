//Uses some of the source data with modifications
struct ObjectHitbox sBlarggHitbox = { //Custom Hitbox
    /* interactType: */ INTERACT_DAMAGE,
    /* downOffset: */ 0,
    /* damageOrCoinValue: */ 2,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 200,
    /* height: */ 113,
    /* hurtboxRadius: */ 201,
    /* hurtboxHeight: */ 123,
};
void bhv_unbaba_init(void)
{
o->oAction++;
obj_set_hitbox(o, &sBlarggHitbox);
}
void unbaba_act_init(void) //Duplicated to copy the old table
{
o->oAction++;
obj_set_hitbox(o, &sBlarggHitbox);
}
void unbaba_act_swim(void) // Define Swimming Action for Blargg
{
	s32 shellspeed; //Turn Multiplier
	shellspeed = 4;
	cur_obj_become_tangible();
	    if (o->oMoveFlags & OBJ_MOVE_HIT_WALL) {
        o->oAction = 2;
    }
	
	if ( o->oDistanceToMario >= 2000 ) {
			cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x40);
			o->oForwardVel = 1.0f;
				if (gMarioState->action & ACT_FLAG_RIDING_SHELL) {
				cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x40*shellspeed);
				o->oForwardVel = 2.0f;
			}
	}
	if ( o->oDistanceToMario < 2000 ) {
			cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x60);
			o->oForwardVel = 2.0f;
				if (gMarioState->action & ACT_FLAG_RIDING_SHELL) {
					cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x60*shellspeed);
					o->oForwardVel = 4.0f;
			}
	}


	if ( o->oDistanceToMario < 1500 ) {
			o->oForwardVel = 2.0f;
				if (gMarioState->action & ACT_FLAG_RIDING_SHELL){
					o->oForwardVel = 8.0f;
				}
	}
	if ( o->oDistanceToMario < 1000 ) {
		if (gMarioState->action & ACT_FLAG_RIDING_SHELL) {
			if (abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw) < 0x200) {
		o->oAction = 2;
				}
			}
		cur_obj_rotate_yaw_toward(o->oAngleToMario, 0xA0);
		o->oForwardVel = 3.75f;

		}
	if ( o->oDistanceToMario < 750) {
		if (abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw) < 0x200) {
	o->oAction = 2;
		}
	}
	if (gMarioState->action & ACT_FLAG_RIDING_SHELL){
		cur_obj_init_animation_with_accel_and_sound(0, 2);
		if (cur_obj_check_if_near_animation_end()) {
			cur_obj_init_animation_with_accel_and_sound(0, 2);
			}
		}
			
	cur_obj_init_animation_with_sound(UNBABA_ANIM_SWIM);
}
void unbaba_act_attack(void) // Define Attacking Action for Blargg
{
	s32 animTimer;	
    animTimer = o->header.gfx.animInfo.animFrame;
	cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x20);
	cur_obj_become_tangible();
	if (gMarioState->action & ACT_FLAG_RIDING_SHELL){
			cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x80);
		cur_obj_init_animation_with_accel_and_sound(1, 1.5f);
	}
	        cur_obj_play_sound_2(SOUND_OBJ_SUSHI_SHARK_WATER_SOUND);
	cur_obj_init_animation_with_sound(UNBABA_ANIM_ATTACK);
		if (animTimer < (20)){
			o->oForwardVel = 2.0*(animTimer)+1;
			o->hurtboxRadius = 255;
			o->hurtboxHeight = 205;
			if (gMarioState->action & ACT_FLAG_RIDING_SHELL){
			o->oForwardVel = 3.0*(animTimer)+1;
			}
		}
		if (animTimer >= (20)){
			o->oForwardVel = 1*(animTimer)+5;
			o->hurtboxRadius = 330;
			o->hurtboxHeight = 245;
			if (gMarioState->action & ACT_FLAG_RIDING_SHELL){
			o->oForwardVel = 3.0*(animTimer)+6;
			}
	}
			if (animTimer > (25)){
			o->oForwardVel = 36/(animTimer-12)+3;
			o->hurtboxRadius = 255;
			o->hurtboxHeight = 205;
				if (gMarioState->action & ACT_FLAG_RIDING_SHELL){
			o->oForwardVel = 60/(animTimer-18)+4;
			}
	}
	if (cur_obj_check_if_near_animation_end()) {	
	 o->oForwardVel = 2.5f;
	 o->hurtboxRadius = 201;
	 o->hurtboxHeight = 123;
	 o->oAction = 1;

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
	unbaba_act_swim();
	break;
	case 1:
	unbaba_act_attack();
	break;
	}
	cur_obj_become_tangible();
	cur_obj_update_walls2();
	cur_obj_if_hit_wall_bounce_away();// Initiate Wall Collision
	 cur_obj_scale(2.0f); // Scale Model to 2.0
	 cur_obj_move_standard(-87); // Set wall collision type
    obj_check_attacks(&sBlarggHitbox, o->oAction);
	cur_obj_call_action_function(sBlarggActions);
}
