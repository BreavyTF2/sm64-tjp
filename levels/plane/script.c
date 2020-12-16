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
#include "levels/plane/header.h"
static const LevelScript script_func_local_2[] = {
   OBJECT_WITH_ACTS(/*model*/ MODEL_SWOOP,    /*pos*/     1500, 500, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvSwoop,          /*acts*/ ALL_ACTS),
	OBJECT_WITH_ACTS(/*model*/ MODEL_SWOOP,    /*pos*/     1500, 500, 500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSwoop,          /*acts*/ ALL_ACTS),
	OBJECT_WITH_ACTS(/*model*/ MODEL_SWOOP,    /*pos*/     2000, 500, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSwoop,          /*acts*/ ALL_ACTS),
	OBJECT_WITH_ACTS(/*model*/ MODEL_SWOOP,    /*pos*/     2000, 500, 500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSwoop,          /*acts*/ ALL_ACTS),
	OBJECT_WITH_ACTS(/*model*/ MODEL_SWOOP,    /*pos*/     -1500, 500, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSwoop,          /*acts*/ ALL_ACTS),
	OBJECT_WITH_ACTS(/*model*/ MODEL_SWOOP,    /*pos*/     -1500, 500, 500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSwoop,          /*acts*/ ALL_ACTS),
	OBJECT_WITH_ACTS(/*model*/ MODEL_SWOOP,    /*pos*/     -2000, 500, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSwoop,          /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_SWOOP,    /*pos*/     -2000, 500, 500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSwoop,          /*acts*/ ALL_ACTS),
//	OBJECT_WITH_ACTS(/*model*/ MODEL_CHAIN_CHOMP,    /*pos*/     -2500, 0, -1500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChainChomp,          /*acts*/ ALL_ACTS),
//	OBJECT_WITH_ACTS(/*model*/ MODEL_CHAIN_CHOMP,    /*pos*/     0, 0, -2000, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChainChomp,          /*acts*/ ALL_ACTS),
//	OBJECT_WITH_ACTS(/*model*/ MODEL_CHAIN_CHOMP,    /*pos*/     -2500, 0, 1000, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChainChomp,          /*acts*/ ALL_ACTS),

    RETURN(),
};

const LevelScript level_plane_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _plane_segment_7SegmentRomStart, _plane_segment_7SegmentRomEnd),
//	LOAD_MIO0(        /*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
//    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model */ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),

    AREA(/*index*/ 1, RCP_Stage37Scene1),
        TERRAIN(/*terrainData*/ map37_info),
 //       SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0002, /*seq*/ SEQ_LEVEL_SLIDE),
//        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
//    JUMP_LINK(script_func_global_1),
//    JUMP_LINK(script_func_global_15),
    JUMP_LINK(script_func_global_18),
	        JUMP_LINK(script_func_local_2),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ 0, 200, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
