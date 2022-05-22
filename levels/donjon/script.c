/********************************************************************************
						Ultra 64 MARIO Brothers

						stage 3 sequence module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

							December 8, 1995
 ********************************************************************************/

#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/donjon/header.h"

static const LevelScript script_func_local_1[] = {
	OBJECT(/*model*/ MODEL_STAR,                  /*pos*/  -4600, 1350, -5600, /*angle*/ 0, 0, 0,    /*behParam*/ 0x00000000, /*beh*/ bhvStar),
    RETURN(),
};

const LevelScript level_donjon_entry[] = {

	INIT_LEVEL(),
	LOAD_MIO0(0x07	   , _donjon_segment_7SegmentRomStart, 	  _donjon_segment_7SegmentRomEnd),
	LOAD_MIO0(0x05	  ,  _group1_mio0SegmentRomStart,     _group1_mio0SegmentRomEnd),
	LOAD_RAW(0x0C,  _group1_geoSegmentRomStart,     _group1_geoSegmentRomEnd),
	LOAD_MIO0(0x06	  ,  _group15_mio0SegmentRomStart,     _group15_mio0SegmentRomEnd),
	LOAD_RAW(0x0D,  _group15_geoSegmentRomStart,  	  _group15_geoSegmentRomEnd),
	LOAD_MIO0(0x08	  ,  _common0_mio0SegmentRomStart,  _common0_mio0SegmentRomEnd),
	LOAD_RAW(0x0F,  _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),

	ALLOC_LEVEL_POOL(),

		MARIO(MODEL_MARIO, 0x00000001, bhvMario),
		JUMP_LINK(script_func_global_1),
		JUMP_LINK(script_func_global_2),
		JUMP_LINK(script_func_global_16),

		AREA(1, RCP_Stage3Scene1),
			TERRAIN(donjon_info),
	         JUMP_LINK(script_func_local_1),
			SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LOST_IN_TIME),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
		         OBJECT(/*model*/ MODEL_NONE, /*pos*/ 500, 3000, 0, /*angle*/ 0, 180, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_UNKNOWN_3, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x27, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x28, /*flags*/ WARP_NO_CHECKPOINT),
		END_AREA(),

	FREE_LEVEL_POOL(),

	MARIO_POS(1, 180,  500,2000,0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};




