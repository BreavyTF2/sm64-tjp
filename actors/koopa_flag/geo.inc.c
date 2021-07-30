// 0x0D000000
const GeoLayout koopa_flag_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
    hmsBegin()
      hmsJoint(RM_SURF,animed_light_sourcex,0,0,0)  /* ,chn8,(7) */
      hmsBegin()
         hmsJoint(RM_SURF,RCP_animed_patapata5,0,0,0)  /* ,cyl9,(6) */
         hmsBegin()
            hmsJoint(RM_SURF,NULL,2040,0,0)  /* ,chn7,(5) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_animed_patapata4,0,0,0)  /* ,face7,(4) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_animed_patapata3,460,0,0)  /* ,face8,(3) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_animed_patapata2,460,0,0)  /* ,face9,(2) */
                     hmsBegin()
                        hmsJoint(RM_SURF,RCP_animed_patapata1,344,0,0)  /* ,face10,(1) */
                        hmsBegin()
                           hmsJoint(RM_SURF,RCP_animed_patapata0,288,0,0)  /* ,face11,(0) */
                        hmsEnd()
                     hmsEnd()
                  hmsEnd()
               hmsEnd()
            hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
   GEO_END(),
};
