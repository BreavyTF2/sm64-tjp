// 0x0C000000
const GeoLayout clam_shell_geo[] = {
 hmsGroup()
 hmsBegin()
 GEO_SCALE(0x00, 16384),
    hmsBegin()
      hmsJoint(LAYER_OPAQUE_INTER,NULL,0,0,0)						/* ,NULL,(1) */
      hmsBegin()
         hmsJoint(LAYER_OPAQUE_INTER,RCP_big_shell_close1,0,0,0)  /* ,shell_B,(2) */
         hmsBegin()
            hmsJoint(LAYER_OPAQUE_INTER,NULL,-520,-6,0)  			/* ,chn1,(1) */
            hmsBegin()
               hmsJoint(LAYER_OPAQUE_INTER,RCP_big_shell_close0,0,0,0)  /* ,shell_A,(0) */
            hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};
