#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/area.h"
#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ending/header.h"

static const LevelScript script_func_local_1[] = {
	OBJECT(/*model*/ MODEL_NONE,                  /*pos*/  0, 250, -1500, /*angle*/ 0, 0, 0,    /*behParam*/ 0x00000000, /*beh*/ bhvHiddenRedCoinStar),
    RETURN(),
};

const LevelScript level_ending_entry[] = {
    /*0*/ INIT_LEVEL(),
    /*1*/ LOAD_MIO0(/*seg*/ 0x07, _ending_segment_7SegmentRomStart, _ending_segment_7SegmentRomEnd),
	LOAD_MIO0(0x05	  ,  _group1_mio0SegmentRomStart,     _group1_mio0SegmentRomEnd),
	LOAD_RAW(0x0C,  _group1_geoSegmentRomStart,     _group1_geoSegmentRomEnd),
	LOAD_MIO0(0x06	  ,  _group15_mio0SegmentRomStart,     _group15_mio0SegmentRomEnd),
	LOAD_RAW(0x0D,  _group15_geoSegmentRomStart,  	  _group15_geoSegmentRomEnd),
	LOAD_MIO0(0x08	  ,  _common0_mio0SegmentRomStart,  _common0_mio0SegmentRomEnd),
	LOAD_RAW(0x0F,  _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    /*4*/ ALLOC_LEVEL_POOL(),
		MARIO(MODEL_MARIO, 0x00000001, bhvMario),
		JUMP_LINK(script_func_global_1),
		JUMP_LINK(script_func_global_2),
		JUMP_LINK(script_func_global_16),
    /*5*/ AREA(/*index*/ 1, ending_geo_000050),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, 0, 0, /*angle*/ 0, 180, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
	        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_ENDING, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
	    WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x27, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x28, /*flags*/ WARP_NO_CHECKPOINT),
	JUMP_LINK(script_func_local_1),
	MACRO_OBJECTS(/*objList*/ cx2501_macro_objs),
	SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0006, /*seq*/ SEQ_EVENT_CUTSCENE_CREDITS),
			TERRAIN(cx2501_info),
    /*7*/ END_AREA(),
	
		FREE_LEVEL_POOL(),

	MARIO_POS(1, 180,  0,0,0),
	/*10*/ BLACKOUT(/*active*/ FALSE),
    /*11*/ LOAD_AREA(/*area*/ 1),
    /*12*/ TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 75, /*color*/ 0x00, 0x00, 0x00),
	CALL(0, lvl_init_or_update),

	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
