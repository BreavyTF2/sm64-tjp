// Cannon Base

// 0x08004988
static const Lights1 cannon_base_seg8_lights_08004988 = gdSPDefLights1(
    0x4c, 0x4c, 0x4c,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x080049A0
static const Lights1 cannon_base_seg8_lights_080049A0 = gdSPDefLights1(
    0x0e, 0x10, 0x4c,
    0x30, 0x37, 0xff, 0x28, 0x28, 0x28
);

// 0x080049B8
ALIGNED8 static const u8 cannon_base_seg8_texture_080049B8[] = {
#include "actors/cannon_base/cannon_base.rgba16.inc.c"
};

// 0x080051B8
static const Vtx cannon_base_seg8_vertex_080051B8[] = {
	{    102,      0,     51,     0,     0,   990,   127,    0,    0,  255}, 
	{    102,      0,    -50,     0,   990,   990,   127,    0,    0,  255}, 
	{    102,     51,    -50,     0,   990,   308,   127,    0,    0,  255}, 
	{    102,     77,    -25,     0,   734,     0,   127,    0,    0,  255}, 
	{    102,     77,     26,     0,   224,     0,   127,    0,    0,  255}, 
	{    102,     51,     51,     0,     0,   308,   127,    0,    0,  255}, 
	{   -101,     51,    -50,     0,     0,   308,   129,    0,    0,  255}, 
	{   -101,     77,     26,     0,   734,     0,   129,    0,    0,  255}, 
	{   -101,     77,    -25,     0,   224,     0,   129,    0,    0,  255}, 
	{   -101,     51,     51,     0,   990,   308,   129,    0,    0,  255}, 
	{   -101,      0,     51,     0,   990,   990,   129,    0,    0,  255}, 
	{   -101,      0,    -50,     0,     0,   990,   129,    0,    0,  255}, 
};

// 0x08005278
static const Vtx cannon_base_seg8_vertex_08005278[] = {
	{   -101,     51,    -50,     0,     0,     0,     0,    0,  129,  255}, 
	{    -50,      0,    -50,     0,     0,     0,     0,    0,  129,  255}, 
	{   -101,      0,    -50,     0,     0,     0,     0,    0,  129,  255}, 
	{    102,      0,    -50,     0,     0,     0,     0,    0,  129,  255}, 
	{     51,      0,    -50,     0,     0,     0,     0,    0,  129,  255}, 
	{     51,     51,    -50,     0,     0,     0,     0,    0,  129,  255}, 
	{    102,     51,    -50,     0,     0,     0,     0,    0,  129,  255}, 
	{    102,     51,    -50,     0,     0,     0,     0,   88,  165,  255}, 
	{     51,     51,    -50,     0,     0,     0,     0,   88,  165,  255}, 
	{     51,     77,    -25,     0,     0,     0,     0,   88,  165,  255}, 
	{    102,     77,    -25,     0,     0,     0,     0,   88,  165,  255}, 
	{    102,     77,    -25,     0,     0,     0,     0,  127,    0,  255}, 
	{     51,     77,    -25,     0,     0,     0,     0,  127,    0,  255}, 
	{     51,     77,     26,     0,     0,     0,     0,  127,    0,  255}, 
	{    102,     77,     26,     0,     0,     0,     0,  127,    0,  255}, 
};

// 0x08005378
static const Vtx cannon_base_seg8_vertex_08005378[] = {
	{    102,     77,     26,     0,     0,     0,     0,   88,   91,  255}, 
	{     51,     77,     26,     0,     0,     0,     0,   88,   91,  255}, 
	{     51,     51,     51,     0,     0,     0,     0,   88,   91,  255}, 
	{    102,     51,     51,     0,     0,     0,     0,   88,   91,  255}, 
	{    102,     51,     51,     0,     0,     0,     0,    0,  127,  255}, 
	{     51,     51,     51,     0,     0,     0,     0,    0,  127,  255}, 
	{     51,      0,     51,     0,     0,     0,     0,    0,  127,  255}, 
	{    102,      0,     51,     0,     0,     0,     0,    0,  127,  255}, 
	{   -101,     77,     26,     0,     0,     0,     0,  127,    0,  255}, 
	{    -50,     77,    -25,     0,     0,     0,     0,  127,    0,  255}, 
	{   -101,     77,    -25,     0,     0,     0,     0,  127,    0,  255}, 
	{   -101,     77,    -25,     0,     0,     0,     0,   88,  165,  255}, 
	{    -50,     51,    -50,     0,     0,     0,     0,   88,  165,  255}, 
	{   -101,     51,    -50,     0,     0,     0,     0,   88,  165,  255}, 
	{    -50,     77,    -25,     0,     0,     0,     0,   88,  165,  255}, 
};

// 0x08005468
static const Vtx cannon_base_seg8_vertex_08005468[] = {
	{   -101,     51,    -50,     0,     0,     0,     0,    0,  129,  255}, 
	{    -50,     51,    -50,     0,     0,     0,     0,    0,  129,  255}, 
	{    -50,      0,    -50,     0,     0,     0,     0,    0,  129,  255}, 
	{   -101,      0,     51,     0,     0,     0,     0,    0,  127,  255}, 
	{    -50,     51,     51,     0,     0,     0,     0,    0,  127,  255}, 
	{   -101,     51,     51,     0,     0,     0,     0,    0,  127,  255}, 
	{    -50,      0,     51,     0,     0,     0,     0,    0,  127,  255}, 
	{   -101,     51,     51,     0,     0,     0,     0,   88,   91,  255}, 
	{    -50,     51,     51,     0,     0,     0,     0,   88,   91,  255}, 
	{    -50,     77,     26,     0,     0,     0,     0,   88,   91,  255}, 
	{   -101,     77,     26,     0,     0,     0,     0,   88,   91,  255}, 
	{   -101,     77,     26,     0,     0,     0,     0,  127,    0,  255}, 
	{    -50,     77,     26,     0,     0,     0,     0,  127,    0,  255}, 
	{    -50,     77,    -25,     0,     0,     0,     0,  127,    0,  255}, 
};

// 0x08005558
static const Vtx cannon_base_seg8_vertex_08005558[] = {
    {{{  -101,   -101,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   -60,     51,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -101,     51,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   -60,   -101,     51}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   -60,   -101,     51}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   -60,     77,    -25}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   -60,     77,     26}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{   -60,     51,     51}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
    {{{  -101,     51,     51}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{   -60,     51,     51}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{   -60,     77,     26}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{  -101,     77,     26}, 0, {     0,      0}, {0x00, 0x58, 0x5b, 0xff}}},
    {{{  -101,     77,     26}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   -60,     77,     26}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   -60,     77,    -25}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -101,     77,    -25}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
};

// 0x08005658 - 0x080056D0
const Gfx cannon_base_seg8_dl_08005658[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, cannon_base_seg8_texture_080049B8),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&cannon_base_seg8_lights_08004988.l, 1),
    gsSPLight(&cannon_base_seg8_lights_08004988.a, 2),
    gsSPVertex(cannon_base_seg8_vertex_080051B8, 12, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),
	gsSP1Triangle( 0, 4, 5, 0),
	gsSP1Triangle( 0, 3, 4, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 6, 9, 7, 0),
	gsSP1Triangle( 6,10, 9, 0),
	gsSP1Triangle( 6,11,10, 0),
    gsSPEndDisplayList(),
};

// 0x080056D0 - 0x080057F8
const Gfx cannon_base_seg8_dl_080056D0[] = {
    gsSPLight(&cannon_base_seg8_lights_080049A0.l, 1),
    gsSPLight(&cannon_base_seg8_lights_080049A0.a, 2),
    gsSPVertex(cannon_base_seg8_vertex_08005278, 15, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 3, 5, 6, 0),
	gsSP1Triangle( 7, 8, 9, 0),
	gsSP1Triangle( 7, 9,10, 0),
	gsSP1Triangle(11,12,13, 0),
	gsSP1Triangle(11,13,14, 0),
    gsSPVertex(cannon_base_seg8_vertex_08005378, 15, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),
	gsSP1Triangle( 4, 5, 6, 0),
	gsSP1Triangle( 4, 6, 7, 0),
	gsSP1Triangle( 8, 9,10, 0),
	gsSP1Triangle(11,12,13, 0),
	gsSP1Triangle(11,14,12, 0),
    gsSPVertex(cannon_base_seg8_vertex_08005468, 14, 0),
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 3, 6, 4, 0),
	gsSP1Triangle( 7, 8, 9, 0),
	gsSP1Triangle( 7, 9,10, 0),
	gsSP1Triangle(11,12,13, 0),
    gsSPEndDisplayList(),
};

// 0x080057F8 - 0x08005870
const Gfx cannon_base_seg8_dl_080057F8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(cannon_base_seg8_dl_08005658),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(cannon_base_seg8_dl_080056D0),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
