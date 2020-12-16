#include "levels/castle/header.h"
extern Gfx gfx_castke[];
const GeoLayout RCP_Stage1Scene1[] = {
   GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
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
         GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 25000, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(16, 0, 2000, 6000, -1024*6,0,-1024*6, geo_camera_main),
            GEO_OPEN_NODE(),
					hmsGfx(RM_SURF, gfx_castle)
				GEO_ASM(   0, geo_movtex_pause_control),
               GEO_ASM(0x0101, geo_movtex_draw_water_regions),
               GEO_RENDER_OBJ(),
					hmsCProg(0, geo_envfx_main)
				hmsEnd()
			hmsEnd()
		hmsEnd()

	hmsEnd()
	hmsExit()
};
