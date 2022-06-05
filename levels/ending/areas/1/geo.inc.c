
/********************************************************************************/
/*	Hierarchy map scene 1.														*/
/********************************************************************************/
const GeoLayout RCP_Stage35Scene1[] = {
	GEO_NODE_SCREEN_AREA(10, 160, 120, 160, 120),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x033F),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),

		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 12800, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(0x0E,  0,2000,6000,  0,0,0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, gfx_dummy35),
					GEO_RENDER_OBJ(),
					GEO_ASM(0, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),

	GEO_CLOSE_NODE(),
	GEO_END(),
};
