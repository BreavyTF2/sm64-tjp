// 0x0D0000DC
const GeoLayout swoop_geo[] = {
 hmsShadow(100,150,1)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,0,0,0)						/* ,null, 			*/
      hmsBegin()
         hmsJoint(RM_SURF,RCP_bat_fly4,0,0,0)  			/* ,bat_body,(6) 	*/
         hmsBegin()
            hmsJoint(RM_SURF,RCP_bat_fly3,54,0,0)  		/* ,bat_head,(5) 	*/
            hmsJoint(RM_SURF,RCP_bat_fly2,54,0,0)  		/* ,bat_ear,(4) 	*/
            hmsJoint(RM_SURF,NULL,57,-48,0)  			/* ,chn1,(3)		*/
            hmsBegin()
               hmsJoint(RM_SURF,RCP_bat_fly0,0,0,0)  	/* ,bat_Lwing,(0)	*/
            hmsEnd()
            hmsJoint(RM_SURF,NULL,57,-48,0)  			/* ,chn3,(2) 		*/
            hmsBegin()
               hmsJoint(RM_SURF,RCP_bat_fly1,0,0,0)  	/* ,bat_Rwing,(1)	*/
            hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};
