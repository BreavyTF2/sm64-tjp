const GeoLayout penguin_geo[] = {
 hmsShadow(50, 155, 1)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,RCP_ping_base5,0,0,0)  /* ping_body1_2(10) */
      hmsBegin()
         hmsJoint(RM_SURF,NULL,-51,84,-13)  /* chn21_2(9) */
         hmsBegin()
            hmsJoint(RM_SURF,RCP_ping_base0,0,0,0)  /* ping_Rhand1_2(0) */
         hmsEnd()
         hmsJoint(RM_SURF,NULL,51,84,-13)  /* chn19_2(8) */
         hmsBegin()
            hmsJoint(RM_SURF,RCP_ping_base1,0,0,0)  /* ping_Lhand1_2(1) */
         hmsEnd()
         hmsJoint(RM_SURF,NULL,-38,-54,-13)  /* chn24_2(7) */
         hmsBegin()
            hmsJoint(RM_SURF,RCP_ping_base2,0,0,0)  /* ping_Rfoot1_2(2) */
         hmsEnd()
         hmsJoint(RM_SURF,NULL,38,-54,-13)  /* chn22_2(6) */
         hmsBegin()
            hmsJoint(RM_SURF,RCP_ping_base3,0,0,0)  /* ping_Lfoot1_2(3) */
         hmsEnd()
         hmsJoint(RM_SURF,NULL,0,111,-19)  /* chn18_2(5) */
         hmsBegin()
			hmsSelect(5, geo_switch_tuxie_mother_eyes)
			hmsBegin()
	            hmsJoint(RM_SURF,RCP_ping_head_eye1,0,0,0)  /* ping_head1_2(4) */
	            hmsJoint(RM_SURF,RCP_ping_head_eye2,0,0,0)  /* ping_head1_2(4) */
	            hmsJoint(RM_SURF,RCP_ping_head_eye3,0,0,0)  /* ping_head1_2(4) */
	            hmsJoint(RM_SURF,RCP_ping_head_eye4,0,0,0)  /* ping_head1_2(4) */
	            hmsJoint(RM_SURF,RCP_ping_head_eye5,0,0,0)  /* ping_head1_2(4) */
			hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};
