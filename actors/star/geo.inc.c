// 0x16000EA0
const GeoLayout star_geo[] = {
	hmsShadow(100, 155, 1)
    hmsBegin()
	hmsScale(0.25f)
    	hmsBegin()
        	hmsGfx(RM_SURF  , gfx_polystar)
        	hmsGfx(RM_SPRITE, gfx_polystar_eye)
	    hmsEnd()
    hmsEnd()
    hmsExit()
};

