#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"
#define ShapeColor_wanwan_anim(r,g,b)   {{r/4 ,g/4 ,b/4 ,0 ,r/4 ,g/4 ,b/4 ,0 },{ r,g,b,0, r,g,b,0, 40, 40, 40, 0} }
/*-------------------------------------------------------------*/
/*	light data                                                 */
/*-------------------------------------------------------------*/

static Lights1 light_wanwan_anim[]={
	ShapeColor_wanwan_anim(255,255,255),
	ShapeColor_wanwan_anim(13,15,22),
	ShapeColor_wanwan_anim(150,0,0),
};

// 0x060233D0
ALIGNED8 static const u8 chain_chomp_seg6_texture_060233D0[] = {
#include "actors/chain_chomp/chain_chomp_eye.rgba16.inc.c"
};

static Vtx vtx_wanwan_anim0[]={
	{281,6,-451,0,0,0,45,-5,-118,0},
	{223,-71,-469,0,0,0,45,-5,-118,0},
	{181,6,-490,0,0,0,45,-5,-118,0},
	{399,6,-401,0,0,0,49,-18,-115,255},
	{322,-105,-415,0,0,0,49,-18,-115,255},
	{281,6,-451,0,0,0,49,-18,-115,255},
	{458,6,-260,0,0,0,115,-20,-48,255},
	{400,-155,-330,0,0,0,115,-20,-48,255},
	{399,6,-401,0,0,0,115,-20,-48,255},
	{563,6,0,0,0,0,114,-29,-45,255},
	{451,-210,-138,0,0,0,114,-29,-45,255},
	{458,6,-260,0,0,0,114,-29,-45,255},
	{458,6,260,0,0,0,114,-30,46,255},
	{451,-210,138,0,0,0,114,-30,46,255},
	{563,6,0,0,0,0,114,-30,46,255},
	{399,6,401,0,0,0,115,-20,48,255},
	{400,-155,330,0,0,0,115,-20,48,0},
	{458,6,260,0,0,0,115,-20,48,0},
	{281,6,451,0,0,0,49,-18,115,255},
	{322,-105,415,0,0,0,49,-18,115,255},
	{399,6,401,0,0,0,49,-18,115,255},
	{181,6,490,0,0,0,45,-5,118,255},
	{223,-71,469,0,0,0,45,-5,118,255},
	{281,6,451,0,0,0,45,-5,118,255},
};
static Vtx vtx_wanwan_anim1[]={
	{333,-250,-423,0,990,990,111,-32,-51,255},
	{392,-25,-436,0,0,990,111,-32,-51,255},
	{419,-271,-221,0,990,0,111,-32,-51,255},
	{478,-46,-235,0,0,0,111,-32,-51,255},
	{419,-271,221,0,990,990,111,-32,51,255},
	{392,-25,436,0,0,0,111,-32,51,255},
	{333,-250,423,0,990,0,111,-32,51,255},
	{478,-46,235,0,0,990,111,-32,51,255},
};
static Vtx vtx_wanwan_anim2[]={
	{-156,533,-156,0,0,0,-34,117,-34,0},
	{-220,533,0,0,0,0,-48,117,0,0},
	{0,577,0,0,0,0,0,127,0,0},
	{-288,408,-288,0,0,0,-63,90,-63,255},
	{-408,408,0,0,0,0,-89,90,0,255},
	{-377,220,-377,0,0,0,-82,48,-82,255},
	{-533,220,0,0,0,0,-117,48,0,255},
	{-408,0,-408,0,0,0,-89,0,-89,255},
	{-577,0,0,0,0,0,-127,0,0,255},
	{-377,220,377,0,0,0,-82,48,82,255},
	{-408,0,408,0,0,0,-89,0,89,255},
	{-288,408,288,0,0,0,-63,90,63,255},
	{-156,533,156,0,0,0,-34,117,34,255},
	{0,533,-220,0,0,0,0,117,-48,255},
	{0,408,-408,0,0,0,0,90,-89,255},
	{0,220,-533,0,0,0,0,48,-117,255},
	{-377,220,-377,0,0,0,-82,48,-82,255},
	{0,220,-533,0,0,0,0,48,-117,0},
	{0,0,-577,0,0,0,0,24,-124,0},
	{-408,0,-408,0,0,0,-89,0,-89,255},
	{0,220,533,0,0,0,0,48,117,255},
	{-377,220,377,0,0,0,-82,48,82,255},
	{-408,0,408,0,0,0,-89,0,89,255},
	{0,0,577,0,0,0,0,24,124,255},
	{0,408,408,0,0,0,0,90,89,255},
	{-288,408,288,0,0,0,-63,90,63,255},
	{0,533,220,0,0,0,0,117,48,255},
	{-156,533,156,0,0,0,-34,117,34,255},
	{0,577,0,0,0,0,0,127,0,255},
	{156,533,-156,0,0,0,34,117,-34,255},
	{0,533,-220,0,0,0,0,117,-48,255},
	{288,408,-288,0,0,0,63,90,-63,255},
	{0,533,-220,0,0,0,0,117,-48,255},
	{288,408,-288,0,0,0,63,90,-63,0},
	{0,408,-408,0,0,0,0,90,-89,0},
	{377,220,-377,0,0,0,82,48,-82,255},
	{0,220,-533,0,0,0,0,48,-117,255},
	{408,0,-408,0,0,0,88,24,-88,255},
	{0,0,-577,0,0,0,0,24,-124,255},
	{377,220,377,0,0,0,82,48,82,255},
	{0,220,533,0,0,0,0,48,117,255},
	{0,0,577,0,0,0,0,24,124,255},
	{408,0,408,0,0,0,88,24,88,255},
	{288,408,288,0,0,0,63,90,63,255},
	{0,408,408,0,0,0,0,90,89,255},
	{156,533,156,0,0,0,34,117,34,255},
	{0,533,220,0,0,0,0,117,48,255},
	{0,577,0,0,0,0,0,127,0,255},
	{220,533,0,0,0,0,48,117,0,255},
	{156,533,-156,0,0,0,34,117,-34,0},
	{0,577,0,0,0,0,0,127,0,0},
	{408,408,0,0,0,0,89,90,0,255},
	{288,408,-288,0,0,0,63,90,-63,255},
	{533,220,0,0,0,0,117,48,0,255},
	{377,220,-377,0,0,0,82,48,-82,255},
	{577,0,0,0,0,0,124,24,0,255},
	{408,0,-408,0,0,0,88,24,-88,255},
	{377,220,377,0,0,0,82,48,82,255},
	{408,0,408,0,0,0,88,24,88,255},
	{288,408,288,0,0,0,63,90,63,255},
	{156,533,156,0,0,0,34,117,34,255},
	{0,0,-577,0,0,0,0,-127,0,0},
	{408,0,-408,0,0,0,0,-127,0,0},
	{577,0,0,0,0,0,0,-127,0,0},
	{408,0,408,0,0,0,0,-127,0,255},
	{0,0,577,0,0,0,0,-127,0,255},
};
static Vtx vtx_wanwan_anim3[]={
	{181,-6,-490,0,0,0,45,5,-118,0},
	{223,71,-469,0,0,0,45,5,-118,0},
	{281,-6,-451,0,0,0,45,5,-118,0},
	{281,-6,-451,0,0,0,49,17,-115,255},
	{322,105,-416,0,0,0,49,17,-115,255},
	{399,-6,-401,0,0,0,49,17,-115,255},
	{399,-6,-401,0,0,0,112,36,-47,255},
	{375,158,-330,0,0,0,112,36,-47,255},
	{458,-6,-260,0,0,0,112,36,-47,255},
	{458,-6,-260,0,0,0,115,26,-46,255},
	{454,225,-138,0,0,0,115,26,-46,255},
	{563,-6,0,0,0,0,115,26,-46,255},
	{563,-6,0,0,0,0,115,26,46,255},
	{454,225,138,0,0,0,115,26,46,255},
	{458,-6,260,0,0,0,115,26,46,255},
	{458,-6,260,0,0,0,112,36,47,255},
	{375,158,330,0,0,0,112,36,47,0},
	{399,-6,401,0,0,0,112,36,47,0},
	{399,-6,401,0,0,0,49,17,115,255},
	{322,105,416,0,0,0,49,17,115,255},
	{281,-6,451,0,0,0,49,17,115,255},
	{281,-6,451,0,0,0,45,5,118,255},
	{223,71,469,0,0,0,45,5,118,255},
	{181,-6,490,0,0,0,45,5,118,255},
};
static Vtx vtx_wanwan_anim4[]={
	{0,-577,0,0,0,0,0,-127,0,0},
	{-220,-533,0,0,0,0,-48,-117,0,0},
	{-156,-533,-156,0,0,0,-34,-117,-34,0},
	{-408,-408,0,0,0,0,-89,-90,0,255},
	{-288,-408,-288,0,0,0,-63,-90,-63,255},
	{-533,-220,0,0,0,0,-117,-48,0,255},
	{-377,-220,-377,0,0,0,-82,-48,-82,255},
	{-577,0,0,0,0,0,-127,0,0,255},
	{-408,0,-408,0,0,0,-89,0,-89,255},
	{-408,0,408,0,0,0,-89,0,89,255},
	{-377,-220,377,0,0,0,-82,-48,82,255},
	{-288,-408,288,0,0,0,-63,-90,63,255},
	{-156,-533,156,0,0,0,-34,-117,34,255},
	{0,-533,-220,0,0,0,0,-117,-48,255},
	{0,-408,-408,0,0,0,0,-90,-89,255},
	{0,-220,-533,0,0,0,0,-47,-117,255},
	{-408,0,-408,0,0,0,-89,0,-89,255},
	{0,0,-577,0,0,0,18,-27,-122,0},
	{0,-220,-533,0,0,0,0,-47,-117,0},
	{-377,-220,-377,0,0,0,-82,-48,-82,255},
	{0,0,577,0,0,0,0,-24,124,255},
	{-408,0,408,0,0,0,-89,0,89,255},
	{-377,-220,377,0,0,0,-82,-48,82,255},
	{0,-220,533,0,0,0,2,-50,116,255},
	{-288,-408,288,0,0,0,-63,-90,63,255},
	{0,-408,408,0,0,0,3,-89,90,255},
	{-156,-533,156,0,0,0,-34,-117,34,255},
	{0,-533,220,0,0,0,0,-117,48,255},
	{0,-577,0,0,0,0,0,-127,0,255},
	{0,-533,-220,0,0,0,0,-117,-48,255},
	{156,-533,-156,0,0,0,34,-117,-34,255},
	{0,-408,-408,0,0,0,0,-90,-89,255},
	{288,-408,-288,0,0,0,63,-88,-65,0},
	{156,-533,-156,0,0,0,34,-117,-34,0},
	{0,-533,-220,0,0,0,0,-117,-48,255},
	{0,-220,-533,0,0,0,0,-47,-117,255},
	{367,-215,-367,0,0,0,82,-48,-83,255},
	{0,0,-577,0,0,0,18,-27,-122,255},
	{408,0,-408,0,0,0,97,-30,-75,255},
	{408,0,408,0,0,0,75,-30,97,255},
	{0,0,577,0,0,0,0,-24,124,255},
	{0,-220,533,0,0,0,2,-50,116,255},
	{367,-215,367,0,0,0,83,-48,82,255},
	{0,-408,408,0,0,0,3,-89,90,255},
	{288,-408,288,0,0,0,65,-88,63,255},
	{0,-533,220,0,0,0,0,-117,48,255},
	{156,-533,156,0,0,0,34,-117,34,255},
	{0,-577,0,0,0,0,0,-127,0,255},
	{156,-533,156,0,0,0,34,-117,34,0},
	{0,-533,220,0,0,0,0,-117,48,0},
	{156,-533,-156,0,0,0,34,-117,-34,255},
	{220,-533,0,0,0,0,48,-117,0,255},
	{288,-408,-288,0,0,0,63,-88,-65,255},
	{408,-408,0,0,0,0,90,-89,-3,255},
	{367,-215,-367,0,0,0,82,-48,-83,255},
	{533,-220,0,0,0,0,117,-49,0,255},
	{408,0,-408,0,0,0,97,-30,-75,255},
	{577,0,0,0,0,0,122,-27,18,255},
	{408,0,408,0,0,0,75,-30,97,255},
	{367,-215,367,0,0,0,83,-48,82,255},
	{288,-408,288,0,0,0,65,-88,63,255},
	{0,0,577,0,0,0,0,127,0,0},
	{408,0,408,0,0,0,0,127,0,0},
	{577,0,0,0,0,0,0,127,0,0},
	{408,0,-408,0,0,0,0,127,0,255},
	{0,0,-577,0,0,0,0,127,0,255},
};
const Gfx RCP_wanwan_anim0[]={
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPLight((&light_wanwan_anim[0].l[0]),1),
	gsSPLight((&light_wanwan_anim[0].a),2),
	gsSPVertex(&vtx_wanwan_anim0[0],15,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(9,10,11,0),
	gsSP1Triangle(12,13,14,0),
	gsSPVertex(&vtx_wanwan_anim0[15],9,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,7,8,0),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList()
};

const Gfx RCP_wanwan_anim5[]={
	gsSPClearGeometryMode(G_CULL_BACK),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, chain_chomp_seg6_texture_060233D0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPLight((&light_wanwan_anim[0].l[0]),1),
	gsSPLight((&light_wanwan_anim[0].a),2),
	gsSPVertex(&vtx_wanwan_anim1[0],12,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,3,2,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(4,7,5,0),
	gsSPEndDisplayList()
};
// 0x06024B00 - 0x06024B70
const Gfx RCP_wanwan_anim1[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_MODULATERGBA, G_CC_MODULATERGBA),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32,  0, 0, G_TX_CLAMP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_CLAMP|G_TX_NOMIRROR, 5, G_TX_NOLOD),

		gsSPDisplayList(RCP_wanwan_anim5),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList() 
};
const Gfx RCP_wanwan_anim2[]={
	gsDPPipeSync(),
	gsSPLight((&light_wanwan_anim[1].l[0]),1),
	gsSPLight((&light_wanwan_anim[1].a),2),
	gsSPVertex(&vtx_wanwan_anim2[0],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(9,6,8,0),
	gsSP1Triangle(9,8,10,0),
	gsSP1Triangle(11,4,6,0),
	gsSP1Triangle(11,6,9,0),
	gsSP1Triangle(12,1,4,0),
	gsSP1Triangle(12,4,11,0),
	gsSP1Triangle(1,12,2,0),
	gsSP1Triangle(13,0,2,0),
	gsSP1Triangle(0,13,14,0),
	gsSP1Triangle(0,14,3,0),
	gsSP1Triangle(3,14,15,0),
	gsSP1Triangle(3,15,5,0),
	gsSPVertex(&vtx_wanwan_anim2[16],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(4,6,7,0),
	gsSP1Triangle(8,9,5,0),
	gsSP1Triangle(8,5,4,0),
	gsSP1Triangle(10,11,9,0),
	gsSP1Triangle(10,9,8,0),
	gsSP1Triangle(11,10,12,0),
	gsSP1Triangle(13,14,12,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_wanwan_anim2[32],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(2,1,3,0),
	gsSP1Triangle(2,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(7,8,9,0),
	gsSP1Triangle(7,9,10,0),
	gsSP1Triangle(11,12,8,0),
	gsSP1Triangle(11,8,7,0),
	gsSP1Triangle(13,14,12,0),
	gsSP1Triangle(13,12,11,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_wanwan_anim2[48],13,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(5,9,10,0),
	gsSP1Triangle(5,10,7,0),
	gsSP1Triangle(3,11,9,0),
	gsSP1Triangle(3,9,5,0),
	gsSP1Triangle(0,12,11,0),
	gsSP1Triangle(0,11,3,0),
	gsSP1Triangle(12,0,2,0),
	gsSPLight((&light_wanwan_anim[2].l[0]),1),
	gsSPLight((&light_wanwan_anim[2].a),2),
	gsSPVertex(&vtx_wanwan_anim2[61],5,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(0,3,4,0),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList()
};
const Gfx RCP_wanwan_anim3[]={
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPLight((&light_wanwan_anim[0].l[0]),1),
	gsSPLight((&light_wanwan_anim[0].a),2),
	gsSPVertex(&vtx_wanwan_anim3[0],15,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(9,10,11,0),
	gsSP1Triangle(12,13,14,0),
	gsSPVertex(&vtx_wanwan_anim3[15],9,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,7,8,0),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList()
};
const Gfx RCP_wanwan_anim4[]={
	gsDPPipeSync(),
	gsSPLight((&light_wanwan_anim[1].l[0]),1),
	gsSPLight((&light_wanwan_anim[1].a),2),
	gsSPVertex(&vtx_wanwan_anim4[0],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,2,0),
	gsSP1Triangle(3,2,1,0),
	gsSP1Triangle(5,6,4,0),
	gsSP1Triangle(5,4,3,0),
	gsSP1Triangle(7,8,6,0),
	gsSP1Triangle(7,6,5,0),
	gsSP1Triangle(9,7,5,0),
	gsSP1Triangle(9,5,10,0),
	gsSP1Triangle(10,5,3,0),
	gsSP1Triangle(10,3,11,0),
	gsSP1Triangle(11,3,1,0),
	gsSP1Triangle(11,1,12,0),
	gsSP1Triangle(0,12,1,0),
	gsSP1Triangle(0,2,13,0),
	gsSP1Triangle(4,14,13,0),
	gsSP1Triangle(4,13,2,0),
	gsSP1Triangle(6,15,14,0),
	gsSP1Triangle(6,14,4,0),
	gsSPVertex(&vtx_wanwan_anim4[16],15,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(4,6,7,0),
	gsSP1Triangle(7,6,8,0),
	gsSP1Triangle(7,8,9,0),
	gsSP1Triangle(9,8,10,0),
	gsSP1Triangle(9,10,11,0),
	gsSP1Triangle(12,11,10,0),
	gsSP1Triangle(12,13,14,0),
	gsSPVertex(&vtx_wanwan_anim4[31],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(4,5,1,0),
	gsSP1Triangle(4,1,0,0),
	gsSP1Triangle(6,7,5,0),
	gsSP1Triangle(6,5,4,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(8,10,11,0),
	gsSP1Triangle(11,10,12,0),
	gsSP1Triangle(11,12,13,0),
	gsSP1Triangle(13,12,14,0),
	gsSP1Triangle(13,14,15,0),
	gsSPVertex(&vtx_wanwan_anim4[47],14,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,3,4,0),
	gsSP1Triangle(5,6,4,0),
	gsSP1Triangle(5,4,3,0),
	gsSP1Triangle(7,8,6,0),
	gsSP1Triangle(7,6,5,0),
	gsSP1Triangle(9,10,8,0),
	gsSP1Triangle(9,8,7,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(10,12,8,0),
	gsSP1Triangle(8,12,13,0),
	gsSP1Triangle(8,13,6,0),
	gsSP1Triangle(6,13,1,0),
	gsSP1Triangle(6,1,4,0),
	gsSP1Triangle(0,4,1,0),
	gsSPLight((&light_wanwan_anim[2].l[0]),1),
	gsSPLight((&light_wanwan_anim[2].a),2),
	gsSPVertex(&vtx_wanwan_anim4[61],5,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(0,3,4,0),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList()
};
#pragma GCC diagnostic pop
