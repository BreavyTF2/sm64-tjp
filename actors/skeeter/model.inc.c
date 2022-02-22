// Skeeter

// 0x06000090
ALIGNED8 static const u8 skeeter_seg6_texture_06000090[] = {
#include "actors/skeeter/skeeter_eye.rgba16.inc.c"
};

// 0x06000890
ALIGNED8 static const u8 skeeter_seg6_texture_06000890[] = {
#include "actors/skeeter/skeeter_iris.rgba16.inc.c"
};

// 0x06000990
static const Vtx skeeter_seg6_vertex_06000990[] = {
    {{{   -44,     45,      0}, 0, {     0,      0}, {0x00, 0xff, 0xd4, 0xff}}},
    {{{   -44,    -44,      0}, 0, {     0,    990}, {0x00, 0xff, 0xd4, 0xff}}},
    {{{    45,    -44,      0}, 0, {   990,    990}, {0x00, 0xff, 0xd4, 0xff}}},
    {{{    45,     45,      0}, 0, {   990,      0}, {0x00, 0xff, 0xd4, 0xff}}},
};

// 0x060009D0 - 0x06000A08
const Gfx skeeter_seg6_dl_060009D0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, skeeter_seg6_texture_06000090),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(skeeter_seg6_vertex_06000990, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x06000A08 - 0x06000A78
const Gfx skeeter_seg6_dl_06000A08[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGBA, G_CC_MODULATERGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(skeeter_seg6_dl_060009D0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x06000A78
static const Vtx skeeter_seg6_vertex_06000A78[] = {
    {{{   -14,     15,      0}, 0, {     0,      0}, {0xff, 0x55, 0x00, 0xff}}},
    {{{   -14,    -14,      0}, 0, {     0,    990}, {0xff, 0x55, 0x00, 0xff}}},
    {{{    15,    -14,      0}, 0, {   990,    990}, {0xff, 0x55, 0x00, 0xff}}},
    {{{    15,     15,      0}, 0, {   990,      0}, {0xff, 0x55, 0x00, 0xff}}},
};

// 0x06000AB8 - 0x06000AF0
const Gfx skeeter_seg6_dl_06000AB8[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, skeeter_seg6_texture_06000090),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(skeeter_seg6_vertex_06000A78, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x06000AF0 - 0x06000B60
const Gfx skeeter_seg6_dl_06000AF0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGBA, G_CC_MODULATERGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(skeeter_seg6_dl_06000AB8),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x06000B60
static const Vtx skeeter_seg6_vertex_06000B60[] = {
    {{{   -17,     18,      0}, 0, {     0,      0}, {0xef, 0xea, 0xd9, 0xff}}},
    {{{   -17,    -17,      0}, 0, {     0,    990}, {0xef, 0xea, 0xd9, 0xff}}},
    {{{    18,    -17,      0}, 0, {   990,    990}, {0xef, 0xea, 0xd9, 0xff}}},
    {{{    18,     18,      0}, 0, {   990,      0}, {0xef, 0xea, 0xd9, 0xff}}},
};

// 0x06000BA0 - 0x06000BD8
const Gfx skeeter_seg6_dl_06000BA0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, skeeter_seg6_texture_06000090),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(skeeter_seg6_vertex_06000B60, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x06000BD8 - 0x06000C48
const Gfx skeeter_seg6_dl_06000BD8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGBA, G_CC_MODULATERGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(skeeter_seg6_dl_06000BA0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x06000C48
static const Vtx skeeter_seg6_vertex_06000C48[] = {
    {{{    66,      8,     69}, 0, {   536,      0}, {0x0e, 0x40, 0xa4, 0xff}}},
    {{{    85,    -24,    -35}, 0, {   -99,      0}, {0x0e, 0x40, 0xa4, 0xff}}},
    {{{    63,     75,    -10}, 0, {   218,    421}, {0x0e, 0x40, 0xa4, 0xff}}},
};

// 0x06000C78 - 0x06000CA8
const Gfx skeeter_seg6_dl_06000C78[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, skeeter_seg6_texture_06000890),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 16 * 8 - 1, CALC_DXT(16, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(skeeter_seg6_vertex_06000C48, 3, 0),
    gsSP1Triangle( 0,  1,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x06000CA8 - 0x06000D18
const Gfx skeeter_seg6_dl_06000CA8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGBA, G_CC_MODULATERGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 3, G_TX_NOLOD, G_TX_CLAMP, 4, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (16 - 1) << G_TEXTURE_IMAGE_FRAC, (8 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(skeeter_seg6_dl_06000C78),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x06000D18
static const Vtx skeeter_seg6_vertex_06000D18[] = {
    {{{    63,     75,     11}, 0, {   218,    421}, {0x0e, 0x40, 0xa4, 0xff}}},
    {{{    85,    -24,     36}, 0, {   536,      0}, {0x0e, 0x40, 0xa4, 0xff}}},
    {{{    66,      8,    -68}, 0, {   -99,      0}, {0x0e, 0x40, 0xa4, 0xff}}},
};

// 0x06000D48 - 0x06000D78
const Gfx skeeter_seg6_dl_06000D48[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, skeeter_seg6_texture_06000890),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 16 * 8 - 1, CALC_DXT(16, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(skeeter_seg6_vertex_06000D18, 3, 0),
    gsSP1Triangle( 0,  1,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x06000D78 - 0x06000DE8
const Gfx skeeter_seg6_dl_06000D78[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGBA, G_CC_MODULATERGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 3, G_TX_NOLOD, G_TX_CLAMP, 4, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (16 - 1) << G_TEXTURE_IMAGE_FRAC, (8 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(skeeter_seg6_dl_06000D48),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x06000DE8
static const Lights1 skeeter_seg6_lights_06000DE8 = gdSPDefLights1(
    0x7f, 0x55, 0x00,
    0xff, 0xaa, 0x00, 0x28, 0x28, 0x28
);

// 0x06000E00
static const Vtx skeeter_seg6_vertex_06000E00[] = {
    {{{    45,    -24,   -122}, 0, {     0,      0}, {0x6a, 0xe9, 0xc0, 0xff}}},
    {{{    45,    120,     76}, 0, {     0,      0}, {0x24, 0x60, 0x4a, 0xff}}},
    {{{    45,    -24,    123}, 0, {     0,      0}, {0x28, 0xd6, 0x70, 0xff}}},
    {{{    45,    120,    -75}, 0, {     0,      0}, {0xa5, 0x45, 0xcb, 0xff}}},
    {{{   -14,      0,      0}, 0, {     0,      0}, {0x82, 0xfd, 0x00, 0xff}}},
    {{{    45,   -114,      0}, 0, {     0,      0}, {0xb2, 0x9d, 0x00, 0xff}}},
};

// 0x06000E60 - 0x06000EC0
const Gfx skeeter_seg6_dl_06000E60[] = {
    gsSPLight(&skeeter_seg6_lights_06000DE8.l, 1),
    gsSPLight(&skeeter_seg6_lights_06000DE8.a, 2),
    gsSPVertex(skeeter_seg6_vertex_06000E00, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 2,  1,  4, 0x0,  1,  3,  4, 0x0),
    gsSP2Triangles( 3,  0,  4, 0x0,  5,  2,  4, 0x0),
    gsSP2Triangles( 0,  5,  4, 0x0,  5,  0,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x06000EC0 - 0x06000EF0
const Gfx skeeter_seg6_dl_06000EC0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(skeeter_seg6_dl_06000E60),
    gsSPEndDisplayList(),
};

// 0x06000EF0
static const Vtx skeeter_seg6_vertex_06000EF0[] = {
    {{{   -15,      0,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,     76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,    -76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,   -123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,   -114,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,    123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,   -123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,    123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,   -114,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,    -76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,     76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
};

// 0x06000FA0
static const Vtx skeeter_seg6_vertex_06000FA0[] = {
    {{{   555,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   555,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
};

// 0x06000FE0
static const Vtx skeeter_seg6_vertex_06000FE0[] = {
    {{{   405,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   405,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
};

// 0x06001020
static const Vtx skeeter_seg6_vertex_06001020[] = {
    {{{   -15,      0,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,     76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,    -76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,   -123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,   -114,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,    123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,   -123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,    123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,   -114,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,    -76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,     76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
};

// 0x060010D0
static const Vtx skeeter_seg6_vertex_060010D0[] = {
    {{{   555,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   555,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
};

// 0x06001110
static const Vtx skeeter_seg6_vertex_06001110[] = {
    {{{   405,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   405,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
};

// 0x06001150
static const Vtx skeeter_seg6_vertex_06001150[] = {
    {{{    45,    119,     76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,    -76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{   -15,      0,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,   -114,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,    123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,   -123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,   -114,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,   -123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,    123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,    -76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,     76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
};

// 0x06001200
static const Vtx skeeter_seg6_vertex_06001200[] = {
    {{{     0,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   555,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   555,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
};

// 0x06001240
static const Vtx skeeter_seg6_vertex_06001240[] = {
    {{{     0,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   405,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   405,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
};

// 0x06001A80
static const Vtx skeeter_seg6_vertex_06001A80[] = {
    {{{    45,    119,     76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,    -76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{   -15,      0,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,   -114,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,    123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,   -123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,   -114,      0}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,   -123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    -25,    123}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,    -76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
    {{{    45,    119,     76}, 0, {     0,      0}, {0xfc, 0x80, 0x08, 0x00}}},
};

// 0x06001B30
static const Vtx skeeter_seg6_vertex_06001B30[] = {
    {{{     0,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   555,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   555,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
};

// 0x06001B70
static const Vtx skeeter_seg6_vertex_06001B70[] = {
    {{{     0,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   405,      0,     15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   405,      0,    -15}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
};

// 0x06003FF0 - 0x06004040
const Gfx skeeter_seg6_dl_06003FF0[] = {
    gsSPVertex(skeeter_seg6_vertex_06000EF0, 11, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  4, 0x0),
    gsSP2Triangles( 0,  4,  5, 0x0,  0,  5,  1, 0x0),
    gsSP2Triangles( 0,  2,  3, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 9, 10,  7, 0x0,  6,  9,  7, 0x0),
    gsSPEndDisplayList(),
};

// 0x060037B0
static const Vtx skeeter_seg6_vertex_060037B0[] = {
    {{{   162,      7,     -7}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,      7,     -7}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{     0,     -7,      7}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
    {{{   162,     -7,      7}, 0, {     0,      0}, {0x15, 0x15, 0x08, 0x00}}},
};

// 0x06004040 - 0x06004070
const Gfx skeeter_seg6_dl_06004040[] = {
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(skeeter_seg6_vertex_06000FA0, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x06004070 - 0x060040A0
const Gfx skeeter_seg6_dl_06004070[] = {
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(skeeter_seg6_vertex_06000FE0, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x060040A0 - 0x060040F0
const Gfx skeeter_seg6_dl_060040A0[] = {
    gsSPVertex(skeeter_seg6_vertex_06001020, 11, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  4, 0x0),
    gsSP2Triangles( 0,  4,  5, 0x0,  0,  5,  1, 0x0),
    gsSP2Triangles( 0,  2,  3, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 9, 10,  7, 0x0,  6,  9,  7, 0x0),
    gsSPEndDisplayList(),
};

// 0x060040F0 - 0x06004120
const Gfx skeeter_seg6_dl_060040F0[] = {
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(skeeter_seg6_vertex_060010D0, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x06004120 - 0x06004150
const Gfx skeeter_seg6_dl_06004120[] = {
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(skeeter_seg6_vertex_06001110, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x06004150 - 0x060041A0
const Gfx skeeter_seg6_dl_06004150[] = {
    gsSPVertex(skeeter_seg6_vertex_06001150, 11, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  2, 0x0),
    gsSP2Triangles( 5,  3,  2, 0x0,  1,  5,  2, 0x0),
    gsSP2Triangles( 4,  0,  2, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 7,  9, 10, 0x0,  7, 10,  8, 0x0),
    gsSPEndDisplayList(),
};

// 0x060041A0 - 0x060041D0
const Gfx skeeter_seg6_dl_060041A0[] = {
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(skeeter_seg6_vertex_06001200, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x060041D0 - 0x06004200
const Gfx skeeter_seg6_dl_060041D0[] = {
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(skeeter_seg6_vertex_06001240, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x060045C8 - 0x06004618
const Gfx skeeter_seg6_dl_060045C8[] = {
    gsSPVertex(skeeter_seg6_vertex_06001A80, 11, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  2, 0x0),
    gsSP2Triangles( 5,  3,  2, 0x0,  1,  5,  2, 0x0),
    gsSP2Triangles( 4,  0,  2, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 7,  9, 10, 0x0,  7, 10,  8, 0x0),
    gsSPEndDisplayList(),
};

// 0x06004618 - 0x06004648
const Gfx skeeter_seg6_dl_06004618[] = {
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(skeeter_seg6_vertex_06001B30, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x06004648 - 0x06004678
const Gfx skeeter_seg6_dl_06004648[] = {
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(skeeter_seg6_vertex_06001B70, 4, 0),
    gsSP1Triangle( 0,  1,  2, 0x0),
    gsSP1Triangle( 0,  2,  3, 0x0),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x06005328 - 0x06005358
const Gfx skeeter_seg6_dl_06005328[] = {
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(skeeter_seg6_vertex_060037B0, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
