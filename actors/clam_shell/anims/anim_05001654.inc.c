static short big_shell_close_prm[]={
	    0,16383, 3592, 4405, 5208, 4376, 3514, 4181,
	 4902, 4270, 3646, 4385, 5106, 4458, 3713, 4010,
	 4391, 4060, 3676, 3601, 3584, 3597, 3609, 3592,
	 8932,19801,28355,31287,31903,32275,32120,32275,
	-32767,-32767,-32767,};

static unsigned short big_shell_close_tbl[]= {
	     1,     0,	/* chn2(3) */
	     1,     0,
	     1,     0,
	     1,     0,	/* chn2(3) */
	     1,     1,
	     1,     0,
	     1,     0,	/* shell_B(2) */
	     1,     0,
	     1,    34,
	     1,    32,	/* chn1(1) */
	     1,    33,
	     1,     0,
	     1,     0,	/* shell_A(0) */
	     1,     0,
	    30,     2,
};

static const struct Animation big_shell_close_anm={
	1,	/* attr 	*/
	0,					/* code 	*/
	0,					/* start 	*/
	0,					/* loop 	*/
	30,
	4,
	big_shell_close_prm,
	big_shell_close_tbl,
	0
};
