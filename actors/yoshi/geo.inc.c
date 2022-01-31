// 0x0C000468
const GeoLayout yoshi_geo[] = {
 hmsShadow(200, 155, 1)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,0,-14,0)  /* ,chn2,(23) */
      hmsBegin()
         hmsJoint(RM_SURF,RCP_yoshi_base_data16,0,0,0)  /* ,y_bodyB1,(22) */
         hmsBegin()
            hmsJoint(RM_SURF,RCP_yoshi_base_data15,100,0,0)  /* ,y_bodyA1,(21) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_yoshi_base_data14,222,0,0)  /* ,y_head1,(19) */
               hmsBegin()
                  hmsJoint(RM_SURF,NULL,76,49,0)  /* ,chn3,(14) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_yoshi_base_data0,0,0,0)  /* ,y_joe1,(0) */
                  hmsEnd()
               hmsEnd()
               hmsJoint(RM_SURF,NULL,51,55,97)  /* ,chn4,(17) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_yoshi_base_data3,0,0,0)  /* ,y_larmA1,(3) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_yoshi_base_data2,74,0,0)  /* ,y_larmB1,(2) */
                     hmsBegin()
                        hmsJoint(RM_SURF,RCP_yoshi_base_data1,69,0,0)  /* ,y_lhand1,(1) */
                     hmsEnd()
                  hmsEnd()
               hmsEnd()
               hmsJoint(RM_SURF,NULL,51,55,-97)  /* ,chn9,(15) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_yoshi_base_data6,0,0,0)  /* ,y_larmA2,(6) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_yoshi_base_data5,74,0,0)  /* ,y_larmB2,(5) */
                     hmsBegin()
                        hmsJoint(RM_SURF,RCP_yoshi_base_data4,69,0,0)  /* ,y_lhand2,(4) */
                     hmsEnd()
                  hmsEnd()
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,-1,27,95)  /* ,chn5,(20) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_yoshi_base_data9,0,0,0)  /* ,y_llegA1,(9) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_yoshi_base_data8,100,0,0)  /* ,y_llegB1,(8) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_yoshi_base_data7,95,0,0)  /* ,y_lfoot1,(7) */
                  hmsEnd()
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,-1,27,-95)  /* ,chn7,(18) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_yoshi_base_data12,0,0,0)  /* ,y_rlegA1,(12) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_yoshi_base_data11,100,0,0)  /* ,y_rlegB1,(11) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_yoshi_base_data10,95,0,0)  /* ,y_rfoot1,(10) */
                  hmsEnd()
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,-89,-62,0)  /* ,chn1,(16) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_yoshi_base_data13,0,0,0)  /* ,y_bodyC1,(13) */
            hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};
