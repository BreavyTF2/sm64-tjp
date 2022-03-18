// jumping_box.c.inc

struct ObjectHitbox sJumpingBoxHitbox = {
    /* interactType: */ INTERACT_GRABBABLE,
    /* downOffset: */ 20,
    /* damageOrCoinValue: */ 0,
    /* health: */ 1,
    /* numLootCoins: */ 5,
    /* radius: */ 300,
    /* height: */ 500,
    /* hurtboxRadius: */ 300,
    /* hurtboxHeight: */ 500,
};

void jumping_box_act_0(void) {
o->oAngleToMario = obj_angle_to_object(o, gMarioObject);

	cur_obj_init_animation_with_sound(0);
	if ((!(o->oMoveFlags & OBJ_MOVE_ON_GROUND)) && ( o->oDistanceToMario <= 750)) cur_obj_rotate_yaw_toward(o->oAngleToMario + 0x8000, 0x300);
    if (o->oMoveFlags & OBJ_MOVE_ON_GROUND) {
		if ((( o->oDistanceToMario > 750) && (cur_obj_check_if_near_animation_end())) || (o->oDistanceToMario > 750 && (o->header.gfx.animInfo.animFrame <= 2))) o->oAction = 2;
		if ((o->oForwardVel) > 0) o->oForwardVel = 0;
		
        if (cur_obj_check_anim_frame(25)) {
			cur_obj_play_sound_2(SOUND_GENERAL_SOFT_LANDING);
            o->oVelY = random_float() * 5.0f + 30.0f;
			o->oForwardVel = random_float() * 10.0f + 22.5f;
        }
	}
}
void jumping_box_act_1(void) {
    if (o->oMoveFlags & (OBJ_MOVE_HIT_WALL | OBJ_MOVE_MASK_IN_WATER | OBJ_MOVE_LANDED)) {
		o->oAction = 0;
    }
}

void jumping_box_act_2(void) {
	cur_obj_init_animation_with_sound(0);
	o->header.gfx.animInfo.animFrame = 0;
	if ((o->oForwardVel) > 0) o->oForwardVel = 0;
	if (o->oTimer > 150) o->oAction = 3;
	
	if (o->oDistanceToMario <= 750) {
		o->oAction = 0;
	}
}

f32 jumping_box_home(void) {
    f32 dist;
    f32 dx = o->oHomeX - o->oPosX;
    f32 dz = o->oHomeZ - o->oPosZ;

    dist = sqrtf(dx * dx + dz * dz);
    return dist;
}
void jumping_box_act_3(void) {
	o->oAngleToHome = cur_obj_angle_to_home();
	cur_obj_init_animation_with_sound(0);
	if (!(o->oMoveFlags & OBJ_MOVE_ON_GROUND)) cur_obj_rotate_yaw_toward(o->oAngleToHome, 0x400);
	if (o->oMoveFlags & OBJ_MOVE_ON_GROUND) {
		if ((o->oForwardVel) > 0) o->oForwardVel = 0;
	        if (cur_obj_check_anim_frame(25)) {
				cur_obj_play_sound_2(SOUND_GENERAL_SOFT_LANDING);
            o->oVelY = random_float() * 5.0f + 30.0f;
			o->oForwardVel = random_float() * 10.0f + 22.5f;
				}
			if (jumping_box_home() < 500) {
			o->oAction = 2;
			}
        }

		if (o->oDistanceToMario <= 500) {
		o->oAction = 0;
	}
}

void (*sJumpingBoxActions[])(void) = { jumping_box_act_0, jumping_box_act_1, jumping_box_act_2, jumping_box_act_3 };

void jumping_box_free_update(void) {
    cur_obj_set_model(MODEL_UNKNOWN_B8);
    cur_obj_scale(0.4f);
    obj_set_hitbox(o, &sJumpingBoxHitbox);
    cur_obj_update_floor_and_walls();
    cur_obj_move_standard(30);
    cur_obj_call_action_function(sJumpingBoxActions);
}

void bhv_jumping_box_loop(void) {
    switch (o->oHeldState) {
        case HELD_FREE:
            jumping_box_free_update();
            break;
        case HELD_HELD:
            obj_copy_pos(o, gMarioObject);
            cur_obj_unrender_and_reset_state(0, 0);
            break;
        case HELD_THROWN:
            cur_obj_get_thrown_or_placed(40.0f, 20.0f, 0);
            break;
        case HELD_DROPPED:
            cur_obj_get_dropped();
//            o->oAction = 0;
            break;
    }
    if (o->oInteractStatus & INT_STATUS_STOP_RIDING) {
//		cur_obj_get_thrown_or_placed(40.0f, 20.0f, 0);
//		cur_obj_get_dropped();
//		o->oFaceAngleYaw = gMarioStates[0].faceAngle[1];
		
    }
    o->oInteractStatus = 0;
}
