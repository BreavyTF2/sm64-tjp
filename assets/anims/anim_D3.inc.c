static const struct Animation anim_D3[] = {
	 1,			/* attribute       	 */
	210,							/* syncro			 */
	 0,							/* start frame     	 */
	 0,							/* loop frame		 */
	10,							/* number of frames	 */
    20,
    anim_D3_values,
    anim_D3_indices,
	0,
};

static const u16 anim_D3_indices[] = {
	    1,    0,	/* chn14_3_1translate x */
	    1,    1,	/* chn14_3_1 translate y */
	    1,    2,	/* chn14_3_1 translate z */
	    1,    0,	/* chn14_3_1 rotate x */
	    1,    3,	/* chn14_3_1 rotate y */
	    1,    0,	/* chn14_3_1 rotate z */
	    1,    0,	/* <m_waist>1_3 rotate x */
	    1,    0,	/* <m_waist>1_3 rotate y */
	   10,  352,	/* <m_waist>1_3 rotate z */
	   10,  322,	/* <m_body>1 rotate x */
	   10,  332,	/* <m_body>1 rotate y */
	   10,  342,	/* <m_body>1 rotate z */
	   10,  292,	/* <m_head>2 rotate x */
	   10,  302,	/* <m_head>2 rotate y */
	   10,  312,	/* <m_head>2 rotate z */

	    1,  288,	/* chn6 rotate x */
	    1,  289,	/* chn6 rotate y */
	    1,  290,	/* chn6 rotate z */
	   10,   44,	/* <m_larmA>1 rotate x */
	   10,   54,	/* <m_larmA>1 rotate y */
	   10,   64,	/* <m_larmA>1 rotate z */
	    1,    0,	/* <m_larmB>1 rotate x */
	    1,    0,	/* <m_larmB>1 rotate y */
	   10,   34,	/* <m_larmB>1 rotate z */
	   10,    4,	/* <m_lhand>1 rotate x */
	   10,   14,	/* <m_lhand>1 rotate y */
	   10,   24,	/* <m_lhand>1 rotate z */

	    1,  284,	/* chn10 rotate x */
	    1,  285,	/* chn10 rotate y */
	    1,  286,	/* chn10 rotate z */
	   10,  114,	/* <m_rarmA>1 rotate x */
	   10,  124,	/* <m_rarmA>1 rotate y */
	   10,  134,	/* <m_rarmA>1 rotate z */
	    1,    0,	/* <m_rarmB>1 rotate x */
	    1,    0,	/* <m_rarmB>1 rotate y */
	   10,  104,	/* <m_rarmB>1 rotate z */
	   10,   74,	/* <m_rhand>1 rotate x */
	   10,   84,	/* <m_rhand>1 rotate y */
	   10,   94,	/* <m_rhand>1 rotate z */

	    1,    0,	/* chn15 rotate x */
	    1,    0,	/* chn15 rotate y */
	    1,  287,	/* chn15 rotate z */
	   10,  254,	/* <m_llegA>1 rotate x */
	   10,  264,	/* <m_llegA>1 rotate y */
	   10,  274,	/* <m_llegA>1 rotate z */
	    1,    0,	/* <m_llegB>1 rotate x */
	    1,    0,	/* <m_llegB>1 rotate y */
	   10,  244,	/* <m_llegB>1 rotate z */
	   10,  214,	/* <m_ltoot>1 rotate x */
	   10,  224,	/* <m_ltoot>1 rotate y */
	   10,  234,	/* <m_ltoot>1 rotate z */

	    1,    0,	/* chn17 rotate x */
	    1,    0,	/* chn17 rotate y */
	    1,  291,	/* chn17 rotate z */
	   10,  184,	/* <m_rlegA>1 rotate x */
	   10,  194,	/* <m_rlegA>1 rotate y */
	   10,  204,	/* <m_rlegA>1 rotate z */
	    1,    0,	/* <m_rlegB>1 rotate x */
	    1,    0,	/* <m_rlegB>1 rotate y */
	   10,  174,	/* <m_rlegB>1 rotate z */
	   10,  144,	/* <m_rfoot>1 rotate x */
	   10,  154,	/* <m_rfoot>1 rotate y */
	   10,  164,	/* <m_rfoot>1 rotate z */
};
static const s16 anim_D3_values[] = {
	    0,   54,   61,16383, 1167, 1073,  978,  882,
	  787,  693,  601,  512,  425,  342, -335, -150,
	  -28,   38,   55,   27,  -38, -136, -260, -405,
	-5741,-5608,-5475,-5342,-5210,-5080,-4954,-4832,
	-4714,-4602,    0,    0,    0,    0, -271, -799,
	-1460,-2229,-3081,-3991,15802,17234,18780,20419,
	22127,23883,25666,27453,29223,30953,-2082,-2152,
	-2391,-2779,-3296,-3923,-4640,-5427,-6265,-7133,
	19021,18891,18793,18724,18681,18661,18661,18679,
	18712,18756, 1244,  979,  751,  557,  394,  260,
	  152,   69,    6,  -36, 1411,  820,  333,  -57,
	 -360, -584, -736, -826, -861, -849,-1237,-1700,
	-2120,-2501,-2843,-3149,-3421,-3661,-3870,-4051,
	-1668,-1186, -934, -889,-1028,-1328,-1765,-2316,
	-2957,-3665,-18104,-19565,-21289,-23237,-25369,-27648,
	-30032,-32485,30568,28098, 3140, 3215, 3433, 3777,
	 4230, 4774, 5394, 6073, 6794, 7539,18839,18530,
	18080,17506,16827,16061,15226,14340,13421,12487,
	   36,   37,   37,   36,   35,   34,   34,   33,
	   33,   32, -232, -188, -129,  -62,    5,   66,
	  121,  173,  222,  264,-15298,-15248,-15137,-14994,
	-14843,-14711,-14597,-14483,-14376,-14283,16270,16777,
	17591,18528,19401,20023,20539,20978,20979,20182,
	  637,  601,  552,  500,  453,  417,  405,  410,
	  414,  396, 3031, 2614, 2293, 2035, 1804, 1566,
	 1323, 1103,  913,  758,-31004,-30227,-29695,-29284,
	-28871,-28330,-27515,-26541,-25678,-25199,-1101, -956,
	 -808, -663, -528, -408, -312, -239, -184, -141,
	  -54,  -77,  -99, -122, -143, -161, -177, -190,
	 -200, -207,-16620,-16214,-15805,-15413,-15058,-14761,
	-14589,-14541,-14531,-14475,18585,15713,11949, 7909,
	 4207, 1460,   56,    0,    0,    0,-1036,-1391,
	-1719,-2001,-2215,-2342,-2317,-2149,-1920,-1714,
	-4169,-3546,-2782,-1971,-1210, -594, -155,  150,
	  340,  433,-31649,-29137,-26091,-22913,-20003,-17762,
	-16356,-15612,-15427,-15698,-32767,-32767,16753,-16545,
	-32767,-32767,16753,-16545,    0,    0,   -1,   -4,
	   -4,    0,   15,   38,   59,   67,    0,    0,
	   -4,  -11,  -12,    0,   38,   96,  156,  220,
	-17374,-13651,-9023,-3809, 1273, 5505, 8162, 9619,
	10807,10960,   -2,   -5,    0,   14,   32,   52,
	   73,   92,  108,  119,    7,   15,    0,  -38,
	  -81, -130, -182, -236, -292, -348, 1576, 1497,
	 1243,  502, -426,-1425,-2379,-3171,-3686,-3806,
	-16436,-11703,-8728,-7028,-5538,-4227,-3067,-2028,
	-1080, -194
};
