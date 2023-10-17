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

	o->oFaceAnglePitch += (short)(o->oForwardVel*250);
	o->oFaceAngleRoll += (short)(o->oForwardVel*125);
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

	if ((bg_flag & 0x0001)!= 0x00) {
		offsety = sins(o->oFaceAnglePitch*2)*10;
		if (offsety < 0) offsety *= -1;
		o->oGraphYOffset = (offsety+25);
		if (o->oForwardVel < 5.0 && ( (int)offsety==10 || (int)offsety==0)) {
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
}
/***************************************************************************************************
						Dice Drop
***************************************************************************************************/
static void DiceDrop(void)
{
	cur_obj_unused_init_on_floor();	
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
	o->oForwardVel = (25+((random_float() - 0.5f) * 10)); //rng
	o->oVelY = (20+((random_float() - 0.5f) * 5)); //rng
	o->oButterflyYPhase = 2;
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
