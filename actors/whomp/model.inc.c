// Whomp

// ???
UNUSED static const u64 whomp_unused_1 = 2;


// 0x0601C360
ALIGNED8 static const u8 whomp_seg6_texture_0601C360[] = {
#include "actors/whomp/whomp_back.rgba16.inc.c"
};

// 0x0601D360
ALIGNED8 static const u8 whomp_seg6_texture_0601D360[] = {
#include "actors/whomp/whomp_face.rgba16.inc.c"
};

// 0x0601D360
ALIGNED8 static const u8 whomp_seg6_texture_0601E360[] = {
#include "actors/whomp/whomp_hand.rgba16.inc.c"
};

// 0x0601EB60
ALIGNED8 static const u8 whomp_seg6_texture_0601EB60[] = {
#include "actors/whomp/whomp_surface.rgba16.inc.c"
};

// 0x0601F360
static const Lights1 whomp_seg6_lights_0601F360 = gdSPDefLights1(
    0x4c, 0x4c, 0x4c,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0601F378
static const Vtx whomp_seg6_vertex_0601F378[] = {
	{    -51,    596,   -196,     0,   480,  2012,     0,  126,    0,  255}, 
	{    -51,    596,    197,     0,   -24,  2012,     0,  126,    0,  255}, 
	{   1523,    586,    197,     0,   -24,     0,     0,  126,    0,  255}, 
	{   1523,    586,   -196,     0,   990,   992,   126,    0,    0,  255}, 
	{   1515,   -595,    197,     0, -1020,   -16,   126,    0,    0,  255}, 
	{   1515,   -595,   -196,     0, -1020,   992,   126,    0,    0,  255}, 
	{   1523,    586,    197,     0,   990,   -16,   126,    0,    0,  255}, 
	{    -59,   -584,   -196,     0,   958,     0,  -126,    0,    0,  255}, 
	{    -51,    596,    197,     0, -1052,   972,  -126,    0,    0,  255}, 
	{    -51,    596,   -196,     0, -1052,     0,  -126,    0,    0,  255}, 
	{    -59,   -584,    197,     0,   958,   972,  -126,    0,    0,  255}, 
	{    -59,   -584,    197,     0,   -24,  2012,     0, -126,    0,  255}, 
	{    -59,   -584,   -196,     0,   478,  2012,     0, -126,    0,  255}, 
	{   1515,   -595,   -196,     0,   478,     0,     0, -126,    0,  255}, 
	{   1515,   -595,    197,     0,   -24,     0,     0, -126,    0,  255}, 
	{   1523,    586,   -196,     0,   480,     0,     0,  126,    0,  255}, 
};

// 0x0601F478
static const Vtx whomp_seg6_vertex_0601F478[] = {
	{    -59,   -584,   -196,     0,     0,  2012,     0,    0, -127,  255}, 
	{   1523,    586,   -196,     0,   990,     0,     0,    0, -127,  255}, 
	{   1515,   -595,   -196,     0,     0,     0,     0,    0, -127,  255}, 
	{    -51,    596,   -196,     0,   990,  2012,     0,    0, -127,  255}, 
};

// 0x0601F4B8
static const Vtx whomp_seg6_vertex_0601F4B8[] = {
	{    -51,    596,    197,     0,     0,  2012,     0,    0,  127,  255}, 
	{    -59,   -584,    197,     0,   990,  2012,     0,    0,  127,  255}, 
	{   1515,   -595,    197,     0,   990,     0,     0,    0,  127,  255}, 
	{   1523,    586,    197,     0,     0,     0,     0,    0,  127,  255}, 
};

// 0x0601F4F8 - 0x0601F570
const Gfx whomp_seg6_dl_0601F4F8[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, whomp_seg6_texture_0601EB60),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&whomp_seg6_lights_0601F360.l, 1),
    gsSPLight(&whomp_seg6_lights_0601F360.a, 2),
    gsSPVertex(whomp_seg6_vertex_0601F378, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  4, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 7, 10,  8, 0x0, 11, 12, 13, 0x0),
    gsSP2Triangles(11, 13, 14, 0x0,  0,  2, 15, 0x0),
    gsSPEndDisplayList(),
};

// 0x0601F570 - 0x0601F5A8
const Gfx whomp_seg6_dl_0601F570[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, whomp_seg6_texture_0601C360),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(whomp_seg6_vertex_0601F478, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x0601F5A8 - 0x0601F5E0
const Gfx whomp_seg6_dl_0601F5A8[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, whomp_seg6_texture_0601D360),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(whomp_seg6_vertex_0601F4B8, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0601F5E0 - 0x0601F678
const Gfx whomp_seg6_dl_0601F5E0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(whomp_seg6_dl_0601F4F8),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(whomp_seg6_dl_0601F570),
    gsSPDisplayList(whomp_seg6_dl_0601F5A8),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x0601F678
static const Lights1 whomp_seg6_lights_0601F678 = gdSPDefLights1(
    0x4c, 0x4c, 0x4c,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0601F690
static const Vtx whomp_seg6_vertex_0601F690[] = {
	{    283,      0,     83,     0,   952,     0,   -16,   72,  102,  255}, 
	{     -9,     34,     13,     0,   246,  1984,   -16,   72,  102,  255}, 
	{     -9,      0,     37,     0,   672,  1984,   -16,   72,  102,  255}, 
	{    283,     78,     27,     0,   952,     0,   -16,  119,  -39,  255}, 
	{     -9,     21,    -26,     0,   246,  1984,   -16,  119,  -39,  255}, 
	{     -9,     34,     13,     0,   672,  1984,   -16,  119,  -39,  255}, 
	{    283,     48,    -64,     0,     0,     0,   -16,  119,  -39,  255}, 
	{    283,     48,    -64,     0,   952,     0,   -16,    0, -125,  255}, 
	{     -9,    -20,    -26,     0,   246,  1984,   -16,    0, -125,  255}, 
	{     -9,     21,    -26,     0,   672,  1984,   -16,    0, -125,  255}, 
	{    283,    -47,    -64,     0,     0,     0,   -16,    0, -125,  255}, 
	{    283,    -77,     27,     0,   952,     0,   -16,  -74,  101,  255}, 
	{    283,      0,     83,     0,     0,     0,   -16,  -74,  101,  255}, 
	{     -9,      0,     37,     0,   246,  1984,   -16,  -74,  101,  255}, 
	{     -9,    -33,     13,     0,   672,  1984,   -16,  -74,  101,  255}, 
};

// 0x0601F780
static const Vtx whomp_seg6_vertex_0601F780[] = {
	{    283,    -47,    -64,     0,   952,     0,   -16, -119,  -39,  255}, 
	{    283,    -77,     27,     0,     0,     0,   -16, -119,  -39,  255}, 
	{     -9,    -33,     13,     0,   246,  1984,   -16, -119,  -39,  255}, 
	{    283,      0,     83,     0,   952,     0,   -15,   73,  102,  255}, 
	{    283,     78,     27,     0,     0,     0,   -15,   73,  102,  255}, 
	{     -9,     34,     13,     0,   246,  1984,   -15,   73,  102,  255}, 
	{     -9,    -20,    -26,     0,   672,  1984,   -16, -119,  -39,  255}, 
};

// 0x0601F7F0 - 0x0601F880
const Gfx whomp_seg6_dl_0601F7F0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, whomp_seg6_texture_0601EB60),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&whomp_seg6_lights_0601F678.l, 1),
    gsSPLight(&whomp_seg6_lights_0601F678.a, 2),
    gsSPVertex(whomp_seg6_vertex_0601F690, 15, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 3, 6, 4, 0),
	gsSP1Triangle( 7, 8, 9, 0),
	gsSP1Triangle( 7,10, 8, 0),
	gsSP1Triangle(11,12,13, 0),
	gsSP1Triangle(11,13,14, 0),
    gsSPVertex(whomp_seg6_vertex_0601F780, 7, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 0, 2, 6, 0),
    gsSPEndDisplayList(),
};

// 0x0601F880 - 0x0601F8E0
const Gfx whomp_seg6_dl_0601F880[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(whomp_seg6_dl_0601F7F0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

// 0x0601F8E0
static const Lights1 whomp_seg6_lights_0601F8E0 = gdSPDefLights1(
    0x4c, 0x4c, 0x4c,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0601F8F8
static const Vtx whomp_seg6_vertex_0601F8F8[] = {
	{    283,      0,     83,     0,   952,     0,   -16,   72,  102,  255}, 
	{     -9,     34,     13,     0,   246,  1984,   -16,   72,  102,  255}, 
	{     -9,      0,     37,     0,   672,  1984,   -16,   72,  102,  255}, 
	{    283,     78,     27,     0,   952,     0,   -16,  119,  -39,  255}, 
	{     -9,     21,    -26,     0,   246,  1984,   -16,  119,  -39,  255}, 
	{     -9,     34,     13,     0,   672,  1984,   -16,  119,  -39,  255}, 
	{    283,     48,    -64,     0,     0,     0,   -16,  119,  -39,  255}, 
	{    283,     48,    -64,     0,   952,     0,   -16,    0, -125,  255}, 
	{     -9,    -20,    -26,     0,   246,  1984,   -16,    0, -125,  255}, 
	{     -9,     21,    -26,     0,   672,  1984,   -16,    0, -125,  255}, 
	{    283,    -47,    -64,     0,     0,     0,   -16,    0, -125,  255}, 
	{    283,    -77,     27,     0,   952,     0,   -16,  -74,  101,  255}, 
	{    283,      0,     83,     0,     0,     0,   -16,  -74,  101,  255}, 
	{     -9,      0,     37,     0,   246,  1984,   -16,  -74,  101,  255}, 
	{     -9,    -33,     13,     0,   672,  1984,   -16,  -74,  101,  255}, 
};

// 0x0601F9E8
static const Vtx whomp_seg6_vertex_0601F9E8[] = {
	{    283,    -47,    -64,     0,   952,     0,   -16, -119,  -39,  255}, 
	{    283,    -77,     27,     0,     0,     0,   -16, -119,  -39,  255}, 
	{     -9,    -33,     13,     0,   246,  1984,   -16, -119,  -39,  255}, 
	{    283,      0,     83,     0,   952,     0,   -15,   73,  102,  255}, 
	{    283,     78,     27,     0,     0,     0,   -15,   73,  102,  255}, 
	{     -9,     34,     13,     0,   246,  1984,   -15,   73,  102,  255}, 
	{     -9,    -20,    -26,     0,   672,  1984,   -16, -119,  -39,  255}, 
};

// 0x0601FA58 - 0x0601FAE8
const Gfx whomp_seg6_dl_0601FA58[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, whomp_seg6_texture_0601EB60),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&whomp_seg6_lights_0601F8E0.l, 1),
    gsSPLight(&whomp_seg6_lights_0601F8E0.a, 2),
    gsSPVertex(whomp_seg6_vertex_0601F8F8, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  4, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 7, 10,  8, 0x0, 11, 12, 13, 0x0),
    gsSP1Triangle(11, 13, 14, 0x0),
    gsSPVertex(whomp_seg6_vertex_0601F9E8, 7, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP1Triangle( 0,  2,  6, 0x0),
    gsSPEndDisplayList(),
};

// 0x0601FAE8 - 0x0601FB48
const Gfx whomp_seg6_dl_0601FAE8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(whomp_seg6_dl_0601FA58),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

// 0x0601FB48
static const  Vtx whomp_seg6_vertex_0601FB48[] = {
	{   -148/4,   -148/4,      0,     0,     0,   990,     0,    0,  127,  255}, 
	{    149/4,   -148/4,      0,     0,   990,   990,     0,    0,  127,  255}, 
	{    149/4,    149/4,      0,     0,   990,     0,     0,    0,  127,  255}, 
	{   -148/4,    149/4,      0,     0,     0,     0,     0,    0,  127,  255}, 
};


// 0x0601FB88 - 0x0601FBC0
const Gfx whomp_seg6_dl_0601FB88[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, whomp_seg6_texture_0601E360),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(whomp_seg6_vertex_0601FB48, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0601FBC0 - 0x0601FC30
const Gfx whomp_seg6_dl_0601FBC0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(whomp_seg6_dl_0601FB88),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x0601FC30
static const Vtx whomp_seg6_vertex_0601FC30[] = {
	{   -148/4,   -148/4,      0,     0,     0,   990,     0,    0,  127,  255}, 
	{    149/4,   -148/4,      0,     0,   990,   990,     0,    0,  127,  255}, 
	{    149/4,    149/4,      0,     0,   990,     0,     0,    0,  127,  255}, 
	{   -148/4,    149/4,      0,     0,     0,     0,     0,    0,  127,  255}, 
};

// 0x0601FC70 - 0x0601FCA8
const Gfx whomp_seg6_dl_0601FC70[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, whomp_seg6_texture_0601E360),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(whomp_seg6_vertex_0601FC30, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0601FCA8 - 0x0601FD18
const Gfx whomp_seg6_dl_0601FCA8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(whomp_seg6_dl_0601FC70),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x0601FD18
static const Lights1 whomp_seg6_lights_0601FD18 = gdSPDefLights1(
    0x4c, 0x4c, 0x4c,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0601FD30
static const Vtx whomp_seg6_vertex_0601FD30[] = {
	{    170,    179,    173,     0,  1364,   260,   -63,  101,   41,  255}, 
	{    175,    251,      2,     0,   490,   -36,   -63,  101,   41,  255}, 
	{     22,    155,      2,     0,   490,   356,   -63,  101,   41,  255}, 
	{     22,    155,      2,     0,   490,   356,   -96,   19,   80,  255}, 
	{    -28,    -87,      2,     0,   490,  1348,   -96,   19,   80,  255}, 
	{    170,    179,    173,     0,  1364,   260,   -96,   19,   80,  255}, 
	{     22,    155,      2,     0,   490,   356,   -63,  101,  -42,  255}, 
	{    175,    251,      2,     0,   490,   -36,   -63,  101,  -42,  255}, 
	{    173,    178,   -167,     0,  -376,   264,   -63,  101,  -42,  255}, 
	{    173,    178,   -167,     0,  -376,   264,   -94,   19,  -82,  255}, 
	{    -28,    -87,      2,     0,   490,  1348,   -94,   19,  -82,  255}, 
	{     22,    155,      2,     0,   490,   356,   -94,   19,  -82,  255}, 
	{    150,   -254,      3,     0,   492,  2028,   -79,  -84,   51,  255}, 
	{    155,   -140,    196,     0,  1482,  1568,   -79,  -84,   51,  255}, 
	{    -28,    -87,      2,     0,   490,  1348,   -79,  -84,   51,  255}, 
};

static const Vtx whomp_seg6_vertex_0601FD31[] = {
	{    -28,    -87,      2,     0,   490,  1348,   -90,   10,   88,  255}, 
	{    155,   -140,    196,     0,  1482,  1568,   -90,   10,   88,  255}, 
	{    170,    179,    173,     0,  1364,   260,   -90,   10,   88,  255}, 
	{    -28,    -87,      2,     0,   490,  1348,   -79,  -85,  -50,  255}, 
	{    157,   -148,   -185,     0,  -470,  1600,   -79,  -85,  -50,  255}, 
	{    150,   -254,      3,     0,   492,  2028,   -79,  -85,  -50,  255}, 
	{    173,    178,   -167,     0,  -376,   264,   -88,    9,  -90,  255}, 
	{    157,   -148,   -185,     0,  -470,  1600,   -88,    9,  -90,  255}, 
	{    -28,    -87,      2,     0,   490,  1348,   -88,    9,  -90,  255}, 
	{    157,   -148,   -185,     0,    -2,  1580,   126,   -5,    0,  255}, 
	{    170,    179,    173,     0,   916,   240,   126,   -5,    0,  255}, 
	{    155,   -140,    196,     0,   974,  1544,   126,   -5,    0,  255}, 
	{    157,   -148,   -185,     0,    -2,  1580,   126,   -6,    1,  255}, 
	{    175,    251,      2,     0,   478,   -60,   126,   -6,    1,  255}, 
	{    170,    179,    173,     0,   916,   240,   126,   -6,    1,  255}, 
	{    173,    178,   -167,     0,    44,   240,   126,   -6,    1,  255}, 
};	

static const Vtx whomp_seg6_vertex_0601FD32[] = {
		{    157,   -148,   -185,     0,    -2,  1580,   126,   -6,    0,  255}, 
	{    155,   -140,    196,     0,   974,  1544,   126,   -6,    0,  255}, 
	{    150,   -254,      3,     0,   480,  2012,   126,   -6,    0,  255}, 
};
// 0x0601FE10 - 0x0601FEA8
const Gfx whomp_seg6_dl_0601FE10[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, whomp_seg6_texture_0601EB60),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&whomp_seg6_lights_0601FD18.l, 1),
    gsSPLight(&whomp_seg6_lights_0601FD18.a, 2),
    gsSPVertex(whomp_seg6_vertex_0601FD30, 15, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSPVertex(whomp_seg6_vertex_0601FD31, 16, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSP1Triangle(12,15,13, 0),
	gsSPVertex(whomp_seg6_vertex_0601FD32, 3, 0),
		gsSP1Triangle( 0, 1, 2, 0),
    gsSPEndDisplayList(),
};

// 0x0601FEA8 - 0x0601FF08
const Gfx whomp_seg6_dl_0601FEA8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64- 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(whomp_seg6_dl_0601FE10),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

// 0x0601FF08
static const Lights1 whomp_seg6_lights_0601FF08 = gdSPDefLights1(
    0x4c, 0x4c, 0x4c,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0601FF20
static const Vtx whomp_seg6_vertex_0601FF20[] = {
	{    150,   -254,     -2,     0,   470,  2028,   126,   -6,   -1,  255}, 
	{    170,    179,   -172,     0,  -110,   260,   126,   -6,   -1,  255}, 
	{    175,    251,     -1,     0,   472,   -36,   126,   -6,   -1,  255}, 
	{    150,   -254,     -2,     0,   470,  2028,   126,   -5,    0,  255}, 
	{    155,   -140,   -195,     0,  -188,  1568,   126,   -5,    0,  255}, 
	{    170,    179,   -172,     0,  -110,   260,   126,   -5,    0,  255}, 
	{     22,    155,     -1,     0,   472,   356,   -63,  101,  -41,  255}, 
	{    175,    251,     -1,     0,   472,   -36,   -63,  101,  -41,  255}, 
	{    170,    179,   -172,     0,  -110,   260,   -63,  101,  -41,  255}, 
	{    170,    179,   -172,     0,  -110,   260,   -96,   19,  -80,  255}, 
	{    -28,    -87,     -1,     0,   472,  1348,   -96,   19,  -80,  255}, 
	{     22,    155,     -1,     0,   472,   356,   -96,   19,  -80,  255}, 
	{    170,    179,   -172,     0,  -110,   260,   -90,   10,  -88,  255}, 
	{    155,   -140,   -195,     0,  -188,  1568,   -90,   10,  -88,  255}, 
	{    -28,    -87,     -1,     0,   472,  1348,   -90,   10,  -88,  255}, 
};

static const Vtx whomp_seg6_vertex_0601FF21[] = {
		{    -28,    -87,     -1,     0,   472,  1348,   -79,  -84,  -51,  255}, 
	{    155,   -140,   -195,     0,  -188,  1568,   -79,  -84,  -51,  255}, 
	{    150,   -254,     -2,     0,   470,  2028,   -79,  -84,  -51,  255}, 
	{     22,    155,     -1,     0,   472,   356,   -94,   19,   82,  255}, 
	{    -28,    -87,     -1,     0,   472,  1348,   -94,   19,   82,  255}, 
	{    173,    178,    168,     0,  1050,   264,   -94,   19,   82,  255}, 
	{    150,   -254,     -2,     0,   470,  2028,   -79,  -85,   50,  255}, 
	{    157,   -148,    186,     0,  1112,  1600,   -79,  -85,   50,  255}, 
	{    -28,    -87,     -1,     0,   472,  1348,   -79,  -85,   50,  255}, 
	{    -28,    -87,     -1,     0,   472,  1348,   -88,    9,   90,  255}, 
	{    157,   -148,    186,     0,  1112,  1600,   -88,    9,   90,  255}, 
	{    173,    178,    168,     0,  1050,   264,   -88,    9,   90,  255}, 
	{    173,    178,    168,     0,  1050,   264,   -63,  101,   42,  255}, 
	{    175,    251,     -1,     0,   472,   -36,   -63,  101,   42,  255}, 
	{     22,    155,     -1,     0,   472,   356,   -63,  101,   42,  255}, 
};

static const Vtx whomp_seg6_vertex_0601FF22[] = {
		{    150,   -254,     -2,     0,   470,  2028,   126,   -6,   -1,  255}, 
	{    175,    251,     -1,     0,   472,   -36,   126,   -6,   -1,  255}, 
	{    173,    178,    168,     0,  1050,   264,   126,   -6,   -1,  255}, 
	{    157,   -148,    186,     0,  1112,  1600,   126,   -6,   -1,  255}, 
};

// 0x0601FFA0 - 0x06020038
const Gfx whomp_seg6_dl_0601FFA0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, whomp_seg6_texture_0601EB60),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&whomp_seg6_lights_0601FF08.l, 1),
    gsSPLight(&whomp_seg6_lights_0601FF08.a, 2),
    gsSPVertex(whomp_seg6_vertex_0601FF20, 15, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSPVertex(whomp_seg6_vertex_0601FF21, 15, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSPVertex(whomp_seg6_vertex_0601FF22, 4, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

// 0x06020038 - 0x06020098
const Gfx whomp_seg6_dl_06020038[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(whomp_seg6_dl_0601FFA0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};
