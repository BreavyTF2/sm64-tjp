// 0x0F000AB0
const GeoLayout koopa_shell_old_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xC8, 70),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
	  GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,2,RCP_mario_kame_board0),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};