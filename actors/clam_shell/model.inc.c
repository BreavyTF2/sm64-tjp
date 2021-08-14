#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"
/**************************************************************/
/*	shape data big_shell_close (skeleton & animation) */
/**************************************************************/

#define ShapeColor_big_shell_close(r,g,b)   {{r/4 ,g/4 ,b/4 ,0 ,r/4 ,g/4 ,b/4 ,0 },{ r,g,b,0, r,g,b,0, 40, 40, 40, 0} }

/*-------------------------------------------------------------*/
/*	light data                                                 */
/*-------------------------------------------------------------*/

static Lights1 light_big_shell_close[]={
	ShapeColor_big_shell_close(109,143,195),
	ShapeColor_big_shell_close(96,162,226),
};

/*-------------------------------------------------------------*/
/*	vertex & polygon data                                      */
/*-------------------------------------------------------------*/

static Vtx vtx_big_shell_close0[]={
	{400,-51,-525,0,0,0,-15,-120,-36,255},
	{770,-25,-652,0,0,0,-4,-121,-37,255},
	{1074,-106,-432,0,0,0,35,-118,-28,255},
	{-10,1,131,0,0,0,-40,-119,12,255},
	{-10,1,-131,0,0,0,-40,-119,-12,255},
	{722,-260,0,0,0,0,-8,-126,0,255},
	{400,-51,525,0,0,0,-15,-120,36,255},
	{1074,-106,432,0,0,0,35,-118,28,255},
	{1078,-153,0,0,0,0,73,-103,0,255},
	{1204,18,0,0,0,0,102,-75,0,255},
	{770,-25,652,0,0,0,-4,-121,37,255},
};
static Vtx vtx_big_shell_close1[]={
	{551,-159,-432,0,0,0,29,121,-24,255},
	{246,-68,-652,0,0,0,19,124,-13,255},
	{258,0,0,0,0,0,12,126,0,255},
	{-527,-2,-131,0,0,0,1,126,-10,255},
	{-527,-2,131,0,0,0,1,126,10,255},
	{-124,-74,-525,0,0,0,-1,125,-16,255},
	{-124,-74,525,0,0,0,-1,125,16,255},
	{246,-68,652,0,0,0,19,124,13,255},
	{551,-159,432,0,0,0,29,121,24,255},
	{686,-45,0,0,0,0,13,126,0,255},
};
const Gfx RCP_big_shell_close0[]={
	
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPLight((&light_big_shell_close[0].l[0]),1),
	gsSPLight((&light_big_shell_close[0].a),2),
	gsSPVertex(&vtx_big_shell_close0[0],11,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(5,4,0,0),
	gsSP1Triangle(6,3,5,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(8,5,2,0),
	gsSP1Triangle(8,9,7,0),
	gsSP1Triangle(7,5,8,0),
	gsSP1Triangle(2,9,8,0),
	gsSP1Triangle(2,5,0,0),
	gsSP1Triangle(7,10,6,0),
//	gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList()
};
const Gfx RCP_big_shell_close1[]={
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPLight((&light_big_shell_close[1].l[0]),1),
	gsSPLight((&light_big_shell_close[1].a),2),
	gsSPVertex(&vtx_big_shell_close1[0],10,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(2,3,4,0),
	gsSP1Triangle(5,3,2,0),
	gsSP1Triangle(2,4,6,0),
	gsSP1Triangle(2,7,8,0),
	gsSP1Triangle(9,0,2,0),
	gsSP1Triangle(8,9,2,0),
	gsSP1Triangle(2,1,5,0),
	gsSP1Triangle(6,7,2,0),
//	gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList()
};
#pragma GCC diagnostic pop
