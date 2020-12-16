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

	if ( o->oDistanceToMario < 750) {
		if (gGlobalTimer % 15 == 0) {
		o->oForwardVel += 1.0f;
	}
	obj_turn_toward_object(o, gMarioObject, 16, -0x100);
	}
	cur_obj_init_animation_with_sound(0);
    if (o->oSubAction == 0) {
        if (o->oJumpingBoxUnkF8-- < 0)
            o->oSubAction++;
        if (o->oTimer > o->oJumpingBoxUnkF4) {
            o->oVelY = random_float() * 7.5f + 22.5f;
            o->oSubAction++;
        }
    } else if (o->oMoveFlags & OBJ_MOVE_ON_GROUND) {
        o->oSubAction = 0;
        o->oJumpingBoxUnkF8 = random_float() * 240.0f + 120.0f;
    }
}

void jumping_box_act_1(void) {
    if (o->oMoveFlags & (OBJ_MOVE_HIT_WALL | OBJ_MOVE_MASK_IN_WATER | OBJ_MOVE_LANDED)) {
		o->oAction = 0;
    }
}

void (*sJumpingBoxActions[])(void) = { jumping_box_act_0, jumping_box_act_1 };

void jumping_box_free_update(void) {
    cur_obj_set_model(MODEL_UNKNOWN_B8);
    cur_obj_scale(0.25f);
    obj_set_hitbox(o, &sJumpingBoxHitbox);
    cur_obj_update_floor_and_walls();
    cur_obj_move_standard(78);
    cur_obj_call_action_function(sJumpingBoxActions);
}

void bhv_jumping_box_loop(void) {
    switch (o->oHeldState) {
        case HELD_FREE:
            jumping_box_free_update();
            break;
        case HELD_HELD:
            obj_copy_pos(o, gMarioObject);
//             cur_obj_set_pos_relative(gMarioObject, 40, -500.0f, 100.0f);
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
