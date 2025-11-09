/***************************************************************************************************
						Dice Initialize
***************************************************************************************************/
void s_dice_init(void)
{
	o->oGravity = 2.5f;
    o->oFriction = 0.98f;
    o->oBuoyancy = 1.3f;
}

/***************************************************************************************************
						Dice Rotate Event
***************************************************************************************************/
static void DiceRotateEvent(void)
{
//UNUSED short angleY = (short)o->oMoveAngleYaw;


#ifdef NEWDICE
	o->oFaceAnglePitch += (float)(o->oForwardVel*250);
	o->oFaceAngleRoll += (float)(o->oForwardVel*125);
#else
	o->oFaceAnglePitch += (short)(o->oForwardVel*500);
#endif
}
/***************************************************************************************************
						Dice Move Event
***************************************************************************************************/
static void DiceMoveEvent(void)
{
	short bg_flag = 0;
	float offsety;
		
	bg_flag = object_step_without_floor_orient();

	DiceRotateEvent();

	if ((bg_flag & OBJ_COL_FLAGS_LANDED)!= FALSE) {
#ifdef NEWDICE
		
		offsety = sins(o->oFaceAnglePitch*2)*12;
#else
		offsety = sins(o->oFaceAnglePitch*2)*10;
#endif
		
		if (offsety < 0) offsety *= -1;
		o->oGraphYOffset = (offsety+25);
#ifdef NEWDICE
		if (o->oForwardVel < 5.0 && ( (int)offsety==12 || (int)offsety==0)) {
#else
		if (o->oForwardVel < 5.0 && ( (int)offsety==10 || (int)offsety==0)) {
#endif
			o->oForwardVel = 0.0;
		}
	}
}
/***************************************************************************************************
						Dice Catch
***************************************************************************************************/
static void DiceCatch(void)
{
	o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
#ifdef NEWDICE
	o->oFaceAnglePitch = 0;
	o->oFaceAngleRoll = 0;
#endif
}
/***************************************************************************************************
						Dice Drop
***************************************************************************************************/
static void DiceDrop(void)
{
	cur_obj_unused_init_on_floor();
#ifdef NEWDICE
	o->oFaceAnglePitch = 0;
	o->oFaceAngleRoll = 0;
#endif
	o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
	o->oHeldState = HELD_FREE;
}
/***************************************************************************************************
						Dice Throw
***************************************************************************************************/
static void DiceThrow(void)
{
	cur_obj_enable_rendering();	
	o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
	o->oHeldState = HELD_FREE;
//	o->oFlags &= ~OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
#ifdef NEWDICE
	o->oForwardVel = (25+((random_float() - 0.5f) * 10)); //rng
	o->oVelY = (20+((random_float() - 0.5f) * 5)); //rng
#else
	o->oForwardVel = 25.;
	o->oVelY = 20.;
	o->oButterflyYPhase = 2;
#endif
}
/***************************************************************************************************
						Dice Event
***************************************************************************************************/
void s_dice_main(void)
{
	switch(o->oHeldState) {
		case HELD_FREE:
		DiceMoveEvent();		
		break;
		case HELD_HELD:
		DiceCatch();
		break;
		case HELD_THROWN:
		DiceThrow();
		break;
		case HELD_DROPPED:
		DiceDrop();
		break;
	}
}
