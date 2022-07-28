// white_puff.c.inc

void bhv_white_puff_1_loop(void) {
    f32 sp1C = 0.1f;
    f32 sp18 = 0.5f;
    if (o->oTimer == 0) {
        obj_translate_xz_random(o, 50.0f);
        o->oPosY += 30.0f;
    }
    cur_obj_scale(o->oTimer * sp18 + sp1C);
    o->oOpacity = 50;
    cur_obj_move_using_fvel_and_gravity();
    if (o->oTimer > 4)
        obj_mark_for_deletion(o);
}

void bhv_sleep_loop(void) {
    f32 sp1C = 0.01f;
    f32 sp18 = 0.08f;
    if (o->oTimer == 0) {
		cur_obj_set_pos_relative(gMarioObject, 0, -10, 25.2f);
        obj_translate_xz_random(o, 50.0f);
    }
	if (o->oTimer == 1) {
	o->oMoveAngleYaw = (o->oAngleToMario+0x8000);
	}
	if (o->oTimer == 2) {
	o->oForwardVel = (0.6+o->oDistanceToMario/25);
	}
    cur_obj_scale(o->oTimer * sp18 + sp1C);
	o->oPosY += 4.0f;
    o->oOpacity = (255 - (o->oTimer*8) + 100);
    cur_obj_move_using_fvel_and_gravity();
	if (o->oOpacity > 255) o->oOpacity = 255;
	
    if (o->oOpacity < 0)
        obj_mark_for_deletion(o);
}


void bhv_white_puff_2_loop(void) {
    if (o->oTimer == 0)
        obj_translate_xz_random(o, 50.0f);
}
