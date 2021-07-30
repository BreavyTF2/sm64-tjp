#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverflow"
static short newrabbbit_hold_prm[]={
	    0,  101,    4,11368,-2823,-2506, 9000,16375,
	  249, 3401, 9797,-7516,  967,32447,-7281, 2636,
	32761, 5632,16383,  208,16383,
};

static unsigned short newrabbbit_hold_tbl[]={
	    1,    0,	/* chn10_1translate x */
	    1,    1,	/* chn10_1 translate y */
	    1,    2,	/* chn10_1 translate z */
	    1,    0,	/* chn10_1 rotate x */
	    1,    0,	/* chn10_1 rotate y */
	    1,    0,	/* chn10_1 rotate z */
	    1,   18,	/* <r_body>1 rotate x */
	    1,   19,	/* <r_body>1 rotate y */
	    1,   20,	/* <r_body>1 rotate z */
	    1,    0,	/* <r_face>1 rotate x */
	    1,    0,	/* <r_face>1 rotate y */
	    1,   17,	/* <r_face>1 rotate z */

	    1,    0,	/* chn7 rotate x */
	    1,    0,	/* chn7 rotate y */
	    1,    0,	/* chn7 rotate z */
	    1,    4,	/* <r_learB>1 rotate x */
	    1,    5,	/* <r_learB>1 rotate y */
	    1,    6,	/* <r_learB>1 rotate z */
	    1,    0,	/* <r_learA>1 rotate x */
	    1,    0,	/* <r_learA>1 rotate y */
	    1,    3,	/* <r_learA>1 rotate z */

	    1,    0,	/* chn9 rotate x */
	    1,    0,	/* chn9 rotate y */
	    1,    0,	/* chn9 rotate z */
	    1,    8,	/* <r_rearB>1 rotate x */
	    1,    9,	/* <r_rearB>1 rotate y */
	    1,   10,	/* <r_rearB>1 rotate z */
	    1,    0,	/* <r_rearA>1 rotate x */
	    1,    0,	/* <r_rearA>1 rotate y */
	    1,    7,	/* <r_rearA>1 rotate z */

	    1,    0,	/* chn2 rotate x */
	    1,    0,	/* chn2 rotate y */
	    1,    0,	/* chn2 rotate z */
	    1,    0,	/* <r_lleg>1 rotate x */
	    1,    0,	/* <r_lleg>1 rotate y */
	    1,   13,	/* <r_lleg>1 rotate z */
	    1,    0,	/* <r_lfootB>1 rotate x */
	    1,    0,	/* <r_lfootB>1 rotate y */
	    1,   12,	/* <r_lfootB>1 rotate z */
	    1,    0,	/* <r_lfootA>1 rotate x */
	    1,    0,	/* <r_lfootA>1 rotate y */
	    1,   11,	/* <r_lfootA>1 rotate z */

	    1,    0,	/* chn4 rotate x */
	    1,    0,	/* chn4 rotate y */
	    1,    0,	/* chn4 rotate z */
	    1,    0,	/* <r_rleg>1 rotate x */
	    1,    0,	/* <r_rleg>1 rotate y */
	    1,   16,	/* <r_rleg>1 rotate z */
	    1,    0,	/* <r_rfootB>1 rotate x */
	    1,    0,	/* <r_rfootB>1 rotate y */
	    1,   15,	/* <r_rfootB>1 rotate z */
	    1,    0,	/* <r_rfootA>1 rotate x */
	    1,    0,	/* <r_rfootA>1 rotate y */
	    1,   14,	/* <r_rfootA>1 rotate z */

};
static const struct Animation newrabbbit_hold_anm={
	 0,			/* attribute       		 */
	 0,							/* syncro				 */
	 0,							/* start frame     		 */
	 0,							/* loop frame		 	 */
	2,
	17,
	newrabbbit_hold_prm,
	newrabbbit_hold_tbl,
	0,
};
#pragma GCC diagnostic pop
