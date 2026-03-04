// spindrift.c.inc

struct ObjectHitbox sSpindriftHitbox = {
    /* interactType: */ INTERACT_BOUNCE_TOP,
    /* downOffset: */ 0,
    /* damageOrCoinValue: */ 2,
    /* health: */ 1,
    /* numLootCoins: */ 3,
    /* radius: */ 90,
    /* height: */ 80,
    /* hurtboxRadius: */ 80,
    /* hurtboxHeight: */ 70,
};

void bhv_spindrift_loop(void) {
    o->activeFlags |= ACTIVE_FLAG_UNK10;
    if (cur_obj_set_hitbox_and_die_if_attacked(&sSpindriftHitbox, SOUND_OBJ_DYING_ENEMY1, 0))
        cur_obj_change_action(1);
    cur_obj_update_floor_and_walls();
	cur_obj_init_animation_with_sound(0);
    switch (o->oAction) {
        case 0:
			cur_obj_play_sound_1(SOUND_AIR_UNK07);
            approach_forward_vel(&o->oForwardVel, 4.0f, 1.0f);
            if (cur_obj_lateral_dist_from_mario_to_home() > 1000.0f)
                o->oAngleToMario = cur_obj_angle_to_home();
            else if (o->oDistanceToMario > 300.0f)
                o->oAngleToMario = obj_angle_to_object(o, gMarioObject);
            cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x400);
            break;
        case 1:
            o->oFlags &= ~8;
            o->oForwardVel = -10.0f;
            if (o->oTimer > 20) {
                o->oAction = 0;
                o->oInteractStatus = 0;
                o->oFlags |= 8;
            }
            break;
    }
    cur_obj_move_standard(-60);
}

void bhv_hana_loop(void) {
    f32 sp18;
    o->activeFlags |= ACTIVE_FLAG_UNK10;
    if (cur_obj_was_attacked_or_ground_pounded()) {
        cur_obj_change_action(1);
	}
	obj_set_hitbox(o, &sSpindriftHitbox);
    cur_obj_update_floor_and_walls();
	cur_obj_init_animation_with_sound(0);
    if (o->oForwardVel <= 4.0f)
	{
        sp18 = 1.0f;
    } else {
        sp18 = 2.5f;
	}
    cur_obj_init_animation_with_accel_and_sound(0, sp18);
    switch (o->oAction) {
        case 0:
            approach_forward_vel(&o->oForwardVel, 4.0f, 1.0f);
            if (cur_obj_lateral_dist_from_mario_to_home() > 1500.0f)
                o->oAngleToMario = cur_obj_angle_to_home();
            else if (o->oDistanceToMario > 600.0f)
                o->oAngleToMario = obj_angle_to_object(o, gMarioObject);
            cur_obj_rotate_yaw_toward(o->oAngleToMario, 200);
            break;
        case 1:
            approach_forward_vel(&o->oForwardVel, 12.0f, 1.0f);
            if (cur_obj_lateral_dist_from_mario_to_home() > 2000.0f)
                o->oAngleToMario = cur_obj_angle_to_home();
            else if (o->oDistanceToMario > 240.0f)
                o->oAngleToMario = obj_angle_to_object(o, gMarioObject);
            cur_obj_rotate_yaw_toward(o->oAngleToMario, 500);
            if (o->oTimer > 300) {
                o->oAction = 0;
				spawn_mist_particles();
				obj_spawn_loot_yellow_coins(o, o->oNumLootCoins, 20.0f);
                o->oInteractStatus = 0;
            }
            break;
    }
    cur_obj_move_standard(-60);
	cur_obj_scale(2.0f);
}
