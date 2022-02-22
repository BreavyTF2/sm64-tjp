#include "levels/plane/header.h"
extern Gfx RCP_plane[];
const GeoLayout RCP_Stage37Scene1[] = {
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
            GEO_CAMERA(16, 0, 2000, 6000, 0, 0, -6000, geo_camera_main),
            GEO_OPEN_NODE(),
			GEO_SCALE(0x00, 0x31FFCE),
			GEO_OPEN_NODE(),
					hmsGfx(RM_SURF, RCP_plane)
			GEO_CLOSE_NODE(),
               GEO_RENDER_OBJ(),
					hmsCProg(0, geo_envfx_main)
				hmsEnd()
			hmsEnd()
		hmsEnd()

	hmsEnd()
	hmsExit()
};
