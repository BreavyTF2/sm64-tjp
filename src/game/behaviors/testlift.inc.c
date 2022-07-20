static Trajectory test_liftdata[] = {
	TRAJECTORY_POS(0,0,	0,1000),	/* (X),(Y),(Z) */
	TRAJECTORY_POS(1,1000, 100,1000),	/* (X),(Y),(Z) */
	TRAJECTORY_POS(2,1000, 200,   0),	/* (X),(Y),(Z) */
	TRAJECTORY_POS(3,   0, 100,   0),	/* (X),(Y),(Z) */
    TRAJECTORY_END(),
};

void s_testlift(void)
{
	s32	flag;

	o->oPathedStartWaypoint = (struct Waypoint *) test_liftdata;		/* data read	*/

	flag = cur_obj_follow_path(0);
	if (flag != PATH_REACHED_END) {
	o->oForwardVel = 10;						/* set speed     */
	}
	o->oMoveAngleYaw = o->oPathedTargetYaw;		/* speed X Angle */
	o->oMoveAnglePitch = o->oPathedTargetPitch;		/* speed Y Angle */

	cur_obj_set_pos_via_transform();
	load_object_collision_model();

}
