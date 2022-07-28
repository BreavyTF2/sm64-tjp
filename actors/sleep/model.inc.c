static const Vtx sleep_particle_vertex[] = {
    {{{   -25,    -25,      0}, 0, {     0,    992}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    25,    -25,      0}, 0, {   992,    992}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    25,     25,      0}, 0, {   992,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,     25,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x0302C6A0
ALIGNED8 static const u8 sleep_particle_texture[] = {
#include "actors/sleep/sleep_particle.ia16.inc.c"
};

// 0x05007AF8 - 0x05007B68
const Gfx sleep_particle_dl[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetCombineMode(G_CC_MODULATEIFADEA, G_CC_MODULATEIFADEA),
    gsDPLoadTextureBlock(sleep_particle_texture, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(sleep_particle_vertex, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPEndDisplayList(),
};
