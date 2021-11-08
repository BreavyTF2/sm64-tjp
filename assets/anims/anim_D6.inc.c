static const struct Animation anim_D6[] = { //mario_slip_brake
	0,
	189,							/* syncro			 */
	0,
	0,
	74,
	20,
	anim_D6_values,
	anim_D6_indices,
	0,
};
static const u16 anim_D6_indices[] = {
	    1,    0,	/* chn14translate x */
	    1,    1,	/* chn14 translate y */
	    1,    0,	/* chn14 translate z */
	    1,    0,	/* chn14 rotate x */
	    1,    2,	/* chn14 rotate y */
	    1,    0,	/* chn14 rotate z */
	    1,    0,	/* <m_waist>1_3 rotate x */
	    1,    0,	/* <m_waist>1_3 rotate y */
	    1, 1051,	/* <m_waist>1_3 rotate z */
	   37,  940,	/* <m_body>1 rotate x */
	   37,  977,	/* <m_body>1 rotate y */
	   37, 1014,	/* <m_body>1 rotate z */
	   37,  829,	/* <m_head>2 rotate x */
	   37,  866,	/* <m_head>2 rotate y */
	   37,  903,	/* <m_head>2 rotate z */

	    1,  825,	/* chn6 rotate x */
	    1,  826,	/* chn6 rotate y */
	    1,  827,	/* chn6 rotate z */
	   37,   43,	/* <m_larmA>1 rotate x */
	   37,   80,	/* <m_larmA>1 rotate y */
	   37,  117,	/* <m_larmA>1 rotate z */
	    1,    0,	/* <m_larmB>1 rotate x */
	    1,    0,	/* <m_larmB>1 rotate y */
	   37,    6,	/* <m_larmB>1 rotate z */
	    1,    3,	/* <m_lhand>1 rotate x */
	    1,    4,	/* <m_lhand>1 rotate y */
	    1,    5,	/* <m_lhand>1 rotate z */
		
	    1,  821,	/* chn10 rotate x */
	    1,  822,	/* chn10 rotate y */
	    1,  823,	/* chn10 rotate z */
	   37,  192,	/* <m_rarmA>1 rotate x */
	   37,  229,	/* <m_rarmA>1 rotate y */
	   37,  266,	/* <m_rarmA>1 rotate z */
	    1,    0,	/* <m_rarmB>1 rotate x */
	    1,    0,	/* <m_rarmB>1 rotate y */
	   37,  155,	/* <m_rarmB>1 rotate z */
	    1,    0,	/* <m_rhand>1 rotate x */
	    1,    0,	/* <m_rhand>1 rotate y */
	    1,  154,	/* <m_rhand>1 rotate z */

	    1,    0,	/* chn15 rotate x */
	    1,    0,	/* chn15 rotate y */
	    1,  824,	/* chn15 rotate z */
	   37,  710,	/* <m_llegA>1 rotate x */
	   37,  747,	/* <m_llegA>1 rotate y */
	   37,  784,	/* <m_llegA>1 rotate z */
	    1,    0,	/* <m_llegB>1 rotate x */
	    1,    0,	/* <m_llegB>1 rotate y */
	   37,  673,	/* <m_llegB>1 rotate z */
	   37,  562,	/* <m_ltoot>1 rotate x */
	   37,  599,	/* <m_ltoot>1 rotate y */
	   37,  636,	/* <m_ltoot>1 rotate z */

	    1,    0,	/* chn17 rotate x */
	    1,    0,	/* chn17 rotate y */
	    1,  828,	/* chn17 rotate z */
	   37,  451,	/* <m_rlegA>1 rotate x */
	   37,  488,	/* <m_rlegA>1 rotate y */
	   37,  525,	/* <m_rlegA>1 rotate z */
	    1,    0,	/* <m_rlegB>1 rotate x */
	    1,    0,	/* <m_rlegB>1 rotate y */
	   37,  414,	/* <m_rlegB>1 rotate z */
	   37,  303,	/* <m_rfoot>1 rotate x */
	   37,  340,	/* <m_rfoot>1 rotate y */
	   37,  377,	/* <m_rfoot>1 rotate z */
};
static const s16 anim_D6_values[] = {
	    0,   54,16383, -118,-1664,-3985,-10742,-10742,
	-10742,-10740,-10739,-10737,-10735,-10732,-10729,-10726,
	-10723,-10719,-10715,-10711,-10707,-10703,-10699,-10695,
	-10690,-10686,-10682,-10677,-10673,-10669,-10665,-10661,
	-10658,-10654,-10651,-10648,-10646,-10644,-10642,-10640,
	-10639,-10638,-10638,-24240,-24178,-23996,-23702,-23302,
	-22803,-22213,-21539,-20787,-19965,-19079,-18137,-17146,
	-16112,-15043,-13947,-12829,-11697,-10558,-9419,-8287,
	-7169,-6072,-5003,-3970,-2978,-2036,-1151, -328,
	  423, 1097, 1687, 2186, 2586, 2880, 3062, 3124,
	-13163,-13158,-13144,-13121,-13090,-13052,-13006,-12953,
	-12895,-12831,-12762,-12689,-12612,-12532,-12449,-12364,
	-12277,-12189,-12101,-12013,-11925,-11838,-11753,-11670,
	-11590,-11513,-11439,-11371,-11307,-11249,-11196,-11150,
	-11112,-11081,-11058,-11044,-11039,19238,19181,19015,
	18747,18382,17927,17389,16774,16088,15339,14531,
	13672,12768,11826,10851, 9851, 8831, 7799, 6760,
	 5722, 4689, 3670, 2670, 1695,  753, -150,-1009,
	-1817,-2567,-3252,-3867,-4405,-4860,-5225,-5493,
	-5659,-5716,-4724,-9282,-9285,-9292,-9305,-9322,
	-9343,-9367,-9396,-9427,-9462,-9499,-9538,-9580,
	-9623,-9668,-9714,-9761,-9808,-9856,-9904,-9951,
	-9998,-10044,-10089,-10132,-10174,-10213,-10250,-10285,
	-10316,-10345,-10369,-10390,-10407,-10419,-10427,-10430,
	12583,12555,12474,12342,12162,11938,11674,11371,
	11033,10664,10267, 9844, 9399, 8935, 8455, 7963,
	 7461, 6953, 6442, 5930, 5422, 4921, 4428, 3949,
	 3485, 3040, 2617, 2219, 1850, 1513, 1210,  945,
	  721,  542,  410,  328,  300,12698,12690,12665,
	12625,12570,12501,12421,12328,12225,12112,11991,
	11862,11726,11585,11438,11288,11135,10980,10824,
	10667,10512,10359,10209,10062, 9921, 9785, 9656,
	 9535, 9422, 9319, 9226, 9146, 9077, 9023, 8982,
	 8957, 8949, 6305, 6283, 6218, 6113, 5970, 5793,
	 5582, 5342, 5074, 4781, 4465, 4130, 3776, 3408,
	 3027, 2636, 2238, 1834, 1428, 1022,  619,  220,
	 -170, -551, -919,-1272,-1608,-1924,-2217,-2485,
	-2725,-2935,-3113,-3256,-3361,-3425,-3448,   27,
	   27,   25,   22,   18,   13,    7,    0,   -7,
	  -15,  -24,  -33,  -43,  -54,  -65,  -76,  -87,
	  -98, -110, -122, -133, -144, -155, -166, -177,
	 -187, -196, -205, -213, -221, -228, -234, -239,
	 -243, -246, -248, -248,  603,  603,  603,  602,
	  602,  601,  599,  598,  597,  595,  593,  592,
	  590,  588,  586,  583,  581,  579,  577,  575,
	  573,  570,  568,  566,  564,  562,  560,  559,
	  557,  556,  554,  553,  552,  552,  551,  551,
	  550,-13531,-13542,-13575,-13627,-13699,-13789,-13894,
	-14015,-14150,-14298,-14457,-14626,-14804,-14989,-15181,
	-15378,-15578,-15781,-15986,-16190,-16393,-16594,-16790,
	-16982,-17167,-17345,-17514,-17673,-17821,-17956,-18077,
	-18182,-18272,-18344,-18397,-18429,-18440, 1600, 1637,
	 1745, 1920, 2158, 2454, 2805, 3206, 3653, 4142,
	 4669, 5229, 5818, 6433, 7068, 7720, 8385, 9058,
	 9735,10413,11086,11750,12402,13038,13652,14242,
	14802,15328,15817,16264,16665,17016,17313,17551,
	17726,17834,17871,  -59,  -58,  -57,  -55,  -52,
	  -49,  -45,  -41,  -36,  -30,  -25,  -18,  -12,
	   -5,    1,    8,   16,   23,   31,   38,   46,
	   53,   60,   67,   74,   81,   87,   93,   98,
	  103,  108,  112,  115,  118,  119,  121,  121,
	 -335, -335, -335, -335, -334, -334, -334, -333,
	 -333, -332, -332, -331, -330, -330, -329, -328,
	 -328, -327, -326, -326, -325, -324, -323, -323,
	 -322, -322, -321, -320, -320, -319, -319, -319,
	 -318, -318, -318, -318, -318,-25567,-25580,-25618,
	-25678,-25761,-25863,-25985,-26124,-26278,-26448,-26630,
	-26824,-27028,-27241,-27461,-27687,-27917,-28150,-28385,
	-28619,-28852,-29083,-29309,-29529,-29741,-29946,-30139,
	-30322,-30491,-30646,-30785,-30906,-31009,-31091,-31152,
	-31190,-31202,  149,  149,  150,  152,  153,  156,
	  158,  161,  165,  168,  173,  177,  181,  186,
	  191,  196,  201,  206,  211,  216,  222,  227,
	  232,  236,  241,  246,  250,  254,  258,  261,
	  264,  267,  269,  271,  272,  273,  273, -247,
	 -247, -246, -244, -242, -239, -236, -232, -228,
	 -223, -218, -213, -207, -201, -195, -189, -183,
	 -176, -170, -163, -157, -151, -145, -139, -133,
	 -127, -122, -117, -112, -108, -104, -101,  -98,
	  -96,  -94,  -93,  -93,-13246,-13262,-13311,-13389,
	-13496,-13629,-13786,-13966,-14167,-14386,-14623,-14874,
	-15138,-15414,-15699,-15992,-16290,-16592,-16896,-17200,
	-17502,-17800,-18093,-18378,-18653,-18918,-19169,-19405,
	-19625,-19825,-20005,-20163,-20296,-20403,-20481,-20530,
	-20546, 2503, 2542, 2655, 2839, 3089, 3401, 3770,
	 4191, 4661, 5175, 5729, 6318, 6937, 7583, 8251,
	 8937, 9636,10343,11055,11767,12475,13174,13859,
	14527,15173,15793,16382,16935,17449,17919,18341,
	18710,19021,19271,19455,19569,19608,    0,    0,
	    0,   -1,   -2,   -3,   -5,   -7,   -9,  -11,
	  -13,  -15,  -18,  -21,  -23,  -26,  -29,  -32,
	  -35,  -38,  -41,  -44,  -47,  -50,  -52,  -55,
	  -57,  -60,  -62,  -64,  -66,  -67,  -68,  -69,
	  -70,  -71,  -71,  108,  108,  107,  107,  107,
	  106,  106,  105,  104,  103,  103,  102,  101,
	  100,   99,   98,   96,   95,   94,   93,   92,
	   91,   90,   89,   88,   87,   86,   85,   84,
	   83,   83,   82,   82,   81,   81,   81,   81,
	-24265,-24282,-24330,-24409,-24516,-24649,-24806,-24986,
	-25187,-25406,-25642,-25894,-26158,-26434,-26719,-27012,
	-27310,-27612,-27916,-28220,-28522,-28820,-29113,-29398,
	-29674,-29938,-30189,-30426,-30645,-30846,-31026,-31183,
	-31316,-31423,-31501,-31550,-31566,-32767,-32767,16753,
	-16545,-32767,-32767,16753,-16545,    0,    0,    1,
	    2,    4,    7,    9,   13,   16,   20,   25,
	   29,   34,   39,   44,   50,   55,   61,   66,
	   72,   77,   83,   88,   94,   99,  103,  108,
	  112,  116,  120,  123,  126,  129,  131,  132,
	  133,  133,  834,  834,  834,  834,  834,  833,
	  833,  833,  833,  832,  832,  832,  831,  831,
	  830,  830,  829,  829,  829,  828,  828,  827,
	  827,  826,  826,  826,  825,  825,  825,  824,
	  824,  824,  823,  823,  823,  823,  823, 6165,
	 6169, 6180, 6198, 6223, 6253, 6289, 6330, 6376,
	 6427, 6481, 6539, 6599, 6662, 6728, 6795, 6863,
	 6933, 7002, 7072, 7141, 7210, 7277, 7342, 7405,
	 7466, 7524, 7578, 7628, 7674, 7715, 7751, 7782,
	 7806, 7824, 7835, 7839,    0,    1,    4,   10,
	   18,   28,   40,   53,   68,   85,  102,  121,
	  141,  161,  182,  204,  227,  249,  272,  294,
	  317,  339,  361,  382,  403,  422,  441,  459,
	  475,  490,  504,  515,  525,  533,  539,  543,
	  544, -834, -833, -832, -830, -827, -823, -819,
	 -814, -808, -802, -796, -789, -782, -774, -766,
	 -758, -750, -741, -733, -725, -716, -708, -700,
	 -692, -684, -677, -670, -664, -658, -652, -647,
	 -643, -639, -636, -634, -633, -632, 5100, 5083,
	 5034, 4954, 4845, 4710, 4550, 4367, 4163, 3940,
	 3700, 3445, 3176, 2895, 2606, 2308, 2005, 1698,
	 1389, 1080,  773,  470,  172, -116, -397, -666,
	 -921,-1161,-1384,-1588,-1771,-1931,-2066,-2175,
	-2255,-2304,-2321, 7784
	};
