static const Lights1 dice_seg8_lights_08012E10 = gdSPDefLights1(
    0x3f, 0x3f, 0x3f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

ALIGNED8 static const u8 dice_seg8_texture_08017628[] = {
#include "actors/dice/dice_box_side1.rgba16.inc.c"
};
ALIGNED8 static const u8 dice_seg8_texture_08017629[] = {
#include "actors/dice/dice_box_side2.rgba16.inc.c"
};
ALIGNED8 static const u8 dice_seg8_texture_0801762A[] = {
#include "actors/dice/dice_box_side3.rgba16.inc.c"
};
ALIGNED8 static const u8 dice_seg8_texture_0801762B[] = {
#include "actors/dice/dice_box_side4.rgba16.inc.c"
};
ALIGNED8 static const u8 dice_seg8_texture_0801762C[] = {
#include "actors/dice/dice_box_side5.rgba16.inc.c"
};
ALIGNED8 static const u8 dice_seg8_texture_0801762D[] = {
#include "actors/dice/dice_box_side6.rgba16.inc.c"
};
// 0x08018E28
static const Vtx dice_seg8_vertex_08018E28[] = {
    {{{   -25,      -25,    -25}, 0, {   1007,    1007}, {0x00, 0x00, 0x81, 0xff}}},	//0
    {{{   -25,     25,    -25}, 0, {   1007,      0}, {0x00, 0x00, 0x81, 0xff}}},	//1
    {{{    25,     25,    -25}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},	//2
    {{{    25,      -25,    -25}, 0, {     0,    1007}, {0x00, 0x00, 0x81, 0xff}}},	//3
    {{{   -25,      -25,     25}, 0, {     0,    1007}, {0x00, 0x00, 0x7f, 0xff}}},	//4
    {{{    25,      -25,     25}, 0, {   1007,    1007}, {0x00, 0x00, 0x7f, 0xff}}},	//5
    {{{    25,     25,     25}, 0, {   1007,      0}, {0x00, 0x00, 0x7f, 0xff}}},	//6
    {{{   -25,     25,     25}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},	//7
    {{{    25,     25,    -25}, 0, {   1007,      0}, {0x7f, 0x00, 0x00, 0xff}}},	//8
    {{{    25,      -25,    -25}, 0, {   1007,    1007}, {0x7f, 0x00, 0x00, 0xff}}},	//9
	{{{    25,      -25,     25}, 0, {     0,    1007}, {0x7f, 0x00, 0x00, 0xff}}},	//10
    {{{    25,     25,     25}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},	//11
    {{{   -25,      -25,    -25}, 0, {     0,    1007}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   -25,      -25,     25}, 0, {   1007,    1007}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   -25,     25,     25}, 0, {   1007,      0}, {0x81, 0x00, 0x00, 0xff}}},
    {{{   -25,     25,    -25}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0xff}}},
};

// 0x08018F28
static const Vtx dice_seg8_vertex_08018F28[] = {
    {{{    25,      -25,    -25}, 0, {   1007,   1007}, {0x00, 0x81, 0x00, 0xff}}},
    {{{    25,      -25,     25}, 0, {   1007,      0}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   -25,      -25,     25}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   -25,      -25,    -25}, 0, {     0,   1007}, {0x00, 0x81, 0x00, 0xff}}},
    {{{   -25,     25,   -25}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   -25,     25,     25}, 0, {     0,   1007}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    25,     25,     25}, 0, {   1007,   1007}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    25,     25,    -25}, 0, {   1007,      0}, {0x00, 0x7f, 0x00, 0xff}}},
};

// 0x08018FA8 - 0x08019008
const Gfx dice_seg8_dl_08018FA8[] = {
    gsSPLight(&dice_seg8_lights_08012E10.l, 1),
    gsSPLight(&dice_seg8_lights_08012E10.a, 2),
    gsSPVertex(dice_seg8_vertex_08018E28, 16, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 2, 3, 0, 0),
    gsSPEndDisplayList(),
};
// 0x08018FA8 - 0x08019008
const Gfx dice_seg8_dl_08018FA9[] = {
    gsSPLight(&dice_seg8_lights_08012E10.l, 1),
    gsSPLight(&dice_seg8_lights_08012E10.a, 2),
    gsSPVertex(dice_seg8_vertex_08018E28, 16, 0),
	gsSP1Triangle( 4, 5, 6, 0),
	gsSP1Triangle( 6, 7, 4, 0),
    gsSPEndDisplayList(),
};
// 0x08018FA8 - 0x08019008
const Gfx dice_seg8_dl_08018FAA[] = {
    gsSPLight(&dice_seg8_lights_08012E10.l, 1),
    gsSPLight(&dice_seg8_lights_08012E10.a, 2),
    gsSPVertex(dice_seg8_vertex_08018E28, 16, 0),
	gsSP1Triangle( 8, 11,10, 0),
	gsSP1Triangle(10,9,8, 0),
    gsSPEndDisplayList(),
};
// 0x08018FA8 - 0x08019008
const Gfx dice_seg8_dl_08018FAB[] = {
    gsSPLight(&dice_seg8_lights_08012E10.l, 1),
    gsSPLight(&dice_seg8_lights_08012E10.a, 2) ,
    gsSPVertex(dice_seg8_vertex_08018E28, 16, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSP1Triangle( 14, 15,12, 0),
    gsSPEndDisplayList(),
};
// 0x08019008 - 0x08019058
const Gfx dice_seg8_dl_08019008[] = {
    gsSPLight(&dice_seg8_lights_08012E10.l, 1),
    gsSPLight(&dice_seg8_lights_08012E10.a, 2) ,
    gsSPVertex(dice_seg8_vertex_08018F28, 8, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
// 0x08019008 - 0x08019058
const Gfx dice_seg8_dl_08019009[] = {
    gsSPLight(&dice_seg8_lights_08012E10.l, 1),
    gsSPLight(&dice_seg8_lights_08012E10.a, 2) ,
    gsSPVertex(dice_seg8_vertex_08018F28, 8, 0),
	gsSP1Triangle( 4, 5, 6, 0),
	gsSP1Triangle( 4, 6, 7, 0),
    gsSPEndDisplayList(),
};


// 0x08019058 - 0x080190A0
const Gfx dice_seg8_dl_08019058[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPEndDisplayList(),
};

// 0x08019318 - 0x08019378
const Gfx dice_seg8_dl_08019318[] = {
    gsDPPipeSync(),	
    gsSPDisplayList(dice_seg8_dl_08019058),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dice_seg8_texture_0801762A),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(dice_seg8_dl_08018FA8),
    gsDPTileSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dice_seg8_texture_0801762B),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(dice_seg8_dl_08018FA9),
    gsDPTileSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dice_seg8_texture_0801762C),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(dice_seg8_dl_08018FAA),
    gsDPTileSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dice_seg8_texture_08017629),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(dice_seg8_dl_08018FAB),
    gsDPTileSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dice_seg8_texture_08017628),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(dice_seg8_dl_08019008),
    gsDPTileSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dice_seg8_texture_0801762D),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(dice_seg8_dl_08019009),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};
