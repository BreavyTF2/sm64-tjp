//Uses some of the source data with modifications
struct ObjectHitbox sBlarggHitbox = { //Custom Hitbox
    /* interactType: */ INTERACT_DAMAGE,
    /* downOffset: */ 0,
    /* damageOrCoinValue: */ 2,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 300,
    /* height: */ 100,
    /* hurtboxRadius: */ 301,
    /* hurtboxHeight: */ 101,
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
	o->hurtboxRadius = 301;
	o->hurtboxHeight = 101;
	if ( o->oDistanceToMario < 2000 ) {
		cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x40);
		o->oForwardVel = 1.5f;
	}
		if ( o->oDistanceToMario < 1000 ) {
		cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x80);
		o->oForwardVel = 2.5f;
		}
		if ( o->oDistanceToMario < 750) {
		if (abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw) < 0x200) {
		o->oAction = 2;
		}
	}
	cur_obj_init_animation_with_sound(UNBABA_ANIM_SWIM);
	if (cur_obj_check_if_near_animation_end()) {
		cur_obj_init_animation_with_sound(UNBABA_ANIM_SWIM);
	}
}
void unbaba_act_attack(void) // Define Attacking Action for Blargg
{
	s32 animTimer;
    animTimer = o->header.gfx.animInfo.animFrame;
	
	cur_obj_init_animation_with_sound(UNBABA_ANIM_ATTACK);
		if (animTimer > (5)){
			o->oForwardVel = 15.0f;
		}
		if (animTimer > (10)) {
			o->hurtboxRadius = 350;
			o->hurtboxHeight = 175;
		o->oForwardVel = 17.5f;
	}
	if (animTimer > (15)) {
	o->hurtboxRadius = 450;
	o->hurtboxHeight = 250;
	o->oForwardVel = 20.0f;
	}
	if (animTimer > (20)) {
		o->oForwardVel = 12.5f;
	}
		if (animTimer > (25)) {
		o->oForwardVel = 7.5f;
	}
	if (animTimer > (30)) {
		o->oForwardVel = 4.0f;
	}
	if (cur_obj_check_if_near_animation_end()) {	
	 o->oAction = 1;
	 o->oForwardVel = 1.5f;
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
	cur_obj_resolve_wall_collisions();
	cur_obj_if_hit_wall_bounce_away();// Initiate Wall Collision
	 cur_obj_scale(2.0f); // Scale Model to 2.0
	 cur_obj_move_standard(-78); // Set wall collision type
	 if ( o->oDistanceToMario < 600 ) {
    obj_check_attacks(&sBlarggHitbox, o->oAction);
	 }
	cur_obj_call_action_function(sBlarggActions);
//	o->oInteractStatus = 0;

}
