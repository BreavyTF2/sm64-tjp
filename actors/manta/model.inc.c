// Manta Ray

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"

#define ShapeColor_manta_Lwing2(R,G,B) {{R*0.25 ,G*0.25 ,B*0.25 ,0 ,R*0.25 ,G*0.25 ,B*0.25 ,0 },{ R, G, B, 0, R, G, B, 0, 40, 40, 40, 0} }

static Lights1 light_manta_Lwing2[] = {
	ShapeColor_manta_Lwing2(255,255,255),
	ShapeColor_manta_Lwing2(198,238,237),
};

// 0x05001758
static const Lights1 manta_seg5_lights_05001758 = gdSPDefLights1(
    0x2f, 0x3f, 0x30,
    0xbc, 0xff, 0xc2, 0x28, 0x28, 0x28
);

// 0x05001770
static const Lights1 manta_seg5_lights_05001770 = gdSPDefLights1(
    0x00, 0x19, 0x17,
    0x00, 0x67, 0x5c, 0x28, 0x28, 0x28
);

// Unreferenced light group
static const Lights1 manta_lights_unused = gdSPDefLights1(
    0x3f, 0x3f, 0x3f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x050017A0
ALIGNED8 static const u8 manta_seg5_texture_050017A0[] = {
#include "actors/manta/manta_fin_corner.rgba16.inc.c"
};

// 0x05001FA0
ALIGNED8 static const u8 manta_seg5_texture_05001FA0[] = {
#include "actors/manta/manta_gills.rgba16.inc.c"
};

// 0x05002FA0
ALIGNED8 static const u8 manta_seg5_texture_05002FA0[] = {
#include "actors/manta/manta_eye.rgba16.inc.c"
};

// 0x050037A0
ALIGNED8 static const u8 manta_seg5_texture_050037A0[] = {
#include "actors/manta/manta_fin_edge.rgba16.inc.c"
};

// 0x050047A0
static const Vtx manta_seg5_vertex_050047A0[] = {
    {{{    60,    -41,     -9}, 0, {   112,    436}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,      3,    -29}, 0, {   718,    778}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    60,      2,      2}, 0, {   836,    436}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    27,    -25,    -55}, 0, {   224,   1082}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,    -26,    -37}, 0, {   274,    802}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,    -59,    -29}, 0, {  -108,   1004}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    27,     15,    -44}, 0, {   766,   1082}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,      3,    -29}, 0, {   670,    802}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,     30,      3}, 0, {  1114,    962}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,    -26,    -37}, 0, {   208,    756}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    60,    -41,     -9}, 0, {    96,    416}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,    -59,    -29}, 0, {  -270,    708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,    -26,    -37}, 0, {   224,    778}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    60,      2,      2}, 0, {   868,    416}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,      3,    -29}, 0, {   750,    756}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,     30,      3}, 0, {  1304,    626}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x050048A0
static const Vtx manta_seg5_vertex_050048A0[] = {
    {{{   -23,    -42,      8}, 0, {   394,     38}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -48,    -24,    -36}, 0, {   286,    704}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,    -59,    -29}, 0, {   554,    584}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    27,    -25,    -55}, 0, {   622,    960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -60,     27,    -28}, 0, {   232,    594}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -26,      9,     23}, 0, {   380,   -172}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    27,     15,    -44}, 0, {   622,    794}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    60,    -41,     -9}, 0, {   770,    280}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    33,    -47,     23}, 0, {   648,   -192}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,     30,      3}, 0, {   554,     98}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    33,     -6,     34}, 0, {   648,   -358}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    60,      2,      2}, 0, {   770,    102}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x05004960 - 0x050049C8
const Gfx manta_seg5_dl_05004960[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_05002FA0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_050047A0, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 4,  3,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 7,  6,  8, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles( 0, 12,  1, 0x0, 13, 14, 15, 0x0),
    gsSPEndDisplayList(),
};

// 0x050049C8 - 0x05004A70
const Gfx manta_seg5_dl_050049C8[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050017A0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_050048A0, 12, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  4, 0x0),
    gsSP2Triangles( 1,  0,  5, 0x0,  1,  3,  2, 0x0),
    gsSP2Triangles( 1,  5,  4, 0x0,  3,  4,  6, 0x0),
    gsSP2Triangles( 7,  8,  2, 0x0,  8,  0,  2, 0x0),
    gsSP2Triangles( 6,  4,  9, 0x0,  4,  5,  9, 0x0),
    gsSP2Triangles( 5, 10,  9, 0x0, 10, 11,  9, 0x0),
    gsSP2Triangles( 0, 10,  5, 0x0,  0,  8, 10, 0x0),
    gsSP2Triangles( 8,  7, 11, 0x0,  8, 11, 10, 0x0),
    gsSPEndDisplayList(),
};

// 0x05004A70 - 0x05004AE8
const Gfx manta_seg5_dl_05004A70[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGB, G_CC_DECALRGB),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05004960),
    gsSPDisplayList(manta_seg5_dl_050049C8),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x05004AE8
static const Vtx manta_seg5_vertex_05004AE8[] = {
    {{{    60,     -1,      2}, 0, {   836,    436}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,     -2,    -29}, 0, {   718,    778}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    60,     42,     -9}, 0, {   112,    436}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,     60,    -29}, 0, {  -108,   1004}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,     27,    -37}, 0, {   274,    802}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    27,     26,    -55}, 0, {   224,   1082}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    27,    -14,    -44}, 0, {   766,   1082}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,     -2,    -29}, 0, {   670,    802}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,    -29,      3}, 0, {  1114,    962}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,     60,    -29}, 0, {  -270,    708}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    60,     42,     -9}, 0, {    96,    416}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,     27,    -37}, 0, {   208,    756}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,     27,    -37}, 0, {   224,    778}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,    -29,      3}, 0, {  1304,    626}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    51,     -2,    -29}, 0, {   750,    756}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    60,     -1,      2}, 0, {   868,    416}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x05004BE8
static const Vtx manta_seg5_vertex_05004BE8[] = {
    {{{    12,     60,    -29}, 0, {   554,    584}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    33,     48,     23}, 0, {   648,   -192}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    60,     42,     -9}, 0, {   770,    280}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -23,     43,      8}, 0, {   394,     38}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -48,     25,    -36}, 0, {   286,    704}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    27,     26,    -55}, 0, {   622,    960}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    27,    -14,    -44}, 0, {   622,    794}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -60,    -26,    -28}, 0, {   232,    594}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -26,     -8,     23}, 0, {   380,   -172}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    12,    -29,      3}, 0, {   554,     98}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    33,      7,     34}, 0, {   648,   -358}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    60,     -1,      2}, 0, {   770,    102}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x05004CA8 - 0x05004D10
const Gfx manta_seg5_dl_05004CA8[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_05002FA0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_05004AE8, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  5,  4, 0x0,  7,  6,  4, 0x0),
    gsSP2Triangles( 8,  6,  7, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles( 1, 12,  2, 0x0, 13, 14, 15, 0x0),
    gsSPEndDisplayList(),
};

// 0x05004D10 - 0x05004DB8
const Gfx manta_seg5_dl_05004D10[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050017A0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_05004BE8, 12, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 0,  4,  3, 0x0,  0,  5,  4, 0x0),
    gsSP2Triangles( 6,  7,  5, 0x0,  7,  4,  5, 0x0),
    gsSP2Triangles( 8,  3,  4, 0x0,  7,  8,  4, 0x0),
    gsSP2Triangles( 9,  7,  6, 0x0,  9,  8,  7, 0x0),
    gsSP2Triangles( 9, 10,  8, 0x0,  9, 11, 10, 0x0),
    gsSP2Triangles( 8, 10,  3, 0x0, 10,  1,  3, 0x0),
    gsSP2Triangles(11,  2,  1, 0x0, 10, 11,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x05004DB8 - 0x05004E30
const Gfx manta_seg5_dl_05004DB8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGB, G_CC_DECALRGB),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05004CA8),
    gsSPDisplayList(manta_seg5_dl_05004D10),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x05004E30
static const Vtx manta_seg5_vertex_05004E30[] = {
    {{{    97,      0,     52}, 0, {   412,    534}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   135,      0,      0}, 0, {   432,    770}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   274,      0,      0}, 0, {  1244,    550}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x05004E60 - 0x05004E90
const Gfx manta_seg5_dl_05004E60[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050037A0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_05004E30, 3, 0),
    gsSP1Triangle( 0,  1,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x05004E90 - 0x05004F00
const Gfx manta_seg5_dl_05004E90[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05004E60),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};

// 0x05004F00
static const Vtx manta_seg5_vertex_05004F00[] = {
	{    172,    -21,     42,     0,   862,  -544,    20,  -13,  124,  255}, 
	{    184,    -11,      8,     0,   918,   -60,    68,  -32, -102,  255}, 
	{    102,     18,      2,     0,   544,   108,    26,  124,    3,  255}, 
	{     92,    -11,      2,     0,   500,   116,     9, -126,   -8,  255}, 
	{     92,     -1,    -23,     0,   500,   496,    34,  -15, -121,  255}, 
	{    102,     -1,     32,     0,   544,  -330,    11,   -6,  126,  255}, 
	{    -15,    -31,     32,     0,     8,  -216,    23, -105,   67,  255}, 
	{    -15,    -31,    -31,     0,     8,   718,    28, -100,  -72,  255}, 
	{    -15,     18,     32,     0,     8,  -216,     7,   97,   81,  255}, 
	{    -15,     18,    -31,     0,     8,   718,    13,   92,  -86,  255}, 
};

// 0x05004FA0 - 0x05005038
const Gfx manta_seg5_dl_05004FA0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050017A0),
    gsDPLoadSync(),
	gsSPLight((&light_manta_Lwing2[0].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[0].a   ),2 ),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_05004F00, 10, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  1, 0x0),
    gsSP2Triangles( 1,  0,  3, 0x0,  2,  1,  4, 0x0),
    gsSP2Triangles( 3,  0,  5, 0x0,  2,  5,  0, 0x0),
    gsSP2Triangles( 6,  3,  5, 0x0,  7,  4,  3, 0x0),
    gsSP2Triangles( 3,  6,  7, 0x0,  8,  5,  2, 0x0),
    gsSP2Triangles( 5,  8,  6, 0x0,  9,  2,  4, 0x0),
    gsSP2Triangles( 4,  7,  9, 0x0,  2,  9,  8, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005038 - 0x050050A8
const Gfx manta_seg5_dl_05005038[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05004FA0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

// 0x050050A8
static const Vtx manta_seg5_vertex_050050A8[] = {
	{    -89,    -89,      0,     0,   376,   742,  -104,  -59,  -40,  255}, 
	{      0,   -119,    -39,     0,     0,   626,   -15,  -50, -115,  255}, 
	{      0,   -159,      0,     0,     0,    40,   -23, -117,   41,  255}, 
	{      0,   -119,    -39,     0,   990,   626,   -15,  -50, -115,  255}, 
	{    220,    -89,    -19,     0,   780,   948,    48,  -18, -115,  255}, 
	{    220,   -123,      0,     0,   780,   656,    78,  -95,  -30,  255}, 
	{      0,   -159,      0,     0,   990,    40,   -23, -117,   41,  255}, 
};

// 0x05005118
static const Vtx manta_seg5_vertex_05005118[] = {
	{    220,    -89,     20,     0,   812,   282,    41,  -30,  116,  255}, 
	{    220,   -123,      0,     0,   812,   242,    78,  -95,  -30,  255}, 
	{    244,    -63,      0,     0,   840,   314,   124,  -23,   -1,  255}, 
	{      0,   -119,     30,     0,   552,   248,   -24,  -31,  120,  255}, 
	{      0,   -159,      0,     0,   552,   200,   -23, -117,   41,  255}, 
	{    -89,    -89,      0,     0,   448,   282,  -104,  -59,  -40,  255}, 
	{    -89,    140,      0,     0,   448,   556,  -109,   20,   59,  255}, 
	{      0,    180,     30,     0,   552,   604,   -11,   10,  126,  255}, 
	{      0,    350,      0,     0,   552,   806,   -81,   97,    8,  255}, 
	{    220,    228,      0,     0,   812,   660,   119,   43,    0,  255}, 
};

// 0x050051B8
static const Vtx manta_seg5_vertex_050051B8[] = {
	{    244,    -63,      0,     0,     0,     0,   124,  -23,   -1,  255}, 
	{    220,   -123,      0,     0,     0,     0,    78,  -95,  -30,  255}, 
	{    220,    -89,    -19,     0,     0,     0,    48,  -18, -115,  255}, 
	{      0,   -119,    -39,     0,     0,     0,   -15,  -50, -115,  255}, 
	{      0,    180,    -39,     0,     0,     0,   -19,   10, -124,  255}, 
	{    220,    228,      0,     0,     0,     0,   119,   43,    0,  255}, 
	{    -89,    -89,      0,     0,     0,     0,  -104,  -59,  -40,  255}, 
	{    -89,    140,      0,     0,     0,     0,  -109,   20,   59,  255}, 
	{      0,    350,      0,     0,     0,     0,   -81,   97,    8,  255}, 
};

// 0x05005248 - 0x05005288
const Gfx manta_seg5_dl_05005248[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050017A0),
    gsDPLoadSync(),
	gsSPLight((&light_manta_Lwing2[0].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[0].a   ),2 ),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_050050A8, 7, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP1Triangle( 6,  3,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005288 - 0x05005308
const Gfx manta_seg5_dl_05005288[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050037A0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_05005118, 10, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  4, 0x0),
    gsSP2Triangles( 1,  0,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 5,  3,  6, 0x0,  3,  7,  6, 0x0),
    gsSP2Triangles( 7,  3,  0, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 9,  8,  7, 0x0,  0,  9,  7, 0x0),
    gsSP1Triangle( 2,  9,  0, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005308 - 0x05005358
const Gfx manta_seg5_dl_05005308[] = {
	gsSPLight((&light_manta_Lwing2[1].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[1].a   ),2 ),
    gsSPVertex(manta_seg5_vertex_050051B8, 9, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  4, 0x0),
    gsSP2Triangles( 0,  2,  5, 0x0,  2,  4,  5, 0x0),
    gsSP2Triangles( 4,  3,  6, 0x0,  7,  4,  6, 0x0),
    gsSP2Triangles( 8,  4,  7, 0x0,  5,  4,  8, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005358 - 0x050053F0
const Gfx manta_seg5_dl_05005358[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),

    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05005248),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05005288),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(manta_seg5_dl_05005308),
    gsSPEndDisplayList(),
};

// 0x050053F0
static const Vtx manta_seg5_vertex_050053F0[] = {
	{      0,    -89,     20,     0,   804,   290,   -30,  -19,  121,  255}, 
	{      0,    228,      0,     0,   804,   668,  -123,   30,   -1,  255}, 
	{    -31,    -63,      0,     0,   764,   320,  -123,  -31,   -1,  255}, 
	{      0,   -123,      0,     0,   804,   248,   -61, -103,   41,  255}, 
	{    180,    -91,     10,     0,  1016,   286,    56,  -31,  109,  255}, 
	{    180,   -111,      0,     0,  1016,   264,    90,  -78,  -42,  255}, 
	{    180,    120,      0,     0,  1016,   538,   125,   17,   -2,  255}, 
	{    186,    -79,      0,     0,  1024,   302,   126,  -10,   -2,  255}, 
};

// 0x05005470
static const Vtx manta_seg5_vertex_05005470[] = {
	{      0,    -89,    -19,     0,     0,     0,   -23,  -25, -122,  255}, 
	{    180,    120,      0,     0,     0,     0,   125,   17,   -2,  255}, 
	{    180,    -91,     -9,     0,     0,     0,    67,  -18, -105,  255}, 
	{      0,   -123,      0,     0,     0,     0,   -61, -103,   41,  255}, 
	{    180,   -111,      0,     0,     0,     0,    90,  -78,  -42,  255}, 
	{    -31,    -63,      0,     0,     0,     0,  -123,  -31,   -1,  255}, 
	{      0,    228,      0,     0,     0,     0,  -123,   30,   -1,  255}, 
	{    186,    -79,      0,     0,     0,     0,   126,  -10,   -2,  255}, 
};

// 0x050054F0 - 0x05005558
const Gfx manta_seg5_dl_050054F0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050037A0),
    gsDPLoadSync(),
	gsSPLight((&light_manta_Lwing2[0].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[0].a   ),2 ),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_050053F0, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  0, 0x0),
    gsSP2Triangles( 4,  0,  3, 0x0,  5,  4,  3, 0x0),
    gsSP2Triangles( 0,  4,  6, 0x0,  0,  6,  1, 0x0),
    gsSP2Triangles( 4,  5,  7, 0x0,  4,  7,  6, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005558 - 0x050055A8
const Gfx manta_seg5_dl_05005558[] = {
	gsSPLight((&light_manta_Lwing2[1].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[1].a   ),2 ),
    gsSPVertex(manta_seg5_vertex_05005470, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  4, 0x0),
    gsSP2Triangles( 5,  6,  0, 0x0,  6,  1,  0, 0x0),
    gsSP2Triangles( 0,  2,  4, 0x0,  0,  3,  5, 0x0),
    gsSP2Triangles( 7,  2,  1, 0x0,  7,  4,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x050055A8 - 0x05005620
const Gfx manta_seg5_dl_050055A8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_050054F0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(manta_seg5_dl_05005558),
    gsSPEndDisplayList(),
};

// 0x05005620
static const Vtx manta_seg5_vertex_05005620[] = {
	{    167,   -105,      0,     0,  1220,   280,    19, -125,   -2,  255}, 
	{      0,    -89,     10,     0,  1024,   298,   -47,  -17,  116,  255}, 
	{      0,   -109,      0,     0,  1024,   274,  -103,  -73,   -3,  255}, 
	{      0,    122,      0,     0,  1024,   550,  -126,   12,   -3,  255}, 
	{    180,    -17,      0,     0,  1236,   384,   117,   47,    0,  255}, 
	{     -7,    -77,      0,     0,  1012,   312,  -126,  -12,   -2,  255}, 
};

// 0x05005680
static const Vtx manta_seg5_vertex_05005680[] = {
	{      0,    -89,     -9,     0,     0,     0,   -45,  -15, -117,  255}, 
	{    180,    -17,      0,     0,     0,     0,   117,   47,    0,  255}, 
	{    167,   -105,      0,     0,     0,     0,    19, -125,   -2,  255}, 
	{      0,   -109,      0,     0,     0,     0,  -103,  -73,   -3,  255}, 
	{     -7,    -77,      0,     0,     0,     0,  -126,  -12,   -2,  255}, 
	{      0,    122,      0,     0,     0,     0,  -126,   12,   -3,  255}, 
};

// 0x050056E0 - 0x05005730
const Gfx manta_seg5_dl_050056E0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050037A0),
    gsDPLoadSync(),
	gsSPLight((&light_manta_Lwing2[0].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[0].a   ),2 ),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_05005620, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  4, 0x0),
    gsSP2Triangles( 4,  1,  0, 0x0,  1,  3,  5, 0x0),
    gsSP1Triangle( 5,  2,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005730 - 0x05005768
const Gfx manta_seg5_dl_05005730[] = {
	gsSPLight((&light_manta_Lwing2[1].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[1].a   ),2 ),
    gsSPVertex(manta_seg5_vertex_05005680, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  4, 0x0),
    gsSP2Triangles( 3,  0,  2, 0x0,  4,  5,  0, 0x0),
    gsSP1Triangle( 5,  1,  0, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005768 - 0x050057E0
const Gfx manta_seg5_dl_05005768[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_050056E0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(manta_seg5_dl_05005730),
    gsSPEndDisplayList(),
};

// 0x050057E0
static const Vtx manta_seg5_vertex_050057E0[] = {
	{    102,      2,     32,     0,   544,  -330,    11,    6,  126,  255}, 
	{     92,     12,      2,     0,   500,   116,     9,  126,   -8,  255}, 
	{    -15,     32,     32,     0,     8,  -216,    23,  105,   67,  255}, 
	{     92,      2,    -23,     0,   500,   496,    34,   15, -121,  255}, 
	{    -15,     32,    -31,     0,     8,   718,    28,  100,  -72,  255}, 
	{    184,     12,      8,     0,   918,   -60,    68,   32, -102,  255}, 
	{    172,     22,     42,     0,   862,  -544,    20,   13,  124,  255}, 
	{    102,    -17,      2,     0,   544,   108,    26, -124,    3,  255}, 
	{    -15,    -17,     32,     0,     8,  -216,     7,  -97,   81,  255}, 
	{    -15,    -17,    -31,     0,     8,   718,    13,  -92,  -86,  255}, 
};

// 0x05005880 - 0x05005918
const Gfx manta_seg5_dl_05005880[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050017A0),
    gsDPLoadSync(),
	gsSPLight((&light_manta_Lwing2[0].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[0].a   ),2 ),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_050057E0, 10, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  4, 0x0),
    gsSP2Triangles( 5,  3,  1, 0x0,  1,  6,  5, 0x0),
    gsSP2Triangles( 0,  6,  1, 0x0,  4,  2,  1, 0x0),
    gsSP2Triangles( 7,  5,  6, 0x0,  6,  0,  7, 0x0),
    gsSP2Triangles( 3,  5,  7, 0x0,  7,  0,  8, 0x0),
    gsSP2Triangles( 2,  8,  0, 0x0,  3,  7,  9, 0x0),
    gsSP2Triangles( 9,  4,  3, 0x0,  8,  9,  7, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005918 - 0x05005988
const Gfx manta_seg5_dl_05005918[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05005880),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

// 0x05005988
static const Vtx manta_seg5_vertex_05005988[] = {
	{      0,    160,      0,     0,     0,    40,   -23,  117,   41,  255}, 
	{      0,    120,    -39,     0,     0,   626,   -15,   50, -115,  255}, 
	{    -89,     90,      0,     0,   376,   742,  -104,   59,  -40,  255}, 
	{    220,    124,      0,     0,   780,   656,    78,   95,  -30,  255}, 
	{    220,     90,    -19,     0,   780,   948,    48,   18, -115,  255}, 
	{      0,    120,    -39,     0,   990,   626,   -15,   50, -115,  255}, 
	{      0,    160,      0,     0,   990,    40,   -23,  117,   41,  255}, 
};

// 0x050059F8
static const Vtx manta_seg5_vertex_050059F8[] = {
	{    244,     64,      0,     0,   840,   314,   124,   23,   -1,  255}, 
	{    220,    124,      0,     0,   812,   242,    78,   95,  -30,  255}, 
	{    220,     90,     20,     0,   812,   282,    41,   30,  116,  255}, 
	{    -89,   -139,      0,     0,   448,   556,  -109,  -20,   59,  255}, 
	{      0,    120,     30,     0,   552,   248,   -24,   31,  120,  255}, 
	{    -89,     90,      0,     0,   448,   282,  -104,   59,  -40,  255}, 
	{      0,    160,      0,     0,   552,   200,   -23,  117,   41,  255}, 
	{      0,   -179,     30,     0,   552,   604,   -11,  -10,  126,  255}, 
	{      0,   -349,      0,     0,   552,   806,   -81,  -97,    8,  255}, 
	{    220,   -227,      0,     0,   812,   660,   119,  -43,    0,  255}, 
};

// 0x05005A98
static const Vtx manta_seg5_vertex_05005A98[] = {
	{    220,   -227,      0,     0,     0,     0,   119,  -43,    0,  255}, 
	{    220,     90,    -19,     0,     0,     0,    48,   18, -115,  255}, 
	{    244,     64,      0,     0,     0,     0,   124,   23,   -1,  255}, 
	{      0,   -349,      0,     0,     0,     0,   -81,  -97,    8,  255}, 
	{      0,   -179,    -39,     0,     0,     0,   -19,  -10, -124,  255}, 
	{      0,    120,    -39,     0,     0,     0,   -15,   50, -115,  255}, 
	{    -89,     90,      0,     0,     0,     0,  -104,   59,  -40,  255}, 
	{    -89,   -139,      0,     0,     0,     0,  -109,  -20,   59,  255}, 
	{    220,    124,      0,     0,     0,     0,    78,   95,  -30,  255}, 
};

// 0x05005B28 - 0x05005B68
const Gfx manta_seg5_dl_05005B28[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050017A0),
    gsDPLoadSync(),
	gsSPLight((&light_manta_Lwing2[0].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[0].a   ),2 ),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_05005988, 7, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP1Triangle( 3,  5,  6, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005B68 - 0x05005BE8
const Gfx manta_seg5_dl_05005B68[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050037A0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_050059F8, 10, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 5,  4,  6, 0x0,  6,  4,  2, 0x0),
    gsSP2Triangles( 3,  7,  4, 0x0,  2,  4,  7, 0x0),
    gsSP2Triangles( 6,  2,  1, 0x0,  8,  7,  3, 0x0),
    gsSP2Triangles( 7,  8,  9, 0x0,  7,  9,  2, 0x0),
    gsSP1Triangle( 2,  9,  0, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005BE8 - 0x05005C38
const Gfx manta_seg5_dl_05005BE8[] = {
	gsSPLight((&light_manta_Lwing2[1].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[1].a   ),2 ),
    gsSPVertex(manta_seg5_vertex_05005A98, 9, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  0, 0x0),
    gsSP2Triangles( 0,  4,  1, 0x0,  4,  5,  1, 0x0),
    gsSP2Triangles( 6,  5,  4, 0x0,  6,  4,  7, 0x0),
    gsSP2Triangles( 7,  4,  3, 0x0,  1,  8,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005C38 - 0x05005CD0
const Gfx manta_seg5_dl_05005C38[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05005B28),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05005B68),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(manta_seg5_dl_05005BE8),
    gsSPEndDisplayList(),
};

// 0x05005CD0
static const Vtx manta_seg5_vertex_05005CD0[] = {
	{    180,   -119,      0,     0,  1016,   538,   125,  -17,   -2,  255}, 
	{    180,     92,     10,     0,  1016,   286,    56,   31,  109,  255}, 
	{      0,     90,     20,     0,   804,   290,   -30,   19,  121,  255}, 
	{    -31,     64,      0,     0,   764,   320,  -123,   31,   -1,  255}, 
	{      0,   -227,      0,     0,   804,   668,  -123,  -30,   -1,  255}, 
	{      0,    124,      0,     0,   804,   248,   -61,  103,   41,  255}, 
	{    180,    112,      0,     0,  1016,   264,    90,   78,  -42,  255}, 
	{    186,     80,      0,     0,  1024,   302,   126,   10,   -2,  255}, 
};

// 0x05005D50
static const Vtx manta_seg5_vertex_05005D50[] = {
	{    180,     92,     -9,     0,     0,     0,    67,   18, -105,  255}, 
	{    180,   -119,      0,     0,     0,     0,   125,  -17,   -2,  255}, 
	{      0,     90,    -19,     0,     0,     0,   -23,   25, -122,  255}, 
	{    186,     80,      0,     0,     0,     0,   126,   10,   -2,  255}, 
	{    180,    112,      0,     0,     0,     0,    90,   78,  -42,  255}, 
	{      0,   -227,      0,     0,     0,     0,  -123,  -30,   -1,  255}, 
	{      0,    124,      0,     0,     0,     0,   -61,  103,   41,  255}, 
	{    -31,     64,      0,     0,     0,     0,  -123,   31,   -1,  255},
};

// 0x05005DD0 - 0x05005E38
const Gfx manta_seg5_dl_05005DD0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050037A0),
    gsDPLoadSync(),
	gsSPLight((&light_manta_Lwing2[0].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[0].a   ),2 ),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_05005CD0, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  2, 0x0),
    gsSP2Triangles( 2,  5,  3, 0x0,  5,  2,  1, 0x0),
    gsSP2Triangles( 4,  0,  2, 0x0,  5,  1,  6, 0x0),
    gsSP2Triangles( 7,  6,  1, 0x0,  0,  7,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005E38 - 0x05005E88
const Gfx manta_seg5_dl_05005E38[] = {
	gsSPLight((&light_manta_Lwing2[1].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[1].a   ),2 ),
    gsSPVertex(manta_seg5_vertex_05005D50, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 0,  4,  3, 0x0,  4,  0,  2, 0x0),
    gsSP2Triangles( 2,  1,  5, 0x0,  4,  2,  6, 0x0),
    gsSP2Triangles( 2,  5,  7, 0x0,  7,  6,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x05005E88 - 0x05005F00
const Gfx manta_seg5_dl_05005E88[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05005DD0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(manta_seg5_dl_05005E38),
    gsSPEndDisplayList(),
};

// 0x05005F00
static const Vtx manta_seg5_vertex_05005F00[] = {
	{      0,     90,     10,     0,  1024,   298,   -47,   17,  116,  255}, 
	{      0,    110,      0,     0,  1024,   274,  -103,   73,   -3,  255}, 
	{     -7,     78,      0,     0,  1012,   312,  -126,   12,   -2,  255}, 
	{    167,    106,      0,     0,  1220,   280,    19,  125,   -2,  255}, 
	{    180,     18,      0,     0,  1236,   384,   117,  -47,    0,  255}, 
	{      0,   -121,      0,     0,  1024,   550,  -126,  -12,   -3,  255}, 
};

// 0x05005F60
static const Vtx manta_seg5_vertex_05005F60[] = {
	{      0,     90,     -9,     0,     0,     0,   -45,   15, -117,  255}, 
	{    180,     18,      0,     0,     0,     0,   117,  -47,    0,  255}, 
	{      0,   -121,      0,     0,     0,     0,  -126,  -12,   -3,  255}, 
	{    167,    106,      0,     0,     0,     0,    19,  125,   -2,  255}, 
	{      0,    110,      0,     0,     0,     0,  -103,   73,   -3,  255}, 
	{     -7,     78,      0,     0,     0,     0,  -126,   12,   -2,  255}, 
};

// 0x05005FC0 - 0x05006010
const Gfx manta_seg5_dl_05005FC0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050037A0),
    gsDPLoadSync(),
	gsSPLight((&light_manta_Lwing2[0].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[0].a   ),2 ),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_05005F00, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  4, 0x0),
    gsSP2Triangles( 1,  0,  3, 0x0,  4,  0,  5, 0x0),
    gsSP1Triangle( 2,  5,  0, 0x0),
    gsSPEndDisplayList(),
};

// 0x05006010 - 0x05006048
const Gfx manta_seg5_dl_05006010[] = {
	gsSPLight((&light_manta_Lwing2[1].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[1].a   ),2 ),
    gsSPVertex(manta_seg5_vertex_05005F60, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 3,  0,  4, 0x0,  0,  2,  5, 0x0),
    gsSP1Triangle( 5,  4,  0, 0x0),
    gsSPEndDisplayList(),
};

// 0x05006048 - 0x050060C0
const Gfx manta_seg5_dl_05006048[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05005FC0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(manta_seg5_dl_05006010),
    gsSPEndDisplayList(),
};

// 0x050060C0
static const Vtx manta_seg5_vertex_050060C0[] = {
	{    600,    220,      6,     0,     0,    36,    79,   99,   -7,  255}, 
	{    560,    220,    -33,     0,     0,   718,    29,   62, -106,  255}, 
	{    532,    288,      6,     0,   178,   388,    49,  112,  -32,  255}, 
	{    730,      0,    -43,     0,   480,   888,    80,    0,  -98,  255}, 
	{    740,    120,     26,     0,   758,  -304,    93,   61,   59,  255}, 
	{    770,      0,     16,     0,   480,  -134,   126,    0,   -9,  255}, 
	{    670,    130,    -53,     0,   780,  1056,    57,   56,  -98,  255}, 
	{    740,   -119,     26,     0,   200,  -304,    93,  -62,   59,  255}, 
	{    670,   -129,    -53,     0,   178,  1056,    57,  -56,  -98,  255}, 
	{    560,    220,    -33,     0,   990,   718,    29,   62, -106,  255}, 
	{    600,    220,      6,     0,   990,    36,    79,   99,   -7,  255}, 
	{    600,   -219,      6,     0,     0,    36,    79,  -99,   -7,  255}, 
	{    560,   -219,    -33,     0,     0,   718,    29,  -62, -106,  255}, 
	{    532,   -287,      6,     0,   178,   388,    49, -112,  -32,  255}, 
};

// 0x050061A0
static const Vtx manta_seg5_vertex_050061A0[] = {
	{    260,   -219,    -33,     0,     0,  2324,   -12,  -45, -118,  255}, 
	{    220,      0,    -73,     0,  1092,  2532,   -18,    0, -125,  255}, 
	{    504,      0,    -91,     0,  1092,  1048,     5,    0, -126,  255}, 
	{    560,   -219,    -33,     0,     0,   756,    29,  -62, -106,  255}, 
	{    260,    220,    -33,     0,     0,  2324,   -12,   44, -118,  255}, 
	{    560,    220,    -33,     0,     0,   756,    29,   62, -106,  255}, 
	{    560,   -219,    -33,     0,   -10,    48,    29,  -62, -106,  255}, 
	{    504,      0,    -91,     0,  1212,   864,     5,    0, -126,  255}, 
	{    670,   -129,    -53,     0,   490,    16,    57,  -56,  -98,  255}, 
	{    670,   -129,    -53,     0,   532,     8,    57,  -56,  -98,  255}, 
	{    504,      0,    -91,     0,   990,   912,     5,    0, -126,  255}, 
	{    730,      0,    -43,     0,   990,   -72,    80,    0,  -98,  255}, 
	{    670,    130,    -53,     0,   490,    16,    57,   56,  -98,  255}, 
	{    560,    220,    -33,     0,   -10,    48,    29,   62, -106,  255}, 
	{    670,    130,    -53,     0,   532,     8,    57,   56,  -98,  255}, 
};

// 0x05006290
static const Vtx manta_seg5_vertex_05006290[] = {
	{    740,    120,     26,     0,   144,    40,    93,   61,   59,  255}, 
	{    560,    220,     36,     0,    28,   254,    23,   49,  114,  255}, 
	{    500,      0,     56,     0,   288,   324,     4,    0,  126,  255}, 
	{    532,   -287,      6,     0,   628,   286,    49, -112,  -32,  255}, 
	{    600,   -219,      6,     0,   548,   206,    79,  -99,   -7,  255}, 
	{    560,   -219,     36,     0,   548,   254,    23,  -49,  114,  255}, 
	{    260,   -219,     36,     0,   548,   610,   -11,  -23,  124,  255}, 
	{    300,   -287,      6,     0,   628,   562,   -16, -115,   50,  255}, 
	{    740,   -119,     26,     0,   428,    40,    93,  -62,   59,  255}, 
	{    260,    220,     36,     0,    28,   610,   -11,   21,  124,  255}, 
	{     20,   -109,      6,     0,   416,   894,   -57,  -30,  108,  255}, 
	{     90,   -219,      6,     0,   548,   812,   -64,  -96,  -51,  255}, 
	{    770,      0,     16,     0,   288,     4,   126,    0,   -9,  255}, 
	{    600,    220,      6,     0,    28,   206,    79,   99,   -7,  255}, 
	{    560,    220,     36,     0,   548,   254,    23,   49,  114,  255}, 
	{    600,    220,      6,     0,   548,   206,    79,   99,   -7,  255}, 
	{    532,    288,      6,     0,   628,   286,    49,  112,  -32,  255}, 
	{    260,    220,     36,     0,    28,   610,   -11,   21,  124,  255}, 
	{     20,    120,     16,     0,   144,   894,   -81,   43,   87,  255}, 
	{     20,   -109,      6,     0,   416,   894,   -57,  -30,  108,  255}, 
	{    -39,      0,      6,     0,   288,   966,   -87,    1,  -91,  255}, 
	{     90,    220,      6,     0,    28,   812,   -66,   97,  -47,  255}, 
	{     90,    220,      6,     0,   548,   812,   -66,   97,  -47,  255}, 
	{    260,    220,     36,     0,   548,   610,   -11,   21,  124,  255}, 
	{    300,    288,      6,     0,   628,   562,   -16,  115,   50,  255}, 
};

// 0x05006420
static const Vtx manta_seg5_vertex_05006420[] = {
	{    300,    288,      6,     0,     0,     0,   -16,  115,   50,  255}, 
	{    260,    220,    -33,     0,     0,     0,   -12,   44, -118,  255}, 
	{     90,    220,      6,     0,     0,     0,   -66,   97,  -47,  255}, 
	{     80,      0,    -40,     0,     0,     0,   -38,    0, -121,  255}, 
	{     90,   -219,      6,     0,     0,     0,   -64,  -96,  -51,  255}, 
	{     20,   -109,      6,     0,     0,     0,   -57,  -30,  108,  255}, 
	{    260,   -219,    -33,     0,     0,     0,   -12,  -45, -118,  255}, 
	{    300,   -287,      6,     0,     0,     0,   -16, -115,   50,  255}, 
	{    532,   -287,      6,     0,     0,     0,    49, -112,  -32,  255}, 
	{    560,   -219,    -33,     0,     0,     0,    29,  -62, -106,  255}, 
	{    220,      0,    -73,     0,     0,     0,   -18,    0, -125,  255}, 
	{    532,    288,      6,     0,     0,     0,    49,  112,  -32,  255}, 
	{    560,    220,    -33,     0,     0,     0,    29,   62, -106,  255}, 
	{    -39,      0,      6,     0,     0,     0,   -87,    1,  -91,  255}, 
	{     20,    120,     16,     0,     0,     0,   -81,   43,   87,  255},
};

// 0x05006510 - 0x05006588
const Gfx manta_seg5_dl_05006510[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050017A0),
    gsDPLoadSync(),
	gsSPLight((&light_manta_Lwing2[0].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[0].a   ),2 ),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_050060C0, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  4, 0x0,  3,  5,  7, 0x0),
    gsSP2Triangles( 7,  8,  3, 0x0,  6,  9, 10, 0x0),
    gsSP2Triangles( 4,  6, 10, 0x0, 11, 12,  8, 0x0),
    gsSP2Triangles( 8,  7, 11, 0x0, 13, 12, 11, 0x0),
    gsSPEndDisplayList(),
};

// 0x05006588 - 0x050065F0
const Gfx manta_seg5_dl_05006588[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_05001FA0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_050061A0, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 2,  1,  4, 0x0,  5,  2,  4, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles(12,  7, 13, 0x0, 11, 10, 14, 0x0),
    gsSPEndDisplayList(),
};

// 0x050065F0 - 0x050066D0
const Gfx manta_seg5_dl_050065F0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, manta_seg5_texture_050037A0),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(manta_seg5_vertex_05006290, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  2,  5,  8, 0x0),
    gsSP2Triangles( 8,  5,  4, 0x0,  6,  5,  2, 0x0),
    gsSP2Triangles( 5,  7,  3, 0x0,  6,  2,  9, 0x0),
    gsSP2Triangles(10,  6,  9, 0x0,  7,  6, 11, 0x0),
    gsSP2Triangles(10, 11,  6, 0x0,  8, 12,  0, 0x0),
    gsSP2Triangles( 0,  2,  8, 0x0, 13,  1,  0, 0x0),
    gsSP1Triangle( 2,  1,  9, 0x0),
    gsSPVertex(&manta_seg5_vertex_05006290[14], 11, 0), 
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 4,  6,  5, 0x0,  3,  7,  4, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 10,  9,  0, 0x0),
    gsSP1Triangle( 2, 10,  0, 0x0),
    gsSPEndDisplayList(),
};

// 0x050066D0 - 0x05006750
const Gfx manta_seg5_dl_050066D0[] = {
	gsSPLight((&light_manta_Lwing2[1].l[0]),1 ),
	gsSPLight((&light_manta_Lwing2[1].a   ),2 ),
    gsSPVertex(manta_seg5_vertex_05006420, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  4, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  7,  6, 0x0,  8,  6,  9, 0x0),
    gsSP2Triangles( 3, 10,  6, 0x0, 11, 12,  1, 0x0),
    gsSP2Triangles(11,  1,  0, 0x0,  1, 10,  3, 0x0),
    gsSP2Triangles( 2,  1,  3, 0x0,  3, 13, 14, 0x0),
    gsSP2Triangles( 2,  3, 14, 0x0,  5, 13,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x05006750 - 0x05006808
const Gfx manta_seg5_dl_05006750[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05006510),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_05006588),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(manta_seg5_dl_050065F0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(manta_seg5_dl_050066D0),
    gsSPEndDisplayList(),
};

// 0x05006808
static const Vtx manta_seg5_vertex_05006808[] = {
    {{{     0,     -5,     -3}, 0, {     0,      0}, {0xf3, 0x98, 0x46, 0x00}}},
    {{{     0,      0,      4}, 0, {     0,      0}, {0xf6, 0x00, 0x7e, 0x00}}},
    {{{    -4,      0,      2}, 0, {     0,      0}, {0xa9, 0x00, 0x5b, 0x00}}},
    {{{   238,      0,      0}, 0, {     0,      0}, {0x01, 0x66, 0x4a, 0x00}}},
    {{{     0,      5,     -3}, 0, {     0,      0}, {0xf3, 0x68, 0x46, 0x00}}},
    {{{   238,      0,      0}, 0, {     0,      0}, {0x01, 0x9a, 0x4a, 0x00}}},
};

// 0x05006868
static const Vtx manta_seg5_vertex_05006868[] = {
    {{{    -4,      0,      2}, 0, {     0,      0}, {0xa9, 0x00, 0x5b, 0x00}}},
    {{{     0,      5,     -3}, 0, {     0,      0}, {0xf3, 0x68, 0x46, 0x00}}},
    {{{     0,     -5,     -3}, 0, {     0,      0}, {0xf3, 0x98, 0x46, 0x00}}},
    {{{     0,     -5,     -3}, 0, {     0,      0}, {0x01, 0x00, 0x81, 0x00}}},
    {{{     0,      5,     -3}, 0, {     0,      0}, {0x01, 0x00, 0x81, 0x00}}},
    {{{   238,      0,      0}, 0, {     0,      0}, {0x01, 0x00, 0x81, 0x00}}},
};

// 0x050068C8
static const Vtx manta_seg5_vertex_050068C8[] = {
    {{{     0,     -8,     -5}, 0, {     0,      0}, {0xf1, 0x94, 0x3f, 0x00}}},
    {{{     0,      0,      7}, 0, {     0,      0}, {0xf4, 0x00, 0x7e, 0x00}}},
    {{{    -7,      0,      0}, 0, {     0,      0}, {0x84, 0x00, 0x18, 0x00}}},
    {{{   236,     -5,     -3}, 0, {     0,      0}, {0x13, 0x8e, 0xcd, 0x00}}},
    {{{   240,      0,      0}, 0, {     0,      0}, {0x7b, 0x00, 0x1b, 0x00}}},
    {{{   236,      0,      4}, 0, {     0,      0}, {0x0f, 0x00, 0x7e, 0x00}}},
    {{{   236,      5,     -3}, 0, {     0,      0}, {0x13, 0x72, 0xcd, 0x00}}},
    {{{     0,      8,     -5}, 0, {     0,      0}, {0xf1, 0x6c, 0x3f, 0x00}}},
};

// 0x05006948
static const Vtx manta_seg5_vertex_05006948[] = {
    {{{    -7,      0,      0}, 0, {     0,      0}, {0x84, 0x00, 0x18, 0x00}}},
    {{{     0,      8,     -5}, 0, {     0,      0}, {0xf1, 0x6c, 0x3f, 0x00}}},
    {{{     0,     -8,     -5}, 0, {     0,      0}, {0xf1, 0x94, 0x3f, 0x00}}},
    {{{   236,      5,     -3}, 0, {     0,      0}, {0x13, 0x72, 0xcd, 0x00}}},
    {{{   240,      0,      0}, 0, {     0,      0}, {0x7b, 0x00, 0x1b, 0x00}}},
    {{{   236,     -5,     -3}, 0, {     0,      0}, {0x13, 0x8e, 0xcd, 0x00}}},
    {{{     0,     -8,     -5}, 0, {     0,      0}, {0x01, 0x00, 0x81, 0x00}}},
    {{{     0,      8,     -5}, 0, {     0,      0}, {0x01, 0x00, 0x81, 0x00}}},
};

// 0x050069C8
static const Vtx manta_seg5_vertex_050069C8[] = {
    {{{     0,    -11,     -7}, 0, {     0,      0}, {0x95, 0xbf, 0xee, 0x00}}},
    {{{     0,      0,     10}, 0, {     0,      0}, {0x9d, 0x00, 0x4f, 0x00}}},
    {{{    -8,      0,      0}, 0, {     0,      0}, {0x83, 0x00, 0x13, 0x00}}},
    {{{   168,     -8,     -5}, 0, {     0,      0}, {0x13, 0x8f, 0xcc, 0x00}}},
    {{{   175,      0,      0}, 0, {     0,      0}, {0x7c, 0x00, 0x18, 0x00}}},
    {{{   168,      0,      7}, 0, {     0,      0}, {0x10, 0x00, 0x7d, 0x00}}},
    {{{   168,      8,     -5}, 0, {     0,      0}, {0x13, 0x71, 0xcc, 0x00}}},
    {{{     0,     11,     -7}, 0, {     0,      0}, {0x95, 0x41, 0xee, 0x00}}},
    {{{     0,      0,     10}, 0, {     0,      0}, {0x01, 0x97, 0x46, 0x00}}},
    {{{     0,    -11,     -7}, 0, {     0,      0}, {0x01, 0x97, 0x46, 0x00}}},
    {{{     0,     11,     -7}, 0, {     0,      0}, {0x01, 0x69, 0x46, 0x00}}},
    {{{     0,      0,     10}, 0, {     0,      0}, {0x01, 0x69, 0x46, 0x00}}},
};

// 0x05006A88
static const Vtx manta_seg5_vertex_05006A88[] = {
    {{{    -8,      0,      0}, 0, {     0,      0}, {0x83, 0x00, 0x13, 0x00}}},
    {{{     0,     11,     -7}, 0, {     0,      0}, {0x95, 0x41, 0xee, 0x00}}},
    {{{     0,    -11,     -7}, 0, {     0,      0}, {0x95, 0xbf, 0xee, 0x00}}},
    {{{   168,      8,     -5}, 0, {     0,      0}, {0x13, 0x71, 0xcc, 0x00}}},
    {{{   175,      0,      0}, 0, {     0,      0}, {0x7c, 0x00, 0x18, 0x00}}},
    {{{   168,     -8,     -5}, 0, {     0,      0}, {0x13, 0x8f, 0xcc, 0x00}}},
    {{{     0,    -11,     -7}, 0, {     0,      0}, {0x01, 0x00, 0x81, 0x00}}},
    {{{     0,     11,     -7}, 0, {     0,      0}, {0x01, 0x00, 0x81, 0x00}}},
};

// 0x05006B08 - 0x05006B70
const Gfx manta_seg5_dl_05006B08[] = {
    gsSPLight(&manta_seg5_lights_05001770.l, 1),
    gsSPLight(&manta_seg5_lights_05001770.a, 2),
    gsSPVertex(manta_seg5_vertex_05006808, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  1, 0x0),
    gsSP2Triangles( 1,  4,  2, 0x0,  1,  0,  5, 0x0),
    gsSPLight(&manta_seg5_lights_05001758.l, 1),
    gsSPLight(&manta_seg5_lights_05001758.a, 2),
    gsSPVertex(manta_seg5_vertex_05006868, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x05006B70 - 0x05006C08
const Gfx manta_seg5_dl_05006B70[] = {
    gsSPLight(&manta_seg5_lights_05001770.l, 1),
    gsSPLight(&manta_seg5_lights_05001770.a, 2),
    gsSPVertex(manta_seg5_vertex_050068C8, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 5,  4,  6, 0x0,  1,  7,  2, 0x0),
    gsSP2Triangles( 5,  1,  0, 0x0,  5,  0,  3, 0x0),
    gsSP2Triangles( 6,  7,  1, 0x0,  6,  1,  5, 0x0),
    gsSPLight(&manta_seg5_lights_05001758.l, 1),
    gsSPLight(&manta_seg5_lights_05001758.a, 2),
    gsSPVertex(manta_seg5_vertex_05006948, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  5,  7,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x05006C08 - 0x05006CA0
const Gfx manta_seg5_dl_05006C08[] = {
    gsSPLight(&manta_seg5_lights_05001770.l, 1),
    gsSPLight(&manta_seg5_lights_05001770.a, 2),
    gsSPVertex(manta_seg5_vertex_050069C8, 12, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 5,  4,  6, 0x0,  1,  7,  2, 0x0),
    gsSP2Triangles( 5,  8,  9, 0x0,  5,  9,  3, 0x0),
    gsSP2Triangles( 6, 10, 11, 0x0,  6, 11,  5, 0x0),
    gsSPLight(&manta_seg5_lights_05001758.l, 1),
    gsSPLight(&manta_seg5_lights_05001758.a, 2),
    gsSPVertex(manta_seg5_vertex_05006A88, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  5,  7,  3, 0x0),
    gsSPEndDisplayList(),
};
#pragma GCC diagnostic pop
