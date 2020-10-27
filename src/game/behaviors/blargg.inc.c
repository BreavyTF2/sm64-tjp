//Uses some of the source data with modifications
struct ObjectHitbox sBlarggHitbox = { //Custom Hitbox
    /* interactType: */ INTERACT_DAMAGE,
    /* downOffset: */ 0,
    /* damageOrCoinValue: */ 2,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 300,
    /* height: */ 100,
    /* hurtboxRadius: */ 450,
    /* hurtboxHeight: */ 150,
};
void bhv_unbaba_init(void)
{
o->oAction++;
}
void unbaba_act_init(void) //Duplicated to copy the old table
{
o->oAction++;
}
void unbaba_act_swim(void) // Define Swimming Action for Blargg
{
	o->hurtboxRadius = 301;
	o->hurtboxHeight = 101;
	if ( o->oDistanceToMario < 1750 ) {
		cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x80);
		o->oForwardVel = 4.0f;
	}
	cur_obj_init_animation_with_sound(UNBABA_ANIM_SWIM);
	if (cur_obj_check_if_near_animation_end()) {
		cur_obj_init_animation_with_sound(UNBABA_ANIM_SWIM);
	}
		if ( o->oDistanceToMario < 400 ) 	o->oAction = 2;
}
void unbaba_act_attack(void) // Define Attacking Action for Blargg
{
	cur_obj_init_animation_with_sound(UNBABA_ANIM_ATTACK);
	o->hurtboxRadius = 450;
	o->hurtboxHeight = 200;
	if (cur_obj_check_if_near_animation_end()) {	o->oAction = 1;
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
	 cur_obj_update_floor_and_walls();// Initiate Wall Collision
	 cur_obj_scale(2.0f); // Scale Model to 2.0
	 cur_obj_move_standard(-78); // Set wall collision type
	 if ( o->oDistanceToMario < 350 ) {
    obj_check_attacks(&sBlarggHitbox, o->oAction);
	 }
	cur_obj_call_action_function(sBlarggActions);
	//o->oInteractStatus = 0;

}