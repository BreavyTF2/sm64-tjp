//Uses some of the source data with modifications
struct ObjectHitbox sBlarggHitbox = {
    /* interactType: */ INTERACT_DAMAGE,
    /* downOffset: */ 0,
    /* damageOrCoinValue: */ 1,
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
void unbaba_act_init(void)
{
o->oAction++;
}
void unbaba_act_swim(void)
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
void unbaba_act_attack(void)
{
	cur_obj_init_animation_with_sound(UNBABA_ANIM_ATTACK);
	o->hurtboxRadius = 450;
	o->hurtboxHeight = 200;
	if (cur_obj_check_if_near_animation_end()) {	o->oAction = 1;
	}
}

void (*sBlarggActions[])(void) = {
   unbaba_act_init,
   unbaba_act_swim,
   unbaba_act_attack
};

void bhv_unbaba_loop(void)
{
	switch (o->oAction) {
	case 0:
	unbaba_act_swim();
	break;
	case 1:
	unbaba_act_attack();
	break;
	}
	 cur_obj_scale(2.0f);
	 if ( o->oDistanceToMario < 300 ) {
    obj_check_attacks(&sBlarggHitbox, o->oAction);
	 }
	cur_obj_call_action_function(sBlarggActions);

}