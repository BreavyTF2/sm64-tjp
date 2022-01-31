// 0x05003008
ALIGNED8 static const u8 sun_seg5_texture_05004008[] = {
#include "actors/sun/angry_sun.rgba16.inc.c"
};

// 0x08022BB8
static const Vtx angry_sun_seg5_vertex[] = {
    {{{       0,     49*4,      0}, 0, {   996,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -50*4,    -49*4,      0}, 0, {     0,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{		  0,    -49*4,      0}, 0, {   996,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -50*4,     49*4,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
};
// 0x08022BB8
static const Vtx angry_sun1_seg5_vertex[] = {
    {{{    49*4,     49*4,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   	0,	    -49*4,      0}, 0, {   996,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    49*4,    -49*4,      0}, 0, {     0,   2012}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   	0,       49*4,      0}, 0, {   996,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x08022C38 - 0x08022CA0
const Gfx angry_sun_seg8_dl_0[] = {
	gs_Tani_LoadTextureImage2(sun_seg5_texture_05004008, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 7),
    gsSPVertex(angry_sun_seg5_vertex, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x08022C38 - 0x08022CA0
const Gfx angry_sun_seg8_dl_1[] = {
	gs_Tani_LoadTextureImage2(sun_seg5_texture_05004008, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 7),
    gsSPVertex(angry_sun1_seg5_vertex, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x08022D08 - 0x08022D78
const Gfx angry_sun_seg8_dl_2[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
	gsSPClearGeometryMode(G_LIGHTING), 
	gsDPSetTile(G_IM_FMT_RGBA,G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 32, 64,  0, 0, G_TX_CLAMP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_CLAMP|G_TX_NOMIRROR, 6, G_TX_NOLOD),
	
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsSPDisplayList(angry_sun_seg8_dl_1),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPSetGeometryMode(G_LIGHTING), 
	gsSPEndDisplayList() 
};
