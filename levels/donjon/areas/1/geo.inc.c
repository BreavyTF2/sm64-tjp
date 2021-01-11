/********************************************************************************
						Ultra 64 MARIO Brothers

					  stage3 hierarchy data module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

							December 8, 1995
 ********************************************************************************/
 
 

/********************************************************************************/
/*	Hierarchy map scene 1.														*/
/********************************************************************************/

const GeoLayout RCP_Stage3Scene1[] = {
	GEO_NODE_SCREEN_AREA(10, 160, 120, 160, 120),
	GEO_OPEN_NODE(),
//		hmsLayer(0)
//		hmsBegin()
//			hmsOrtho(100)
//			hmsBegin()
//				hmsClear(RGBA16(10,20,25,1), NULL)
//			hmsEnd()
//		hmsEnd()

		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 12800, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(4,  0,2000,6000,  -1024*6,0,-1024*6, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, gfx_donjon),
					GEO_RENDER_OBJ(),
					GEO_ASM(0,geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),

	GEO_CLOSE_NODE(),
	GEO_END(),
};
