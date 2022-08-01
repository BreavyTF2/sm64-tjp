static const Vtx sleep_particle_vertex[] = {
    {{{   -25,    -25,      0}, 0, {     0,    992}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    25,    -25,      0}, 0, {   992,    992}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    25,     25,      0}, 0, {   992,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,     25,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
};
ALIGNED8 static const u8 sleep_particle_texture[] = {
#include "actors/sleep/sleep_particle.ia16.inc.c"
};
ALIGNED8 static const u8 sleep_particle_texture2[] = {
#include "actors/sleep/sleep_particle2.ia16.inc.c"
};
ALIGNED8 static const u8 sleep_particle_texture3[] = {
#include "actors/sleep/sleep_particle3.ia16.inc.c"
};
const Gfx sleep_particle_base_dl[] = {
	gsSPClearGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
	gsDPSetCombineMode(G_CC_TANI_MODULATE_IA_ENV, G_CC_TANI_MODULATE_IA_ENV),
    gsxDPLoadTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0,
			 				G_TX_CLAMP|G_TX_NOMIRROR, G_TX_CLAMP|G_TX_NOMIRROR,
			 				5, 5, G_TX_NOLOD, G_TX_NOLOD),

    gsSPTexture(0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(sleep_particle_vertex, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPTexture(0xffff, 0xffff, 0, G_TX_RENDERTILE, G_OFF),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
	gsDPSetEnvColor(255, 255, 255, 255),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList()
};
const Gfx sleep_particle_dl[] = {
	gsDPPipeSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, sleep_particle_texture),
	gsSPBranchList(sleep_particle_base_dl)
};
const Gfx sleep_particle_dl2[] = {
	gsDPPipeSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, sleep_particle_texture2),
	gsSPBranchList(sleep_particle_base_dl)
};
const Gfx sleep_particle_dl3[] = {
	gsDPPipeSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, sleep_particle_texture3),
	gsSPBranchList(sleep_particle_base_dl)
};
