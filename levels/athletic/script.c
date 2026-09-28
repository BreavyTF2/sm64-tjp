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
#include "levels/athletic/header.h"

const LevelScript level_athletic_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _athletic_segment_7SegmentRomStart, _athletic_segment_7SegmentRomEnd),
	LOAD_MIO0(0x08	  ,  _common0_mio0SegmentRomStart,  _common0_mio0SegmentRomEnd),
	LOAD_RAW(0x0F,  _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
			JUMP_LINK(script_func_global_1),
		LOAD_MODEL_FROM_DL(MODEL_LEVEL_GEOMETRY_03, RCP_cube_old,  LAYER_OPAQUE),
		LOAD_MODEL_FROM_DL(MODEL_LEVEL_GEOMETRY_04, RCP_testcube, LAYER_OPAQUE),
		LOAD_MODEL_FROM_DL(MODEL_LEVEL_GEOMETRY_05, RCP_testswing, LAYER_OPAQUE),
    AREA(/*index*/ 1, RCP_Stage2Scene1),
		OBJECT_LEAK(MODEL_LEVEL_GEOMETRY_03,	-4500, 1150, -6500,   0,0,0,  0,0,0, bhvUnused2A54	),
		OBJECT_LEAK(MODEL_LEVEL_GEOMETRY_04,	-4500, 1150, -6000,   0,0,0,  0,0,0, bhvUnused2A54	),
		OBJECT_LEAK(MODEL_LEVEL_GEOMETRY_05,	-4500, 1150, -5500,   0,0,0,  0,0,0, bhvUnused2A54	),
        TERRAIN(/*terrainData*/ test_info),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ 1000, 5000, 1000),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
