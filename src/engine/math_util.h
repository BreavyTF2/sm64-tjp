#ifndef MATH_UTIL_H
#define MATH_UTIL_H

#include <PR/ultratypes.h>

#include "types.h"

/*
 * The sine and cosine tables overlap, but "#define gCosineTable (gSineTable +
 * 0x400)" doesn't give expected codegen; gSineTable and gCosineTable need to
 * be different symbols for code to match. Most likely the tables were placed
 * adjacent to each other, and gSineTable cut short, such that reads overflow
 * into gCosineTable.
 *
 * These kinds of out of bounds reads are undefined behavior, and break on
 * e.g. GCC (which doesn't place the tables next to each other, and probably
 * exploits array sizes for range analysis-based optimizations as well).
 * Thus, for non-IDO compilers we use the standard-compliant version.
 */
extern f32 gSineTable[];
#ifdef AVOID_UB
#define gCosineTable (gSineTable + 0x400)
#else
extern f32 gCosineTable[];
#endif

#define sins(x) gSineTable[(u16) (x) >> 4]
#define coss(x) gCosineTable[(u16) (x) >> 4]

#define min(a, b) ((a) <= (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

#define sqr(x) ((x) * (x))

#define vec2_prod(dst, src1, src2) {    \
    (dst)[0] = ((src1)[0] * (src2)[0]); \
    (dst)[1] = ((src1)[1] * (src2)[1]); \
}
#define vec3_prod(dst, src1, src2) {    \
    vec2_prod((dst), (src1), (src2));   \
    (dst)[2] = ((src1)[2] * (src2)[2]); \
}

#define MTXF_END(mtx) {                         \
    (mtx)[0][3] = (mtx)[1][3] = (mtx)[2][3] = 0;\
    ((u32 *)(mtx))[15] = 0x3F800000;             \
}

void *vec3f_copy(Vec3f dest, Vec3f src);
void *vec3f_set(Vec3f dest, const f32 x, const f32 y, const f32 z);
void *vec3f_add(Vec3f dest, Vec3f a);
void *vec3f_sum(Vec3f dest, Vec3f a, Vec3f b);
void *vec3s_copy(Vec3s dest, Vec3s src);
void *vec3s_set(Vec3s dest, const s16 x, const s16 y, const s16 z);
void *vec3s_add(Vec3s dest, Vec3s a);
void *vec3s_sum(Vec3s dest, Vec3s a, Vec3s b);
#define vec2_sumsq(v)       (  sqr((v)[0]) + sqr((v)[1]))
#define vec3_sumsq(v)       (vec2_sumsq(v) + sqr((v)[2]))
void *vec3s_sub(Vec3s dest, Vec3s a);
void *vec3s_to_vec3f(Vec3f dest, Vec3s a);
void *vec3f_to_vec3s(Vec3s dest, Vec3f a);
#define vec2_set(dst, x, y) {           \
    (dst)[0] = (x);                     \
    (dst)[1] = (y);                     \
}
#define vec3_set(dst, x, y, z) {        \
    vec2_set((dst), (x), (y));          \
    (dst)[2] = (z);                     \
}
#define vec4_set(dst, x, y, z, w) {     \
    vec3_set((dst), (x), (y), (z));     \
    (dst)[3] = (w);                     \
}
#define vec2_diff(dst, src1, src2) {    \
    (dst)[0] = ((src1)[0] - (src2)[0]); \
    (dst)[1] = ((src1)[1] - (src2)[1]); \
}
#define vec3_diff(dst, src1, src2) {    \
    vec2_diff((dst), (src1), (src2));   \
    (dst)[2] = ((src1)[2] - (src2)[2]); \
}
#define vec4_diff(dst, src1, src2) {    \
    vec3_diff((dst), (src1), (src2));   \
    (dst)[3] = ((src1)[3] - (src2)[3]); \
}
#define vec2_copy(dst, src) {           \
    (dst)[0] = (src)[0];                \
    (dst)[1] = (src)[1];                \
}
#define vec3_copy(dst, src) {           \
    vec2_copy((dst), (src));            \
    (dst)[2] = (src)[2];                \
}
#define vec2_dot(a, b)       (((a)[0] * (b)[0]) + ((a)[1] * (b)[1]))
#define vec3_dot(a, b)      (vec2_dot((a), (b)) + ((a)[2] * (b)[2]))
#define vec4_dot(a, b)      (vec3_dot((a), (b)) + ((a)[3] * (b)[3]))
#define find_vector_perpendicular_to_plane(dest, a, b, c) {                                     \
    (dest)[0] = ((b)[1] - (a)[1]) * ((c)[2] - (b)[2]) - ((c)[1] - (b)[1]) * ((b)[2] - (a)[2]);  \
    (dest)[1] = ((b)[2] - (a)[2]) * ((c)[0] - (b)[0]) - ((c)[2] - (b)[2]) * ((b)[0] - (a)[0]);  \
    (dest)[2] = ((b)[0] - (a)[0]) * ((c)[1] - (b)[1]) - ((c)[0] - (b)[0]) * ((b)[1] - (a)[1]);  \
}
#define vec2_prod_val(dst, src, x) {    \
    (dst)[0] = ((src)[0] * (x));        \
    (dst)[1] = ((src)[1] * (x));        \
}
#define vec3_prod_val(dst, src, x) {    \
    vec2_prod_val((dst), (src), (x));   \
    (dst)[2] = ((src)[2] * (x));        \
}
#define vec4_prod_val(dst, src, x) {    \
    vec3_prod_val((dst), (src), (x));   \
    (dst)[3] = ((src)[3] * (x));        \
}

#define vec2_mul_val(dst, x) vec2_prod_val(dst, dst, x)
#define vec3_mul_val(dst, x) vec3_prod_val(dst, dst, x)
#define vec4_mul_val(dst, x) vec4_prod_val(dst, dst, x)

void *vec3f_cross(Vec3f dest, Vec3f a, Vec3f b);
void *vec3f_normalize(Vec3f dest);
void vec3f_get_yaw(Vec3f from, Vec3f to, s16 *yaw);
void mtxf_copy(Mat4 dest, Mat4 src);
void mtxf_identity(Mat4 mtx);
void mtxf_translate(Mat4 dest, Vec3f b);
void mtxf_lookat(Mat4 mtx, Vec3f from, Vec3f to, s16 roll);
void mtxf_rotate_zxy_and_translate(Mat4 dest, Vec3f translate, Vec3s rotate);
void mtxf_rotate_xyz_and_translate(Mat4 dest, Vec3f b, Vec3s c);
void mtxf_billboard(Mat4 dest, Mat4 mtx, Vec3f position, s16 angle);
void mtxf_align_terrain_normal(Mat4 dest, Vec3f upDir, Vec3f pos, s16 yaw);
void mtxf_align_terrain_triangle(Mat4 mtx, Vec3f pos, s16 yaw, f32 radius);
void mtxf_mul(Mat4 dest, Mat4 a, Mat4 b);
void mtxf_scale_vec3f(Mat4 dest, Mat4 mtx, Vec3f s);
void mtxf_mul_vec3s(Mat4 mtx, Vec3s b);
void mtxf_to_mtx(Mtx *dest, Mat4 src);
void mtxf_rotate_xy(Mtx *mtx, s16 angle);
void get_pos_from_transform_mtx(Vec3f dest, Mat4 objMtx, Mat4 camMtx);
void vec3f_get_dist_and_angle(Vec3f from, Vec3f to, f32 *dist, s16 *pitch, s16 *yaw);
void vec3f_set_dist_and_angle(Vec3f from, Vec3f to, f32  dist, s16  pitch, s16  yaw);
s32 approach_s32(s32 current, s32 target, s32 inc, s32 dec);
f32 approach_f32(f32 current, f32 target, f32 inc, f32 dec);
s16 atan2s(f32 y, f32 x);
f32 atan2f(f32 a, f32 b);
void spline_get_weights(Vec4f result, f32 t, UNUSED s32 c);
void anim_spline_init(Vec4s *keyFrames);
s32 anim_spline_poll(Vec3f result);

#endif // MATH_UTIL_H
