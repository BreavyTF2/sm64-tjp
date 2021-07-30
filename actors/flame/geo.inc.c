// 0x16000B10
const GeoLayout red_flame_shadow_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x50, 20),
   GEO_OPEN_NODE(),
      GEO_BRANCH_AND_LINK(red_flame_geo),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16000B2C
const GeoLayout red_flame_geo[] = {
	hmsGroup()
	hmsBegin()
		hmsSelect(15, geo_switch_anim_state)
		hmsBegin()
			hmsGfx(RM_XSURF, RCP_FireC_Yellow01)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow02)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow03)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow04)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow05)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow06)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow07)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow08)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow09)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow10)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow11)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow12)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow13)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow14)
			hmsGfx(RM_XSURF, RCP_FireC_Yellow15)
		hmsEnd()
	hmsEnd()
  	hmsExit()
};

const GeoLayout yellow_flame_geo[] = {
	hmsGroup()
	hmsBegin()
		hmsSelect(15, geo_switch_anim_state)
		hmsBegin()
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow01)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow02)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow03)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow04)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow05)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow06)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow07)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow08)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow09)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow10)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow11)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow12)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow13)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow14)
			hmsGfx(RM_XSURF, RCP_FireC_2_Yellow15)
		hmsEnd()
	hmsEnd()
  	hmsExit()
};

// 0x16000B8C
const GeoLayout blue_flame_geo[] = {
	hmsGroup()
	hmsBegin()
		hmsSelect(15, geo_switch_anim_state)
		hmsBegin()
			hmsGfx(RM_XSURF, RCP_FireC_Blue01)
			hmsGfx(RM_XSURF, RCP_FireC_Blue02)
			hmsGfx(RM_XSURF, RCP_FireC_Blue03)
			hmsGfx(RM_XSURF, RCP_FireC_Blue04)
			hmsGfx(RM_XSURF, RCP_FireC_Blue05)
			hmsGfx(RM_XSURF, RCP_FireC_Blue06)
			hmsGfx(RM_XSURF, RCP_FireC_Blue07)
			hmsGfx(RM_XSURF, RCP_FireC_Blue08)
			hmsGfx(RM_XSURF, RCP_FireC_Blue09)
			hmsGfx(RM_XSURF, RCP_FireC_Blue10)
			hmsGfx(RM_XSURF, RCP_FireC_Blue11)
			hmsGfx(RM_XSURF, RCP_FireC_Blue12)
			hmsGfx(RM_XSURF, RCP_FireC_Blue13)
			hmsGfx(RM_XSURF, RCP_FireC_Blue14)
			hmsGfx(RM_XSURF, RCP_FireC_Blue15)
		hmsEnd()
	hmsEnd()
  	hmsExit()
};
