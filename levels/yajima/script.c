/********************************************************************************
						Ultra 64 MARIO Brothers

						stage 32 sequence module

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
#include "levels/yajima/header.h"
static const LevelScript script_func_local_7[] = {
    OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_WARP_PIPE, /*pos*/  4350, 0, 4400, /*angle*/ 0, 0, 0, /*behParam*/ 0x00320000, /*beh*/ bhvWarpPipe),
    WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_UNKNOWN_32, /*destArea*/ 0x02, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
   OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_WARP_PIPE, /*pos*/  -4000, 0, 4350, /*angle*/ 0, 0, 0, /*behParam*/ 0x00330000, /*beh*/ bhvWarpPipe),
       WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_UNKNOWN_32, /*destArea*/ 0x03, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_8[] = {
		  OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_WARP_PIPE, /*pos*/ 400, 0, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00320000, /*beh*/ bhvWarpPipe),
			OBJECT_LEAK(MODEL_TRAMPOLINE	,       0, 150,0,   0,0,0,  0,0,0, bhvBetaTrampolineTop),
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX 			,    -400,  300,   500,   0,0,0,  0,0,0, bhvExclamationBox				),
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX 			,    -800,  300,   500,   0,0,0,  0,1,0, bhvExclamationBox				),
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX 			,   -1200,  300,   500,   0,0,0,  0,2,0, bhvExclamationBox 			),
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX 			,   -1400,  300,   500,   0,0,0,  0,3,0, bhvExclamationBox 			),
			OBJECT_LEAK(MODEL_CAP_SWITCH	,	-1500,   0,  -1000,   0,0,0,  0,0,0, bhvCapSwitch	),
			OBJECT_LEAK(MODEL_CAP_SWITCH	,	 -500,   0,  -1000,   0,0,0,  0,1,0, bhvCapSwitch	),
 			OBJECT_LEAK(MODEL_CAP_SWITCH	,	  500,   0,  -1000,   0,0,0,  0,2,0, bhvCapSwitch	),
		  WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_UNKNOWN_32, /*destArea*/ 0x01, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_9[] = {
		  OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_WARP_PIPE, /*pos*/ 0, 0, -1000, /*angle*/ 0, 0, 0, /*behParam*/ 0x00330000, /*beh*/ bhvWarpPipe),
		  WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_UNKNOWN_32, /*destArea*/ 0x01, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
		  OBJECT_LEAK(MODEL_VCUTM_CHECKERBOARD_PLATFORM_SPAWNER,	0, 0, 1000,   0,0,0,  0,0,0, bhvTestLift), //TestLift
		  OBJECT_LEAK(MODEL_DICE		,	1000, 0,   -100,   0,0,0,  0,0,0, bhvStub1D70), //Dice
		  OBJECT_LEAK(MODEL_UNKNOWN_58		,	-2500, 0,   400,   0,0,0,  0,1,0, bhvStub1D0C), //Fire Motos
			OBJECT_LEAK(MODEL_CAP_SWITCH	,	-1500,   0,   1000,   0,0,0,  0,0,0, bhvCapSwitch	),
			OBJECT_LEAK(MODEL_CAP_SWITCH	,	 -500,   0,  -1000,   0,0,0,  0,1,0, bhvCapSwitch	),
			OBJECT_LEAK(MODEL_CAP_SWITCH	,	  500,   0,  -1000,   0,0,0,  0,2,0, bhvCapSwitch	),
			OBJECT_LEAK(MODEL_NONE	,	  0,   200,  0,   0,0,0,  0,0,0, bhvFish3	), //Added, existed at somepoint due to Fish having stage32 code.
		  
    RETURN(),
};

const LevelScript level_yajima_entry[] = {

	INIT_LEVEL(),
	LOAD_MIO0(0x07, _yajima_segment_7SegmentRomStart, _yajima_segment_7SegmentRomEnd),
	LOAD_MIO0(0x05	  , _group8_mio0SegmentRomStart	  , _group8_mio0SegmentRomEnd	),
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart	  , _group8_geoSegmentRomEnd	),
	LOAD_MIO0(0x06	  , _group14_mio0SegmentRomStart	  , _group14_mio0SegmentRomEnd	),
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart	  , _group14_geoSegmentRomEnd	),
	LOAD_MIO0(0x08	  ,  _common0_mio0SegmentRomStart,  _common0_mio0SegmentRomEnd),
	LOAD_RAW(0x0F,  _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),

		MARIO(MODEL_MARIO, 0x00000001, bhvMario),
		JUMP_LINK(script_func_global_1),
		JUMP_LINK(script_func_global_9),
		JUMP_LINK(script_func_global_15),
//		LOAD_MODEL_FROM_GEO(MODEL_UKIKI_YAJIMA,                   RCP_HmsEnemymonky_F_run),
//		LOAD_MODEL_FROM_GEO(MODEL_HEAVE_HO_YAJIMA,                RCP_HmsEnemyomurobo),
//		LOAD_MODEL_FROM_GEO(MODEL_KOOPA_WITH_SHELL_YAJIMA,        RCP_HmsEnemynokonoko),
		LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE,    warp_pipe_geo),
		AREA(1, RCP_Stage32Scene1),
        JUMP_LINK(script_func_local_7),
		OBJECT_LEAK(MODEL_METAL_BOX,	1242, 200, 1959,   0,0,0,  0,0,0, bhvPushableMetalBox	),

			OBJECT_LEAK(MODEL_CHUCKYA		,	-1000, 0,  0,   0,0,0,  0,0,0, bhvChuckya	), 
			OBJECT_LEAK(MODEL_CHUCKYA		,	-1000, 0,  0,   0,0,0,  0,0,0, bhvChuckya	), 

			OBJECT_LEAK(MODEL_BREAKABLE_BOX		,	-2867, 331,   -895,   0,0,0,  0,0,0, bhvFreeBowlingBall	), //Rolling Sphere Test Object, replaced with iron ball

			OBJECT_LEAK(MODEL_PURPLE_SWITCH,    0, 0, -900,   0,0,0,  0,0,0,	bhvFloorSwitchGrills ),

			OBJECT_LEAK(MODEL_PURPLE_SWITCH,    0, 0, -300,   0,0,0,  0,0,0,	bhvFloorSwitchHiddenObjects ),
			OBJECT_LEAK(MODEL_BREAKABLE_BOX, -500, 0, -700,   0,0,0,  0,0,0,	bhvHiddenObject ),
			OBJECT_LEAK(MODEL_BREAKABLE_BOX,    0, 0, -700,   0,0,0,  0,1,0,	bhvHiddenObject ),
			OBJECT_LEAK(MODEL_BREAKABLE_BOX,  500, 0, -700,   0,0,0,  0,2,0,	bhvHiddenObject ),

			OBJECT_LEAK(MODEL_METAL_BOX, 1000, 0, -1000,   0,0,0,  0,0,0,	bhvPushableMetalBox ),

			OBJECT_LEAK(MODEL_NONE,	  -3000, 0, 2000,   0,0,0,  0,0,0,	bhvCoinFormation  ),
			OBJECT_LEAK(MODEL_NONE,	  -2000, 0, 2000,   0,0,0,  0,1,0,	bhvCoinFormation  ),
			OBJECT_LEAK(MODEL_NONE,	  -1000, 0, 2000,   0,0,0,  0,2,0,	bhvCoinFormation  ),
			OBJECT_LEAK(MODEL_NONE,	      0, 0, 2000,   0,0,0,  0,3,0,	bhvCoinFormation  ),
			OBJECT_LEAK(MODEL_NONE,	    500, 0, 2000,   0,0,0,  0,4,0,	bhvCoinFormation  ),

			OBJECT_LEAK(MODEL_NONE,	  -3000, 200, 1000,   0,0,0,  0,0x10,0,	bhvCoinFormation  ),
			OBJECT_LEAK(MODEL_NONE,	  -2000, 200, 1000,   0,0,0,  0,0x11,0,	bhvCoinFormation  ),
			OBJECT_LEAK(MODEL_NONE,	  -1000, 200, 1000,   0,0,0,  0,0x12,0,	bhvCoinFormation  ),
			OBJECT_LEAK(MODEL_NONE,	      0, 200, 1000,   0,0,0,  0,0x13,0,	bhvCoinFormation  ),
			OBJECT_LEAK(MODEL_NONE,	    500, 200, 1000,   0,0,0,  0,0x14,0,	bhvCoinFormation  ),

			OBJECT_LEAK(MODEL_NONE , 	0, 100,-500,   0,0,0,   0,0,0, bhvSLSnowmanWind	), 
	//		OBJECT_LEAK(MODEL_PENGUIN ,-900,   0, 500,   0,90,0,  0,0,0, bhvSLWalkingPenguin ) 

			OBJECT_LEAK(MODEL_EXCLAMATION_BOX			,     000,  250,  1500,   0,0,0,  0,7, 0, bhvExclamationBox 	 	) ,
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX			,    -400,  250,  1500,   0,0,0,  0,0, 0, bhvExclamationBox 	 	),
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX			,    -800,  250,  1500,   0,0,0,  0,1, 0, bhvExclamationBox 	 	),
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX			,   -1200,  250,  1500,   0,0,0,  0,2, 0, bhvExclamationBox 	 	),
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX			,   -1600,  250,  1500,   0,0,0,  0,3, 0, bhvExclamationBox 	 	),	
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX			,   -2000,  250,  1500,   0,0,0,  0,4, 0, bhvExclamationBox  	 	),
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX			,   -2400,  250,  1500,   0,0,0,  0,5, 0, bhvExclamationBox  	 	),
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX			,   -2800,  250,  1500,   0,0,0,  0,6, 0, bhvExclamationBox  	 	),
			OBJECT_LEAK(MODEL_EXCLAMATION_BOX			,   -3200,  250,  1500,   0,0,0,  0,8, 0, bhvExclamationBox  	 	),

			OBJECT_LEAK(MODEL_NONE				,	  200,    0,      0,  0,0,0,  0,1,0, bhvFloorSwitchHardcodedModel 	 ),
			OBJECT_LEAK(MODEL_NONE				,	  600,    0,      0,  0,0,0,  0,0,0, bhvFloorSwitchHardcodedModel 	 ),
//			OBJECT_LEAK(MODEL_UKIKI			,      0,   200,     0,   0,0,0,  0,0,0, bhvMacroUkiki			),
//			OBJECT_LEAK(MODEL_HEAVE_HO			,   2000,   200,  2000,   0,0,0,  0,0,0, bhvHeaveHo			),
			OBJECT_LEAK(MODEL_UNKNOWN_58			,	    0,    0, -1500,   0,0,0,  0,0,0, bhvStub1D0C			),
			OBJECT_LEAK(MODEL_BREAKABLE_BOX		,  	 1000,    0,     0,   0,0,0,  0,0,0, bhvBreakableBox			),
			OBJECT_LEAK(MODEL_MARIOS_WINGED_METAL_CAP,    -200,  200,  2500,   0,0,0,  0,0,0, bhvMetalWingCap	),
			OBJECT_LEAK(MODEL_MARIOS_METAL_CAP 	,    -600,  200,  2500,   0,0,0,  0,0,0, bhvMetalCap 		),
			OBJECT_LEAK(MODEL_MARIOS_WING_CAP  	,    -400,  200,  2500,   0,0,0,  0,0,0, bhvWingCap 		),
			OBJECT_LEAK(MODEL_MARIOS_CAP 		,    -800,  200,  2500,   0,0,0,  0,0,0, bhvNormalCap				),
			OBJECT_LEAK(MODEL_BREAKABLE_BOX		,       0,  200,  3000,   0,0,0,  0,0,0, bhvBreakableBox		),
			OBJECT_LEAK(MODEL_BREAKABLE_BOX		,     500,    0,  3000,   0,0,0,  0,0,0, bhvBreakableBox		),


			OBJECT_LEAK(MODEL_KOOPA_WITH_SHELL 		,       0,    0,  -500,   0,0,0,  0,1,0, bhvKoopa				),

			OBJECT_LEAK(MODEL_CAP_SWITCH	,	-1500,    0,     0,   0,0,0,  0,0,0, bhvCapSwitch	),
			OBJECT_LEAK(MODEL_CAP_SWITCH	,	 -500,    0,     0,   0,0,0,  0,1,0, bhvCapSwitch	),
			OBJECT_LEAK(MODEL_CAP_SWITCH	,	  500,    0,     0,   0,0,0,  0,2,0, bhvCapSwitch	),
			OBJECT_LEAK(MODEL_CAP_SWITCH	,	 1500,    0,     0,   0,0,0,  0,3,0, bhvCapSwitch	),

			OBJECT_LEAK(MODEL_BREAKABLE_BOX		,       0,    0,  -500,   0,0,0,  0,0,0, bhvFloorSwitchHiddenObjects		),

			OBJECT_LEAK(MODEL_BLUE_COIN_SWITCH			,	    0,    0,   500,   0,0,0,  0,0,0, bhvBlueCoinSwitch		),
			OBJECT_LEAK(MODEL_BLUE_COIN			,	    0,    0,   200,   0,0,0,  0,0,0, bhvHiddenBlueCoin			),
			OBJECT_LEAK(MODEL_BLUE_COIN			,	  200,    0,   200,   0,0,0,  0,0,0, bhvHiddenBlueCoin			),
			OBJECT_LEAK(MODEL_BLUE_COIN			,	  400,    0,   200,   0,0,0,  0,0,0, bhvHiddenBlueCoin			),
			OBJECT_LEAK(MODEL_BLUE_COIN			,	 -200,    0,   200,   0,0,0,  0,0,0, bhvHiddenBlueCoin			),
			OBJECT_LEAK(MODEL_BLUE_COIN			,	 -400,    0,   200,   0,0,0,  0,0,0, bhvHiddenBlueCoin			),
	

			TERRAIN(testmap1_info),			

		END_AREA(),
		AREA(2, RCP_Stage32Scene2),
        JUMP_LINK(script_func_local_8),
					TERRAIN(testmap2_info),	
					END_AREA(),
		AREA(3, RCP_Stage32Scene3),
        JUMP_LINK(script_func_local_9),
					TERRAIN(testmap10_info),	
					END_AREA(),
	FREE_LEVEL_POOL(),


	MARIO_POS(1, 0,  0,150,0),

	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};


