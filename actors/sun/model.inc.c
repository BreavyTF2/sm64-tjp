//Angry Sun
ALIGNED8 static const u8 sun_angry_sun_neutral_0[] = {
#include "actors/sun/angry_sun_neutral_0.rgba16.inc.c"
};
ALIGNED8 static const u8 sun_angry_sun_neutral_1[] = {
#include "actors/sun/angry_sun_neutral_1.rgba16.inc.c"
};
ALIGNED8 static const u8 sun_angry_sun_neutral_2[] = {
#include "actors/sun/angry_sun_neutral_2.rgba16.inc.c"
};
ALIGNED8 static const u8 sun_angry_sun_neutral_3[] = {
#include "actors/sun/angry_sun_neutral_3.rgba16.inc.c"
};
ALIGNED8 static const u8 sun_angry_sun_angry_0[] = {
#include "actors/sun/angry_sun_angry_0.rgba16.inc.c"
};
ALIGNED8 static const u8 sun_angry_sun_angry_1[] = {
#include "actors/sun/angry_sun_angry_1.rgba16.inc.c"
};
ALIGNED8 static const u8 sun_angry_sun_angry_2[] = {
#include "actors/sun/angry_sun_angry_2.rgba16.inc.c"
};
ALIGNED8 static const u8 sun_angry_sun_angry_3[] = {
#include "actors/sun/angry_sun_angry_3.rgba16.inc.c"
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

// 0x08022D08 - 0x08022D78
const Gfx angry_sun_seg8_dl_0[] = {
	gsDPLoadSync(),
	gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
	gsSPClearGeometryMode(G_LIGHTING), 
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(angry_sun_seg5_vertex, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPSetGeometryMode(G_LIGHTING), 
	gsSPEndDisplayList(),
};

// 0x08022D08 - 0x08022D78
const Gfx angry_sun_seg8_dl_1[] = {
	gsDPLoadSync(),
	gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
	gsSPClearGeometryMode(G_LIGHTING), 
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(angry_sun1_seg5_vertex, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPSetGeometryMode(G_LIGHTING), 
	gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_0[] = {
	gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_0),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_0),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_1[] = {
	gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_1),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_1),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_2[] = {
	gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_2),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_2),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_3[] = {
	gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_3),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_3),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_angry_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_0),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_0),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_angry_1[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_1),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_1),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_angry_2[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_2),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_2),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_angry_3[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_3),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_3),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_angry_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_0),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_0),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_angry_1[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_1),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_1),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_angry_2[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_2),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_2),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_angry_3[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_3),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_3),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_angry_4[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_0),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_0),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_angry_5[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_1),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_1),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_angry_6[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_2),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_2),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

const Gfx angry_sun_seg8_dl_netural_angry_7[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_neutral_3),
    gsSPDisplayList(angry_sun_seg8_dl_0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sun_angry_sun_angry_3),
    gsSPDisplayList(angry_sun_seg8_dl_1),
    gsSPEndDisplayList(),
};

