// 0x07002000 - 0x07002080
static const Vtx bitdw_seg7_vertex_07002000[] = {
    {{{  2516,  -2357,   2962}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2415,  -2440,   3024}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2517,  -2439,   3023}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  2413,  -2358,   2962}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -3038,  -2766,   2960}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -3139,  -2849,   3023}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -3037,  -2848,   3022}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{ -3141,  -2768,   2961}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
};
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"
static Vtx vtx_e1_pika_0[] = {
	{  -7924,    779,   -479,     0,  1076,   224,  -115,  -16,  -29,  255}, 
	{  -7623,    592,     83,     0,     0,   224,  -115,  -16,  -29,  255}, 
	{  -7930,    682,   -509,     0,  1076,   478,  -115,  -16,  -29,  255}, 
	{  -7629,    494,     54,     0,     0,   480,  -115,  -16,  -29,  255}, 
	{  -7531,    534,    256,     0,  1076,   224,  -115,  -16,  -29,  255}, 
	{  -7207,    332,    863,     0,     0,   224,  -115,  -16,  -29,  255}, 
	{  -7537,    436,    227,     0,  1076,   478,  -115,  -16,  -29,  255}, 
	{  -7213,    234,    834,     0,     0,   480,  -115,  -16,  -29,  255}, 
	{  -7067,   1024,  -2453,     0,  1076,   224,  -115,  -16,  -29,  255}, 
	{  -7355,    960,  -1877,     0,     0,   224,  -115,  -16,  -29,  255}, 
	{  -7067,    922,  -2453,     0,  1076,   478,  -115,  -16,  -29,  255}, 
	{  -7361,    862,  -1906,     0,     0,   480,  -115,  -16,  -29,  255}, 
};

static Gfx gfx_e1_pika_0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bitdw_seg7_texture_07002000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPVertex(&vtx_e1_pika_0[0], 12, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 1, 3, 2, 0),
	gsSP1Triangle( 4, 5, 6, 0),
	gsSP1Triangle( 5, 7, 6, 0),
	gsSP1Triangle( 8, 9,10, 0),
	gsSP1Triangle( 9,11,10, 0),
	gsSPEndDisplayList() 
};
// 0x07002080 - 0x070020C8
static const Gfx bitdw_seg7_dl_07002080[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, texture_metal_hole),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(bitdw_seg7_vertex_07002000, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  7,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x070020C8 - 0x07002138
const Gfx bitdw_seg7_dl_070020C8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(bitdw_seg7_dl_07002080),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};
const Gfx gfx_e1_pika[] = {
	gsDPPipeSync(),
	gsDPSetEnvColor(255,255,255,180),
	gsDPSetCombineMode(G_CC_MODULATERGBFADEA, G_CC_MODULATERGBFADEA),
	gsSPClearGeometryMode(G_LIGHTING| G_CULL_BACK), 
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32,  0, 0, G_TX_CLAMP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_CLAMP|G_TX_NOMIRROR, 5, G_TX_NOLOD),

		gsSPDisplayList(gfx_e1_pika_0),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPSetGeometryMode(G_LIGHTING| G_CULL_BACK), 
	gsDPSetEnvColor(255,255,255,255),
	gsSPEndDisplayList() 
};
#pragma GCC diagnostic pop
