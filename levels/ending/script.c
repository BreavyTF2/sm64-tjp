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
	OBJECT(/*model*/ MODEL_STAR,                  /*pos*/  0, 350, -1000, /*angle*/ 0, 0, 0,    /*behParam*/ 0x00000000, /*beh*/ bhvStar),
    RETURN(),
};

const LevelScript level_ending_entry[] = {
    /*0*/ INIT_LEVEL(),
    /*1*/ LOAD_MIO0(/*seg*/ 0x07, _ending_segment_7SegmentRomStart, _ending_segment_7SegmentRomEnd),

    /*4*/ ALLOC_LEVEL_POOL(),
		MARIO(MODEL_MARIO, 0x00000001, bhvMario),
    /*5*/ AREA(/*index*/ 1, ending_geo_000050),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, 0, 0, /*angle*/ 0, 180, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
	        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_ENDING, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
	        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x38, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x6D, /*flags*/ WARP_NO_CHECKPOINT),
	JUMP_LINK(script_func_local_1),
	MACRO_OBJECTS(/*objList*/ cx2501_macro_objs),
	SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0006, /*seq*/ SEQ_EVENT_CUTSCENE_CREDITS),
			TERRAIN(cx2501_info),
    /*7*/ END_AREA(),
	
		FREE_LEVEL_POOL(),

	MARIO_POS(1, 180,  0,0,0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
