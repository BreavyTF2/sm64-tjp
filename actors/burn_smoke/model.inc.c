// Burn Smoke

// 0x040217C0
static const Vtx burn_smoke_seg4_vertex_040217C0[] = {
    {{{   -50,    -50,      0}, 0, {     0,    992}, {0x14, 0x0a, 0x0a, 0xff}}},
    {{{    50,    -50,      0}, 0, {   992,    992}, {0x14, 0x0a, 0x0a, 0xff}}},
    {{{    50,     50,      0}, 0, {   992,      0}, {0x14, 0x0a, 0x0a, 0xff}}},
    {{{   -50,     50,      0}, 0, {     0,      0}, {0x14, 0x0a, 0x0a, 0xff}}},
};

// 0x04022000 - 0x04022028
const Gfx burn_smoke_seg4_dl_04022000[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPEndDisplayList(),
};

// 0x04022028 - 0x04022048
const Gfx burn_smoke_seg4_dl_04022028[] = {
    gsSPVertex(burn_smoke_seg4_vertex_040217C0, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x04022048 - 0x04022070
const Gfx burn_smoke_seg4_dl_04022048[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x04022070 - 0x040220C8
const Gfx burn_smoke_seg4_dl_04022070[] = {
    gsSPDisplayList(burn_smoke_seg4_dl_04022000),
    gsDPLoadTextureBlock(smoke_seg4_texture_0401DEA0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(burn_smoke_seg4_dl_04022028),
    gsSPDisplayList(burn_smoke_seg4_dl_04022048),
    gsSPEndDisplayList(),
};

// 0x04022070 - 0x040220C8
const Gfx burn_smoke_seg4_dl_04022071[] = {
    gsSPDisplayList(burn_smoke_seg4_dl_04022000),
    gsDPLoadTextureBlock(smoke_seg4_texture_0401E6A0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(burn_smoke_seg4_dl_04022028),
    gsSPDisplayList(burn_smoke_seg4_dl_04022048),
    gsSPEndDisplayList(),
};

// 0x04022070 - 0x040220C8
const Gfx burn_smoke_seg4_dl_04022072[] = {
    gsSPDisplayList(burn_smoke_seg4_dl_04022000),
    gsDPLoadTextureBlock(smoke_seg4_texture_0401EEA0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(burn_smoke_seg4_dl_04022028),
    gsSPDisplayList(burn_smoke_seg4_dl_04022048),
    gsSPEndDisplayList(),
};

// 0x04022070 - 0x040220C8
const Gfx burn_smoke_seg4_dl_04022073[] = {
    gsSPDisplayList(burn_smoke_seg4_dl_04022000),
    gsDPLoadTextureBlock(smoke_seg4_texture_0401F6A0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(burn_smoke_seg4_dl_04022028),
    gsSPDisplayList(burn_smoke_seg4_dl_04022048),
    gsSPEndDisplayList(),
};

// 0x04022070 - 0x040220C8
const Gfx burn_smoke_seg4_dl_04022074[] = {
    gsSPDisplayList(burn_smoke_seg4_dl_04022000),
    gsDPLoadTextureBlock(smoke_seg4_texture_0401FEA0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(burn_smoke_seg4_dl_04022028),
    gsSPDisplayList(burn_smoke_seg4_dl_04022048),
    gsSPEndDisplayList(),
};

// 0x04022070 - 0x040220C8
const Gfx burn_smoke_seg4_dl_04022075[] = {
    gsSPDisplayList(burn_smoke_seg4_dl_04022000),
    gsDPLoadTextureBlock(smoke_seg4_texture_040206A0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(burn_smoke_seg4_dl_04022028),
    gsSPDisplayList(burn_smoke_seg4_dl_04022048),
    gsSPEndDisplayList(),
};

// 0x04022070 - 0x040220C8
const Gfx burn_smoke_seg4_dl_04022076[] = {
    gsSPDisplayList(burn_smoke_seg4_dl_04022000),
    gsDPLoadTextureBlock(smoke_seg4_texture_04020EA0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(burn_smoke_seg4_dl_04022028),
    gsSPDisplayList(burn_smoke_seg4_dl_04022048),
    gsSPEndDisplayList(),
};
