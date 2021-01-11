#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/sand/header.h"

const LevelScript level_sand_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _sand_segment_7SegmentRomStart, _sand_segment_7SegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),

    AREA(/*index*/ 1, RCP_Stage38Scene1),
        OBJECT_LEAK(/*model*/ MODEL_YELLOW_COIN, /*pos*/   836,  0, 1306, /*angle*/ 0, 90, 0, /*behParam*/ 10,10,0, /*beh*/ bhvFadingWarp),
        OBJECT_LEAK(/*model*/ MODEL_YELLOW_COIN, /*pos*/  854,  0, -1335, /*angle*/ 0, 90, 0, /*behParam*/ 10,20,0, /*beh*/ bhvFadingWarp),
        WARP_NODE(/*id*/ 10, /*destLevel*/ 38, /*destArea*/ 1, /*destNode*/ 20, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 20, /*destLevel*/ 38, /*destArea*/ 0x01, /*destNode*/ 10, /*flags*/ WARP_NO_CHECKPOINT),
        TERRAIN(/*terrainData*/ sand_info),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ 0, 0, 1000),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
