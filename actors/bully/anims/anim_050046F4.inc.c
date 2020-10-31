// 0x050045B0
static const s16 bully_seg5_animvalue_050045B0[] = {
	    0,  174,16383,-16475,-32767,-32767,16291,-13836,
	-14668,-16496,-18325,-19156,-16562,-13836,-14594,-16385,
	-17696,-17234,-16446,-13836,-14668,-16496,-18325,-19156,
	-16562,-13836,-14594,-16385,-17696,-17234,-16446,-16305,
	-16305,13697,14528,16357,18185,19016,16423,13697,
	14455,16246,17556,17095,16306,
};

// 0x0500464C
static const u16 bully_seg5_animindex_0500464C[] = {
	    1,    0,	/* chn1translate x */
	    1,    1,	/* chn1 translate y */
	    1,    0,	/* chn1 translate z */
	    1,    0,	/* chn1 rotate x */
	    1,    2,	/* chn1 rotate y */
	    1,    0,	/* chn1 rotate z */
	    1,    0,	/* jnt1_1 rotate x */
	    1,    0,	/* jnt1_1 rotate y */
	   12,   33,	/* jnt1_1 rotate z */
	    1,    0,	/* chn2 rotate x */
	    1,    0,	/* chn2 rotate y */
	    1,   32,	/* chn2 rotate z */
	    1,    0,	/* jnt2_1 rotate x */
	    1,    0,	/* jnt2_1 rotate y */
	   12,    7,	/* jnt2_1 rotate z */
	    1,    0,	/* jnt2_2 rotate x */
	    1,    0,	/* jnt2_2 rotate y */
	    1,    3,	/* jnt2_2 rotate z */
	    1,    0,	/* sphere4 rotate x */
	    1,    0,	/* sphere4 rotate y */
	    1,    0,	/* sphere4 rotate z */
	    1,    0,	/* chn4 rotate x */
	    1,    0,	/* chn4 rotate y */
	    1,   31,	/* chn4 rotate z */
	    1,    0,	/* jnt4_1 rotate x */
	    1,    0,	/* jnt4_1 rotate y */
	   12,   19,	/* jnt4_1 rotate z */
	    1,    4,	/* jnt4_2 rotate x */
	    1,    5,	/* jnt4_2 rotate y */
	    1,    6,	/* jnt4_2 rotate z */
	    1,    0,	/* sphere3 rotate x */
	    1,    0,	/* sphere3 rotate y */
	    1,    0,	/* sphere3 rotate z */
	    1,    0,	/* sphere1 rotate x */
	    1,    0,	/* sphere1 rotate y */
	    1,    0,	/* sphere1 rotate z */
	    1,    0,	/* cone1 rotate x */
	    1,    0,	/* cone1 rotate y */
	    1,    0,	/* cone1 rotate z */
	    1,    0,	/* grid1 rotate x */
	    1,    0,	/* grid1 rotate y */
	    1,    0,	/* grid1 rotate z */
};

// 0x050046F4
static const struct Animation bully_seg5_anim_050046F4 = {
    0,
    0,
    0,
    0,
    0x0C,
    ANIMINDEX_NUMPARTS(bully_seg5_animindex_0500464C),
    bully_seg5_animvalue_050045B0,
    bully_seg5_animindex_0500464C,
    0,
};
