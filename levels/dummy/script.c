/********************************************************************************
						Ultra 64 MARIO Brothers

						stage 35 sequence module

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
#include "levels/dummy/header.h"

const LevelScript level_dummy_entry[] = {

	INIT_LEVEL(),
	LOAD_MIO0(0x07, _dummy_segment_7SegmentRomStart, _dummy_segment_7SegmentRomEnd),

	ALLOC_LEVEL_POOL(),
		MARIO(MODEL_MARIO, 0x00000001, bhvMario),

		AREA(1, RCP_Stage35Scene1),

			TERRAIN(dummy35_info),

		END_AREA(),

	FREE_LEVEL_POOL(),

	MARIO_POS(1, 0,  0,0,0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};

