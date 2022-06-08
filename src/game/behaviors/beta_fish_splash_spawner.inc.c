/**
 * Behavior for bhvBetaFishSplashSpawner.
 * This is a now non-functional fish splash object found in WF
 * that can be seen in Shoshinkai 1995 footage. It used to create
 * a fish that would splash up when the player walked through it.
 * This functionality was probably moved; in the final game,
 * an identical fish splash can occur with a 1/256 chance every time
 * Mario splashes in water.
 */
//restored version
/**
 * Update function for bhvBetaFishSplashSpawner.
 */
void bhv_beta_fish_splash_spawner_loop(void) {
	int i;
	f32 sp29;
	struct Object *betafishObj;
    f32 water_level = find_water_level(o->oPosX, o->oPosZ);
	
	    switch (o->oAction) {
        case 0:
            if ( o->oDistanceToMario < 200) o->oAction++;
            break;
        case 1:
            if ( water_level > -10000 ) {
			if (gPrevFrameObjectCount < 212) {
				if (gGlobalTimer % 32 == 0 ) cur_obj_play_sound_2(SOUND_GENERAL_MOVING_WATER);
				
				for (i = 0; i < 2; i++) {
					if ( ( random_u16()  & 0x1f) == 0){
						betafishObj = spawn_object(o, MODEL_FISH, bhvWaterDroplet);
						obj_init_animation_with_sound(betafishObj, blue_fish_seg3_anims_0301C2B0, 0);
					} else {
						betafishObj = spawn_object(o, MODEL_WHITE_PARTICLE_SMALL, bhvWaterDroplet);
						sp29 = random_float()*1+0.5;
					obj_scale_xyz(betafishObj, sp29, sp29, sp29);
					obj_set_billboard(betafishObj);
					}
					betafishObj->oMoveAngleYaw = random_u16();
					betafishObj->oPosY = water_level;
					betafishObj->oForwardVel = random_float()*3+2;
					betafishObj->oVelY = random_float()*20+20;
				}
			}	
			if ( o->oDistanceToMario > 300) o->oAction = 0;
            break;
}
		}
}
