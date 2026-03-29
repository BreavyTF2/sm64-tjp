/// testlift and other generic objects leftover in the "data/p" folder.

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

static void elevetor_wait(void)
{

	if ( gMarioObject->platform == o )	o->oAction = 1;

}

static void elevetor_move(void)
{




	if ( o->oPosY < 2816 )	o->oPosY += 10;

	if ( gMarioObject->platform != o )	o->oAction = 2;

}

static void elevetor_reset(void)
{

	if ( gMarioObject->platform == o )	o->oAction = 1;
	if ( o->oTimer > 60 ){
		o->oPosX = o->oHomeX;
		o->oPosY = o->oHomeY;
		o->oPosZ = o->oHomeZ;
		o->oAction = 0;
	}

}




/********************************************************************************
		C Program
 ********************************************************************************/

static void (*elevetor_modejmp[])(void) = {
	
	 elevetor_wait,
	 elevetor_move,
	 elevetor_reset
	
};

void s_elevetor(void)
{
	cur_obj_call_action_function(elevetor_modejmp);
	load_object_collision_model();
}

#if 0 //Old Crash Effect leftovers.
void s_make_crasheffect(struct Object *mother,int number)
{

	StrategyRecord *o;
	int	i;


	for(i=0;i<number;i++){
		o = spawn_object(mother,MODEL_SMOKE,e_crasheffect);

		o->oPosX += random_float()*keydebug_z-(keydebug_z)/2;
		o->oPosZ += random_float()*keydebug_z-(keydebug_z)/2;

		o->oForwardVel = keydebug_x;
		o->oVelY = random_float()*keydebug_y-(keydebug_y)/2;
		o->oMoveAngleYaw = random_u16();
	}

}

void s_crasheffect(void)
{
	cur_obj_update_floor_and_walls();		/* bg check 	*/
	cur_obj_move_standard(78);		/* move enemy	*/
}
#endif
