// 0x0F0007B8
const GeoLayout black_bobomb_geo[] = {
hmsShadow(70, 200, 1)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,0,0,0)  /* body_sprite(35) */
	  hmsBegin()
		hmsBboard(0,0,0)
	    hmsBegin()
		hmsSelect(2, geo_switch_anim_state)
			hmsBegin()
	            hmsGfx(LAYER_ALPHA,gfx_bom)  /* ping_head1_2(4) */
	            hmsGfx(LAYER_ALPHA,gfx_rbom)  /* ping_head1_2(4) */
			hmsEnd()
	  	hmsEnd()
	  hmsEnd()
      hmsBegin()
         hmsJoint(RM_SURF,RCP_bom_basedata2,0,0,0)  /* cyl2(8) */
         hmsJoint(RM_SURF,NULL,42,-39,0)  /* chn5(7) */
         hmsBegin()
            hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt5_1(4) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,63,0,0)  /* jnt5_2(2) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_bom_basedata0,0,0,0)  /* cube3(0) */
               hmsEnd()
            hmsEnd()
         hmsEnd()
         hmsJoint(RM_SURF,NULL,-42,-39,0)  /* chn7(6) */
         hmsBegin()
            hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt7_1(5) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,63,0,0)  /* jnt7_2(3) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_bom_basedata1,0,0,0)  /* cube2(1) */
               hmsEnd()
            hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()

 hmsEnd()
 hmsExit()
};
