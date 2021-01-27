const GeoLayout heave_ho_geo[] = {
 hmsShadow(100,150,1)
 GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
    GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,NULL),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_omurobo_anim_run9),  /* ,omu_bar,(14) */
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,189,-28,0,NULL),  /* ,chn4,(13) */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_omurobo_anim_run8),  /* ,omu_ita,(10) */
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_omurobo_anim_run5),  /* ,omu_Larm,(6) */
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_omurobo_anim_run0),  /* ,omu_Rarm,(0) */
	           GEO_OPEN_NODE(),
               GEO_ASM(0, geo_update_held_mario_pos),
    	       GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,175,0,-84,NULL), /* ,chn6,(12) */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_omurobo_anim_run7),  /* ,sphere2,(8) */
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE,168,0,0,RCP_omurobo_anim_run6),  /* ,sphere1,(7) */
                  GEO_ANIMATED_PART(LAYER_OPAQUE,168,0,0,NULL),  /* ,eff6,(5) */
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,NULL,-200,0,0),  /* ,chn7,(11) */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,-170,-200,0,RCP_omurobo_anim_run1),  /* ,omu_body,(1) */
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE,50,-36,92,NULL),  /* ,chn8,(9) */
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_omurobo_anim_run3),  /* ,omu_hatabar,(3) */
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE,196,0,0,RCP_omurobo_anim_run2),  /* ,omu_hata,(2) */
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE,0,0,0,RCP_omurobo_anim_run4),  /* ,sphere3,(4) */
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
 GEO_CLOSE_NODE(),
 GEO_END(),
};
