// 0x0C00010C
const GeoLayout unagi_geo[] = {
 hmsHeader(2000)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,0,0,0)			/* ,xx(), */
      hmsBegin()
         hmsJoint(RM_SURF,RCP_animed_swim11,0,0,0)  /* ,nn_body2,(13) */
         hmsBegin()
            hmsJoint(RM_SURF,RCP_animed_swim10,245,0,0)  /* ,nn_body3,(12) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_animed_swim1,494,0,0)  /* ,nn_body4,(1) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_animed_swim0,475,0,0)  /* ,nn_body5,(0) */
/*------------------------------*/
					hmsBegin()
						hmsSelect(2,geo_switch_anim_state)
					    hmsBegin()
							hmsGroup()

							hmsGroup()
					    	hmsBegin()
	 							hmsScale(0.25f)
								hmsBegin()
                                 GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2000, 0, 0, 0, 0, 0, gfx_polystar),
                                 GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 2000, 0, 0, 0, 0, 0, gfx_polystar_eye),
								hmsEnd()
							hmsEnd()
	            				hmsEnd()
					hmsEnd()
/*------------------------------*/
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,-254,0,0)  /* ,chn5,(11) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_animed_swim9,0,0,0)  /* ,nn_body1,(10) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_animed_swim8,527,0,0)  /* ,nn_eye,(9) */
                  hmsBegin()
                     hmsJoint(RM_SURF,NULL,226,65,0)  /* ,chn7,(8) */
                     hmsBegin()
                        hmsJoint(RM_SURF,RCP_animed_swim7,0,0,0)  /* ,nn_ha2,(7) */
                        hmsJoint(RM_SURF,RCP_animed_swim4,0,0,0)  /* ,nn_ago,(4) */
                        hmsJoint(RM_SURF,RCP_animed_swim2,0,0,0)  /* ,nn_mouth2,(2) */
                     hmsEnd()
                  hmsEnd()
                  hmsJoint(RM_SURF,RCP_animed_swim6,527,0,0)  /* ,nn_ha1,(6) */
                  hmsJoint(RM_SURF,RCP_animed_swim5,527,0,0)  /* ,nn_head,(5) */
                  hmsJoint(RM_SURF,RCP_animed_swim3,527,0,0)  /* ,nn_mouth1,(3) */
               hmsEnd()
            hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};
