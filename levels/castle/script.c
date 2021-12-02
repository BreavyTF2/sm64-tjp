#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"
//#include "actors/common0.h"
#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/castle/header.h"
static const LevelScript script_func_local_1[] = {
	OBJECT(/*model*/ MODEL_EXCLAMATION_BOX,                          /*pos*/  -6032, 3420,  2172, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvExclamationBox),
	OBJECT(/*model*/ MODEL_HEAVE_HO,                          /*pos*/  -5000, 4916,  -1400, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvHeaveHo),
	OBJECT(/*model*/ MODEL_HOOT,                          /*pos*/  -1500, 1550,  4000, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvHoot),	
	OBJECT(/*model*/ MODEL_YELLOW_COIN,                          /*pos*/  -1500, 1550,  4000, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),	
	OBJECT(/*model*/ MODEL_METAL_BOX,                          /*pos*/  -5988, 7684,  -5988, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvPushableMetalBox),
	OBJECT(/*model*/ MODEL_STAR,                  /*pos*/  -6094, 8500, -6094, /*angle*/ 0, 0, 0,    /*behParam*/ 0x00000000, /*beh*/ bhvStar),
    RETURN(),
};

const LevelScript level_castle_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _castle_segment_7SegmentRomStart, _castle_segment_7SegmentRomEnd),
	LOAD_MIO0(0x05	  ,  _group1_mio0SegmentRomStart,     _group1_mio0SegmentRomEnd),
	LOAD_RAW(0x0C,  _group1_geoSegmentRomStart,     _group1_geoSegmentRomEnd),
	LOAD_MIO0(0x06	  ,  _group15_mio0SegmentRomStart,     _group15_mio0SegmentRomEnd),
	LOAD_RAW(0x0D,  _group15_geoSegmentRomStart,  	  _group15_geoSegmentRomEnd),
	LOAD_MIO0(0x08	  ,  _common0_mio0SegmentRomStart,  _common0_mio0SegmentRomEnd),
	LOAD_RAW(0x0F,  _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
		JUMP_LINK(script_func_global_1),
		JUMP_LINK(script_func_global_2),
		JUMP_LINK(script_func_global_16),
    AREA(/*index*/ 1, RCP_Stage1Scene1),
        TERRAIN(/*terrainData*/ castle_info),
 //       SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0002, /*seq*/ SEQ_LEVEL_SLIDE),
         JUMP_LINK(script_func_local_1),
		 
		         OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, 2024, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_UNKNOWN_1, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0B, /*destLevel*/ LEVEL_UNKNOWN_1, /*destArea*/ 0x01, /*destNode*/ 0x0C, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0C, /*destLevel*/ LEVEL_UNKNOWN_1, /*destArea*/ 0x01, /*destNode*/ 0x0B, /*flags*/ WARP_NO_CHECKPOINT),
		WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x3A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x6C, /*flags*/ WARP_NO_CHECKPOINT),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ 0, 1024, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
