/********************************************************************************
						Ultra 64 MARIO Brothers

						stage 15 sequence module

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
#include "levels/firebubble2/header.h"

const LevelScript level_firebubble2_entry[] = {

	INIT_LEVEL(),
	LOAD_MIO0(0x07, _firebubble2_segment_7SegmentRomStart, _firebubble2_segment_7SegmentRomEnd),
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
		AREA(1, RCP_Stage15Scene1),
		OBJECT(/*model*/ MODEL_STAR,            /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvStar),
		OBJECT(/*model*/ MODEL_STAR,            /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x01000000, /*beh*/ bhvStar),
		OBJECT(/*model*/ MODEL_STAR,            /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x02000000, /*beh*/ bhvStar),
		OBJECT(/*model*/ MODEL_STAR,            /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x03000000, /*beh*/ bhvStar),
		OBJECT(/*model*/ MODEL_STAR,            /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x04000000, /*beh*/ bhvStar),
		OBJECT(/*model*/ MODEL_STAR,            /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x05000000, /*beh*/ bhvStar),
		OBJECT(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvExclamationBox),
		OBJECT(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x01000000, /*beh*/ bhvExclamationBox),
		OBJECT(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x02000000, /*beh*/ bhvExclamationBox),
		OBJECT(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x03000000, /*beh*/ bhvExclamationBox),
		OBJECT(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x04000000, /*beh*/ bhvExclamationBox),
		OBJECT(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x05000000, /*beh*/ bhvExclamationBox),
		OBJECT(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x06000000, /*beh*/ bhvExclamationBox),
		OBJECT(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x07000000, /*beh*/ bhvExclamationBox),
		OBJECT(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 0, 0, 0, /*angle*/ 0, 0, 0,  /*behParam*/ 0x08000000, /*beh*/ bhvExclamationBox),
			TERRAIN(firebubble2_info),

		END_AREA(),

	FREE_LEVEL_POOL(),

	MARIO_POS(1, 90,  2599,0,2071),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};

