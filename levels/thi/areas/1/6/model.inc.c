// 0x070075A8 - 0x070075C0
static const Lights1 thi_seg7_lights_070075A8 = gdSPDefLights1(
    0x1f, 0x1f, 0x1f,
    0x7f, 0x7f, 0x7f, 0x0a, 0x0a, 0x0a
);

// 0x070075C0 - 0x07007600
static const Vtx thi_seg7_vertex_070075C0[] = {
    {{{  -101,      0,   -101}, 0, {   406,    406}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{  -101,      0,    102}, 0, {   406,    552}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   102,      0,   -101}, 0, {   552,    406}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{   102,      0,    102}, 0, {   552,    552}, {0x00, 0x7f, 0x00, 0xff}}},
};

// 0x07007600 - 0x07007648
static const Gfx thi_seg7_dl_07007600[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, thi_seg7_texture_07000800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&thi_seg7_lights_070075A8.l, 1),
    gsSPLight(&thi_seg7_lights_070075A8.a, 2),
    gsSPVertex(thi_seg7_vertex_070075C0, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x07007648 - 0x070076A8
const Gfx thi_seg7_dl_07007648[] = {
    gsDPPipeSync(),
	gsDPSetCycleType(G_CYC_2CYCLE),
	gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
	gsDPSetDepthSource(G_ZS_PIXEL),
	gsDPSetFogColor(STAGE13_FOG_R, STAGE13_FOG_G, STAGE13_FOG_B, 255),
	gsSPFogPosition(STAGE13_FOG_START, 1000),
	gsSPSetGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_PASS2),
	gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(thi_seg7_dl_07007600),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
	gsDPSetCycleType(G_CYC_1CYCLE),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_NOOP2),
	gsSPClearGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

