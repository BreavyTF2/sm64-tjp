// tower_door.c.inc

void bhv_tower_door_loop(void) {
    if (o->oInteractStatus && INT_STATUS_INTERACTED) {
        obj_explode_and_spawn_coins(80.0f, 0);
        create_sound_spawner(SOUND_GENERAL_WALL_EXPLOSION);
    }
}
