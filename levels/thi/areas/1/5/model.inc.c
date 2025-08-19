// 0x07007348 - 0x07007388
static const Vtx thi_seg7_vertex_07007348[] = {
    {{{  4690,   -511,   2131}, 0, {     0,      0}, {0x00, 0x00, 0x00, 0xb4}}},
    {{{  4690,   -511,   2377}, 0, {     0,    990}, {0x00, 0x00, 0x00, 0xb4}}},
    {{{  4936,   -511,   2377}, 0, {   990,    990}, {0x00, 0x00, 0x00, 0xb4}}},
    {{{  4936,   -511,   2131}, 0, {   990,      0}, {0x00, 0x00, 0x00, 0xb4}}},
};

// 0x07007388 - 0x070073C0
static const Gfx thi_seg7_dl_07007388[] = {
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, grass_0900B000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&thi_seg7_lights_07001000.l, 1),
    gsSPLight(&thi_seg7_lights_07001000.a, 2),
    gsSPVertex(thi_seg7_vertex_07007348, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x070073C0 - 0x07007430
const Gfx thi_seg7_dl_070073C0[] = {
    gsDPPipeSync(),
	gsDPSetCycleType(G_CYC_2CYCLE),
	gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
	gsDPSetDepthSource(G_ZS_PIXEL),
	gsDPSetFogColor(STAGE13_FOG_R, STAGE13_FOG_G, STAGE13_FOG_B, 255),
	gsSPFogPosition(STAGE13_FOG_START, 1000),
	gsSPSetGeometryMode(G_FOG),
	gsDPSetEnvColor(255, 255, 255, 255),
    gsDPSetCombineMode(G_CC_MODULATEIFADEA, G_CC_PASS2),
	gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(thi_seg7_dl_07007388),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
	gsDPSetCycleType(G_CYC_1CYCLE),
	gsDPSetRenderMode(G_RM_AA_ZB_XLU_DECAL, G_RM_NOOP2),
	gsSPClearGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
	gsDPSetEnvColor(255, 255, 255, 255),
    gsSPEndDisplayList(),
};
