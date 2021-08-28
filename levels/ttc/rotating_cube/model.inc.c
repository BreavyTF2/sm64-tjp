// 0x0700E950 - 0x0700E968
static const Lights1 ttc_seg7_lights_0700E950 = gdSPDefLights1(
    0x55, 0x55, 0x55,
    0xaa, 0xaa, 0xaa, 0x28, 0x28, 0x28
);

// 0x0700E968 - 0x0700E980
static const Lights1 ttc_seg7_lights_0700E968 = gdSPDefLights1(
    0x7f, 0x7f, 0x7f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0700E980 - 0x0700EA20
static const Vtx ttc_seg7_vertex_0700E980[] = {
    {{{  -199,    200,   -199}, 0, {  2012,      0}, {0xd6, 0x54, 0xac, 0xff}}},
    {{{     0,      0,   -199}, 0, {   478,   1340}, {0x00, 0x00, 0x81, 0xff}}},
    {{{  -199,   -199,   -199}, 0, { -1052,      0}, {0xac, 0xd6, 0xac, 0xff}}},
    {{{   200,   -199,   -199}, 0, {  2012,      0}, {0x2a, 0xac, 0xac, 0xff}}},
    {{{   200,    200,   -199}, 0, { -1052,      0}, {0x54, 0x2a, 0xac, 0xff}}},
    {{{   200,    200,    200}, 0, { -1052,      0}, {0x2a, 0x54, 0x54, 0xff}}},
    {{{     0,      0,    200}, 0, {   478,   1340}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   200,   -199,    200}, 0, {  2012,      0}, {0x54, 0xd6, 0x54, 0xff}}},
    {{{  -199,   -199,    200}, 0, { -1052,      0}, {0xd6, 0xac, 0x54, 0xff}}},
    {{{  -199,    200,    200}, 0, {  2012,      0}, {0xac, 0x2a, 0x54, 0xff}}},
};

// 0x0700EA20 - 0x0700EAC0
static const Vtx ttc_seg7_vertex_0700EA20[] = {
    {{{  -199,   -199,   -199}, 0, {  2012,      0}, {0xac, 0xd6, 0xac, 0xff}}},
    {{{     0,      0,   -199}, 0, {   478,   1340}, {0x00, 0x00, 0x81, 0xff}}},
    {{{   200,   -199,   -199}, 0, { -1052,      0}, {0x2a, 0xac, 0xac, 0xff}}},
    {{{   200,    200,   -199}, 0, {  2012,      0}, {0x54, 0x2a, 0xac, 0xff}}},
    {{{  -199,    200,   -199}, 0, { -1052,      0}, {0xd6, 0x54, 0xac, 0xff}}},
    {{{   200,   -199,    200}, 0, { -1052,      0}, {0x54, 0xd6, 0x54, 0xff}}},
    {{{     0,      0,    200}, 0, {   478,   1340}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -199,   -199,    200}, 0, {  2012,      0}, {0xd6, 0xac, 0x54, 0xff}}},
    {{{  -199,    200,    200}, 0, { -1052,      0}, {0xac, 0x2a, 0x54, 0xff}}},
    {{{   200,    200,    200}, 0, {  2012,      0}, {0x2a, 0x54, 0x54, 0xff}}},
};

// 0x0700EAC0 - 0x0700EBC0
static const Vtx ttc_seg7_vertex_0700EAC0[] = {
    {{{   200,   -199,   -199}, 0, {     0,    990}, {0x2a, 0xac, 0xac, 0xff}}},
    {{{   200,   -199,    200}, 0, {   990,    990}, {0x54, 0xd6, 0x54, 0xff}}},
    {{{  -199,   -199,    200}, 0, {   990,      0}, {0xd6, 0xac, 0x54, 0xff}}},
    {{{  -199,    200,   -199}, 0, {     0,    990}, {0xd6, 0x54, 0xac, 0xff}}},
    {{{  -199,    200,    200}, 0, {   990,    990}, {0xac, 0x2a, 0x54, 0xff}}},
    {{{   200,    200,    200}, 0, {   990,      0}, {0x2a, 0x54, 0x54, 0xff}}},
    {{{   200,    200,   -199}, 0, {     0,      0}, {0x54, 0x2a, 0xac, 0xff}}},
    {{{  -199,    200,    200}, 0, {   990,      0}, {0xac, 0x2a, 0x54, 0xff}}},
    {{{  -199,   -199,   -199}, 0, {     0,    990}, {0xac, 0xd6, 0xac, 0xff}}},
    {{{  -199,   -199,    200}, 0, {   990,    990}, {0xd6, 0xac, 0x54, 0xff}}},
    {{{  -199,    200,   -199}, 0, {     0,      0}, {0xd6, 0x54, 0xac, 0xff}}},
    {{{   200,    200,   -199}, 0, {     0,    990}, {0x54, 0x2a, 0xac, 0xff}}},
    {{{   200,   -199,    200}, 0, {   990,      0}, {0x54, 0xd6, 0x54, 0xff}}},
    {{{   200,   -199,   -199}, 0, {     0,      0}, {0x2a, 0xac, 0xac, 0xff}}},
    {{{   200,    200,    200}, 0, {   990,    990}, {0x2a, 0x54, 0x54, 0xff}}},
    {{{  -199,   -199,   -199}, 0, {     0,      0}, {0xac, 0xd6, 0xac, 0xff}}},
};

// 0x0700EBC0 - 0x0700EC50
static const Gfx ttc_seg7_dl_0700EBC0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, machine_09001000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&ttc_seg7_lights_0700E950.l, 1),
    gsSPLight(&ttc_seg7_lights_0700E950.a, 2),
    gsSPVertex(ttc_seg7_vertex_0700E980, 10, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  4, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  8,  6,  9, 0x0),
    gsSPLight(&ttc_seg7_lights_0700E968.l, 1),
    gsSPLight(&ttc_seg7_lights_0700E968.a, 2),
    gsSPVertex(ttc_seg7_vertex_0700EA20, 10, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  4, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  8,  6,  9, 0x0),
    gsSPEndDisplayList(),
};

// 0x0700EC50 - 0x0700ECB8
static const Gfx ttc_seg7_dl_0700EC50[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, machine_09005000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(ttc_seg7_vertex_0700EAC0, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  5,  6, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 7, 10,  8, 0x0, 11, 12, 13, 0x0),
    gsSP2Triangles(11, 14, 12, 0x0,  0,  2, 15, 0x0),
    gsSPEndDisplayList(),
};

// 0x0700ECB8 - 0x0700ED68
const Gfx ttc_seg7_dl_0700ECB8[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetDepthSource(G_ZS_PIXEL),
    gsDPSetFogColor(200, 255, 255, 255),
    gsSPFogPosition(900, 1000),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_PASS2),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(ttc_seg7_dl_0700EBC0),
    gsSPDisplayList(ttc_seg7_dl_0700EC50),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_NOOP2),
    gsSPClearGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"
static Vtx vtx_mecha_obj01a_0[] = {
	{     72,    -71,   -204,     0,   990,  2012,    -1,   -1,   -1,  255}, 
	{    -71,     72,   -204,     0,     0,     0,    -1,   -1,   -1,  255}, 
	{     72,     72,   -204,     0,   990,     0,    -1,   -1,   -1,  255}, 
	{    -71,    -71,   -204,     0,     0,  2012,    -1,   -1,   -1,  255}, 
	{     72,     72,    205,     0,   990,     0,    -1,   -1,   -1,  255}, 
	{    -71,    -71,    205,     0,     0,  2012,    -1,   -1,   -1,  255}, 
	{     72,    -71,    205,     0,   990,  2012,    -1,   -1,   -1,  255}, 
	{    -71,     72,    205,     0,     0,     0,    -1,   -1,   -1,  255}, 
};

static Gfx gfx_mecha_obj01a_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, machine_09004000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPVertex(&vtx_mecha_obj01a_0[0],  8, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 3, 1, 0),
	gsSP1Triangle( 4, 5, 6, 0),
	gsSP1Triangle( 4, 7, 5, 0),
	gsSPEndDisplayList() 
};

const Gfx gfx_mecha_obj01a[] = {
	gsDPPipeSync(),

	gsDPSetCycleType(G_CYC_2CYCLE),
	gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
	gsDPSetDepthSource(G_ZS_PIXEL),
    gsDPSetFogColor(200, 255, 255, 255),
    gsSPFogPosition(900, 1000),
	gsSPSetGeometryMode(G_FOG),

	gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_PASS2),
	gsSPClearGeometryMode(G_LIGHTING), 
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64,  0, 0, G_TX_CLAMP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_CLAMP|G_TX_NOMIRROR, 6, G_TX_NOLOD),

		gsSPDisplayList(gfx_mecha_obj01a_0),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCycleType(G_CYC_1CYCLE),
	gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE),
	gsSPClearGeometryMode(G_FOG),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPSetGeometryMode(G_LIGHTING), 
	gsSPEndDisplayList() 
};
#pragma GCC diagnostic pop
