// 0x16000F98
const GeoLayout sleep_particle_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_ASM(0, geo_update_layer_transparency),
	  GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sleep_particle_dl),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout sleep_particle_geo2[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_ASM(0, geo_update_layer_transparency),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sleep_particle_dl2),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout sleep_particle_geo3[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_ASM(0, geo_update_layer_transparency),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sleep_particle_dl3),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
