#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"
#define ShapeColor_animed_patapata(r,g,b)   {{r/4 ,g/4 ,b/4 ,0 ,r/4 ,g/4 ,b/4 ,0 },{ r,g,b,0, r,g,b,0, 40, 40, 40, 0} }
/*-------------------------------------------------------------*/
/*	light data                                                 */
/*-------------------------------------------------------------*/

static Lights1 light_animed_patapata[]={
	ShapeColor_animed_patapata(0,110,0),
	ShapeColor_animed_patapata(255,230,87),
	ShapeColor_animed_patapata(172,84,5),
};

/*-------------------------------------------------------------*/
/*	vertex & polygon data                                      */
/*-------------------------------------------------------------*/

static Vtx vtx_animed_patapata0[]={
	{0,0,112,0,0,0,0,127,0,0},
	{288,0,0,0,0,0,0,127,0,0},
	{0,0,-112,0,0,0,0,127,0,0},
};
static Vtx vtx_animed_patapata1[]={
	{0,0,224,0,0,0,0,127,0,0},
	{288,0,112,0,0,0,0,127,0,0},
	{288,0,-112,0,0,0,0,127,0,0},
	{0,0,-224,0,0,0,0,127,0,255},
};
static Vtx vtx_animed_patapata2[]={
	{0,0,360,0,0,0,0,127,0,0},
	{344,0,224,0,0,0,0,127,0,0},
	{344,0,-224,0,0,0,0,127,0,0},
	{0,0,-360,0,0,0,0,127,0,255},
};
static Vtx vtx_animed_patapata3[]={
	{0,0,540,0,0,0,0,127,0,0},
	{460,0,360,0,0,0,0,127,0,0},
	{460,0,-360,0,0,0,0,127,0,0},
	{0,0,-540,0,0,0,0,127,0,255},
};
static Vtx vtx_animed_patapata4[]={
	{460,0,-540,0,0,0,0,127,0,0},
	{0,0,-719,0,0,0,0,127,0,0},
	{0,0,0,0,0,0,0,127,0,0},
	{0,0,720,0,0,0,0,127,0,255},
	{460,0,540,0,0,0,0,127,0,255},
	{460,0,540,0,0,0,0,127,0,0},
	{460,0,-540,0,0,0,0,127,0,0},
	{0,0,0,0,0,0,0,127,0,0},
};
static Vtx vtx_animed_patapata5[]={
	{0,18,57,0,0,0,0,39,120,0},
	{0,-48,35,0,0,0,0,-102,74,0},
	{2800,-18,57,0,0,0,95,-25,79,0},
	{0,-48,-35,0,0,0,0,-102,-74,255},
	{0,18,-57,0,0,0,0,39,-120,255},
	{2800,-18,-57,0,0,0,77,-31,-95,255},
	{0,60,0,0,0,0,0,127,0,255},
	{2800,48,35,0,0,0,45,95,69,255},
	{2800,-60,0,0,0,0,45,-118,0,255},
	{2800,48,-35,0,0,0,77,81,-59,255},
};
const Gfx RCP_animed_patapata0[]={
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPLight((&light_animed_patapata[0].l[0]),1),
	gsSPLight((&light_animed_patapata[0].a),2),
	gsSPVertex(&vtx_animed_patapata0[0],3,0),
	gsSP1Triangle(0,1,2,0),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList()
};
const Gfx RCP_animed_patapata1[]={
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPLight((&light_animed_patapata[0].l[0]),1),
	gsSPLight((&light_animed_patapata[0].a),2),
	gsSPVertex(&vtx_animed_patapata1[0],4,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList()
};
const Gfx RCP_animed_patapata2[]={
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPLight((&light_animed_patapata[0].l[0]),1),
	gsSPLight((&light_animed_patapata[0].a),2),
	gsSPVertex(&vtx_animed_patapata2[0],4,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSPEndDisplayList()
};
const Gfx RCP_animed_patapata3[]={
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPLight((&light_animed_patapata[0].l[0]),1),
	gsSPLight((&light_animed_patapata[0].a),2),
	gsSPVertex(&vtx_animed_patapata3[0],4,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList()
};
const Gfx RCP_animed_patapata4[]={
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPLight((&light_animed_patapata[1].l[0]),1),
	gsSPLight((&light_animed_patapata[1].a),2),
	gsSPVertex(&vtx_animed_patapata4[0],5,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(2,3,4,0),
	gsSPLight((&light_animed_patapata[0].l[0]),1),
	gsSPLight((&light_animed_patapata[0].a),2),
	gsSPVertex(&vtx_animed_patapata4[5],3,0),
	gsSP1Triangle(0,1,2,0),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList()
};
const Gfx RCP_animed_patapata5[]={
	gsSPLight((&light_animed_patapata[2].l[0]),1),
	gsSPLight((&light_animed_patapata[2].a),2),
	gsSPVertex(&vtx_animed_patapata5[0],10,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,0,7,0),
	gsSP1Triangle(1,3,8,0),
	gsSP1Triangle(4,6,9,0),
	gsSP1Triangle(9,7,2,0),
	gsSP1Triangle(9,2,5,0),
	gsSP1Triangle(2,8,5,0),
	gsSP1Triangle(5,8,3,0),
	gsSP1Triangle(9,5,4,0),
	gsSP1Triangle(7,9,6,0),
	gsSP1Triangle(2,7,0,0),
	gsSP1Triangle(8,2,1,0),
	gsSPEndDisplayList()
};
const Gfx animed_light_sourcex[]={
	gsSPNumLights(NUMLIGHTS_1),
	gsSPEndDisplayList()
};
#pragma GCC diagnostic pop
