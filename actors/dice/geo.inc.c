// 0x0F000694
const GeoLayout dice_geo[] = {
   GEO_CULLING_RADIUS(300),
      GEO_OPEN_NODE(),
         GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, dice_seg8_dl_08019318),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_END(),
};
