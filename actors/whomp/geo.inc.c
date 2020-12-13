const GeoLayout whomp_geo[] = {
 hmsHeader(1000)
 hmsBegin()
  GEO_SHADOW(0x01 + SHADOW_RECTANGLE_HARDCODED_OFFSET, 0xB4, 0),
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,0,0,-50)  /* chn18(11) */
      hmsBegin()
         hmsJoint(RM_SURF,RCP_wallman_body,0,0,0)  /* wallman_body(10) */
         hmsBegin()
            hmsJoint(RM_SURF,NULL,-12,490,-5)  /* chn21(9) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_wallman_Rfoot,0,0,0)  /* wallman_Rfoot(0) */
            hmsEnd()
            hmsJoint(RM_SURF,NULL,-18,-479,-5)  /* chn19(8) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_wallman_Lfoot,0,0,0)  /* wallman_Lfoot(1) */
            hmsEnd()
            hmsJoint(RM_SURF,NULL,1075,570,0)  /* chn28(7) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_wallman_Rarm,0,0,0)  /* wallman_Rarm(3) */

               hmsBegin()
                  hmsJoint(RM_SPRITE,NULL,400,0,0)  /* wallman_Rhand(2) */
				  hmsBegin()
					hmsBboard(0,0,0)
					hmsBegin()
	                  hmsGfx(RM_SPRITE,RCP_wallman_Rhand)
				  	hmsEnd()
				  hmsEnd()
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,1068,-574,0)  /* chn26(6) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_wallman_Larm,0,0,0)  /* wallman_Larm(5) */
               hmsBegin()
                  hmsJoint(RM_SPRITE,NULL,400,0,0)  /* wallman_Lhand(4) */
				  hmsBegin()
				  	hmsBboard(0,0,0)
					hmsBegin()
		              hmsGfx(RM_SPRITE,RCP_wallman_Lhand)  /* wallman_Lhand(4) */
					hmsEnd()
				  hmsEnd()
               hmsEnd()
            hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};
