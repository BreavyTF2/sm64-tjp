// ground Mine (unused)

// 0x0600A4E0
static const Lights1 ground_mine_seg6_lights_0600A4E0 = gdSPDefLights1(
    0x3f, 0x3f, 0x3f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0600A4F8
ALIGNED8 static const u8 ground_mine_seg6_texture_0600A4F8[] = {
#include "actors/ground_mine/ground_mine_body.rgba16.inc.c"
};

// 0x0600C4F8
ALIGNED8 static const u8 ground_mine_seg6_texture_0600C4F8[] = {
#include "actors/ground_mine/ground_mine_spike.rgba16.inc.c"
};

// 0x0600CCF8
static const Vtx ground_mine_seg6_vertex_0600CCF8[] = {
    {{{    40,     35,      0}, 0, {   992,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -39,    -29,      0}, 0, {     0,   992}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,    -29,      0}, 0, {   992,   992}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -39,     35,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
};
// 0x0600CE68
static const Vtx ground_mine_seg6_vertex_0600CE68[] = {
    {{{     0,     10,     37}, 0, {   -20,    976}, {0xfd, 0x74, 0x32, 0xff}}},
    {{{    -9,      0,     37}, 0, {   974,    974}, {0x8a, 0xf9, 0x2e, 0xff}}},
    {{{     0,      0,     60}, 0, {   428,      4}, {0xf8, 0xee, 0x7d, 0xff}}},
    {{{    10,      0,     37}, 0, {    -8,    978}, {0x74, 0xf9, 0x32, 0xff}}},
    {{{     0,     10,     37}, 0, {   952,    976}, {0xfd, 0x74, 0x32, 0xff}}},
    {{{     0,      0,     60}, 0, {   428,    -12}, {0xf8, 0xee, 0x7d, 0xff}}},
};

// 0x0600CF58
static const Vtx ground_mine_seg6_vertex_0600CF58[] = {
    {{{    37,      0,     -9}, 0, {    10,    960}, {0x2e, 0xf9, 0x8a, 0xff}}},
    {{{    37,     10,      0}, 0, {   928,    972}, {0x32, 0x74, 0xfd, 0xff}}},
    {{{    60,      0,      0}, 0, {   494,     -4}, {0x7d, 0xee, 0xf8, 0xff}}},
    {{{     0,     -8,     37}, 0, {   -10,    976}, {0xfd, 0x89, 0x29, 0xff}}},
    {{{    10,      0,     37}, 0, {   956,    980}, {0x74, 0xf9, 0x32, 0xff}}},
    {{{     0,      0,     60}, 0, {   428,    -12}, {0xf8, 0xee, 0x7d, 0xff}}},
    {{{    -9,      0,     37}, 0, {   -24,    978}, {0x8a, 0xf9, 0x2e, 0xff}}},
    {{{     0,     -8,     37}, 0, {   974,    976}, {0xfd, 0x89, 0x29, 0xff}}},
    {{{     0,      0,     60}, 0, {   476,     -6}, {0xf8, 0xee, 0x7d, 0xff}}},
    {{{    37,     -8,      0}, 0, {   -20,    968}, {0x29, 0x89, 0xfd, 0xff}}},
    {{{    37,      0,     -9}, 0, {   954,    972}, {0x2e, 0xf9, 0x8a, 0xff}}},
    {{{    60,      0,      0}, 0, {   402,    -10}, {0x7d, 0xee, 0xf8, 0xff}}},
    {{{    37,     10,      0}, 0, {    -8,    964}, {0x32, 0x74, 0xfd, 0xff}}},
    {{{    37,      0,     10}, 0, {   978,    962}, {0x32, 0xf9, 0x74, 0xff}}},
    {{{    60,      0,      0}, 0, {   462,    -18}, {0x7d, 0xee, 0xf8, 0xff}}},
};

// 0x0600D048
static const Vtx ground_mine_seg6_vertex_0600D048[] = {
    {{{   -59,      0,      0}, 0, {   452,     20}, {0x83, 0xee, 0xf8, 0xff}}},
    {{{   -36,      0,     -9}, 0, {    -4,    974}, {0xd2, 0xf9, 0x8a, 0xff}}},
    {{{   -36,     -8,      0}, 0, {   948,    980}, {0xd7, 0x89, 0xfd, 0xff}}},
    {{{    37,      0,     10}, 0, {   -10,    970}, {0x32, 0xf9, 0x74, 0xff}}},
    {{{    37,     -8,      0}, 0, {   960,    966}, {0x29, 0x89, 0xfd, 0xff}}},
    {{{    60,      0,      0}, 0, {   488,     -8}, {0x7d, 0xee, 0xf8, 0xff}}},
    {{{   -59,      0,      0}, 0, {   370,     10}, {0x83, 0xee, 0xf8, 0xff}}},
    {{{   -36,      0,     10}, 0, {    -6,    964}, {0xce, 0xf9, 0x74, 0xff}}},
    {{{   -36,     10,      0}, 0, {   950,    968}, {0xce, 0x74, 0xfd, 0xff}}},
    {{{   -59,      0,      0}, 0, {   428,     12}, {0x83, 0xee, 0xf8, 0xff}}},
    {{{   -36,     10,      0}, 0, {     8,    968}, {0xce, 0x74, 0xfd, 0xff}}},
    {{{   -36,      0,     -9}, 0, {   938,    974}, {0xd2, 0xf9, 0x8a, 0xff}}},
    {{{   -59,      0,      0}, 0, {   464,    -18}, {0x83, 0xee, 0xf8, 0xff}}},
    {{{   -36,     -8,      0}, 0, {    -4,    966}, {0xd7, 0x89, 0xfd, 0xff}}},
    {{{   -36,      0,     10}, 0, {   964,    974}, {0xce, 0xf9, 0x74, 0xff}}},
};

// 0x0600D138
static const Vtx ground_mine_seg6_vertex_0600D138[] = {
    {{{     0,      0,    -59}, 0, {   464,      4}, {0xf8, 0xee, 0x83, 0xff}}},
    {{{     0,     10,    -36}, 0, {   -14,    968}, {0xfd, 0x74, 0xce, 0xff}}},
    {{{    10,      0,    -36}, 0, {   942,    976}, {0x74, 0xf9, 0xce, 0xff}}},
    {{{     0,      0,    -59}, 0, {   480,    -20}, {0xf8, 0xee, 0x83, 0xff}}},
    {{{    -9,      0,    -36}, 0, {    20,    962}, {0x8a, 0xf9, 0xd2, 0xff}}},
    {{{     0,     10,    -36}, 0, {   946,    966}, {0xfd, 0x74, 0xce, 0xff}}},
    {{{     0,      0,    -59}, 0, {   412,      6}, {0xf8, 0xee, 0x83, 0xff}}},
    {{{    10,      0,    -36}, 0, {   -16,    970}, {0x74, 0xf9, 0xce, 0xff}}},
    {{{     0,     -8,    -36}, 0, {   968,    968}, {0xfd, 0x89, 0xd7, 0xff}}},
    {{{     0,      0,    -59}, 0, {   402,      8}, {0xf8, 0xee, 0x83, 0xff}}},
    {{{     0,     -8,    -36}, 0, {     0,    970}, {0xfd, 0x89, 0xd7, 0xff}}},
    {{{    -9,      0,    -36}, 0, {   952,    964}, {0x8a, 0xf9, 0xd2, 0xff}}},
};


// 0x0600D1F8 - 0x0600D230
const Gfx ground_mine_seg6_dl_0600D1F8[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, ground_mine_seg6_texture_0600A4F8),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(ground_mine_seg6_vertex_0600CCF8, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x0600D268 - 0x0600D2E0
const Gfx ground_mine_seg6_dl_0600D268[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGBA, G_CC_MODULATERGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(ground_mine_seg6_dl_0600D1F8),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x0600D2E0 - 0x0600D3F8
const Gfx ground_mine_seg6_dl_0600D2E0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, ground_mine_seg6_texture_0600C4F8),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&ground_mine_seg6_lights_0600A4E0.l, 1),
    gsSPLight(&ground_mine_seg6_lights_0600A4E0.a, 2),
    gsSPVertex(ground_mine_seg6_vertex_0600CE68, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSPVertex(ground_mine_seg6_vertex_0600CF58, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    gsSP1Triangle(12, 13, 14, 0x0),
    gsSPVertex(ground_mine_seg6_vertex_0600D048, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    gsSP1Triangle(12, 13, 14, 0x0),
    gsSPVertex(ground_mine_seg6_vertex_0600D138, 12, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    gsSPEndDisplayList(),
};

// 0x0600D3F8 - 0x0600D458
const Gfx ground_mine_seg6_dl_0600D3F8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(ground_mine_seg6_dl_0600D2E0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};
