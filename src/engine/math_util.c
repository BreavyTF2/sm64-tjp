#include <ultra64.h>

#include "sm64.h"
#include "engine/graph_node.h"
#include "math_util.h"
#include "surface_collision.h"

#include "trig_tables.inc.c"

// Variables for a spline curve animation (used for the flight path in the grand star cutscene)
Vec4s *gSplineKeyframe;
float gSplineKeyframeFraction;
int gSplineState;

// These functions have bogus return values.
// Disable the compiler warning.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-local-addr"

/// Copy vector 'src' to 'dest'
void *vec3f_copy(Vec3f dest, Vec3f src) {
    ((u64 *) dest)[0] = ((u64 *) src)[0];
    ((u32 *) dest)[2] = ((u32 *) src)[2];
}

/// Finds the yaw between two vectors.
void vec3f_get_yaw(Vec3f from, Vec3f to, s16 *yaw) {
    register f32 dx = (to[0] - from[0]);
    register f32 dz = (to[2] - from[2]);
    *yaw = atan2s(dz, dx);
}

/// Set vector 'dest' to (x, y, z)
void *vec3f_set(Vec3f dest, const f32 x, const f32 y, const f32 z) { vec3_set(dest, x, y, z); }

/// Add vector 'a' to 'dest'
void *vec3f_add(Vec3f dest, Vec3f a) {
    register f32 *temp = (f32 *)dest;
    register f32 sum, sum2;
    register s32 i;
    for (i = 0; i < 3; i++) {
        sum = *(a);
        (a)++;
        sum2 = *temp;
        *temp = (sum + sum2);
        temp++;
	}
}

/// Make 'dest' the sum of vectors a and b.
void *vec3f_sum(Vec3f dest, Vec3f a, Vec3f b) {
    register f32 *temp = (f32 *)dest;
    register f32 sum, sum2;
    register s32 i;
    for (i = 0; i < 3; i++) {
        sum = *(a);
        (a)++;
        sum2 = *(b);
        (b)++;
        *temp = (sum + sum2);
        temp++;
	}
}

/// Copy vector src to dest
void *vec3s_copy(Vec3s dest, Vec3s src) {
    register s16 x = src[0];
    register s16 y = src[1];
    register s16 z = src[2];
    dest[0] = x;
    dest[1] = y;
    dest[2] = z;
}

void *vec3s_set(Vec3s dest, const s16 x, const s16 y, const s16 z) { vec3_set(dest, x, y, z); }

/// Add vector a to 'dest'
void *vec3s_add(Vec3s dest, Vec3s a) {
    register s16 *temp = (s16 *)dest;
    register s16 sum, sum2;
    register s32 i;
    for (i = 0; i < 3; i++) {
        sum = *(a);
        (a)++;
        sum2 = *temp;
        *temp = (sum + sum2);
        temp++;
	}
}

/// Make 'dest' the sum of vectors a and b.
void *vec3s_sum(Vec3s dest, Vec3s a, Vec3s b) {
    register s16 *temp = (s16 *)dest;
    register s16 sum, sum2;
    register s32 i;
    for (i = 0; i < 3; i++) {
        sum = *(a);
        (a)++;
        sum2 = *(b);
        (b)++;
        *temp = (sum + sum2);
        temp++;
	}
}

/// Subtract vector a from 'dest'
void *vec3s_sub(Vec3s dest, Vec3s a) {
    dest[0] -= a[0];
    dest[1] -= a[1];
    dest[2] -= a[2];
}

/// Convert short vector a to float vector 'dest'
void *vec3s_to_vec3f(Vec3f dest, Vec3s a) {
    dest[0] = a[0];
    dest[1] = a[1];
    dest[2] = a[2];
}

/**
 * Convert float vector a to a short vector 'dest' by rounding the components
 * to the nearest integer.
 */
void *vec3f_to_vec3s(Vec3s dest, Vec3f a) {
    // add/subtract 0.5 in order to round to the nearest s32 instead of truncating
    dest[0] = a[0] + ((a[0] > 0) ? 0.5f : -0.5f);
    dest[1] = a[1] + ((a[1] > 0) ? 0.5f : -0.5f);
    dest[2] = a[2] + ((a[2] > 0) ? 0.5f : -0.5f);
}

/**
 * Set 'dest' the normal vector of a triangle with vertices a, b and c.
 * It is similar to vec3f_cross, but it calculates the vectors (c-b) and (b-a)
 * at the same time.
 */

/// Make vector 'dest' the cross product of vectors a and b.
void *vec3f_cross(Vec3f dest, Vec3f a, Vec3f b) {
    dest[0] = a[1] * b[2] - a[2] * b[1];
    dest[1] = a[2] * b[0] - a[0] * b[2];
    dest[2] = a[0] * b[1] - a[1] * b[0];
}

/// Scale vector 'dest' so it has length 1
void *vec3f_normalize(Vec3f dest) {
    register f32 mag = (sqr(dest[0]) + sqr(dest[1]) + sqr(dest[2]));
    if (mag > 0.00001f) {
        register f32 invsqrt = (1.0f / sqrtf(mag));
        vec3_mul_val(dest, invsqrt);
    } else {
        // Default to up vector.
        dest[0] = 0;
        ((u32 *) dest)[1] = 0x3F800000;
        dest[2] = 0;
    }
}

#pragma GCC diagnostic pop

/// Struct the same data size as a Mat4
struct CopyMat4 {
    f32 a[0x10];
};

/// Copy matrix 'src' to 'dest' by casting to a struct CopyMat4 pointer.
void mtxf_copy(register Mat4 dest, register Mat4 src) {
    *((struct CopyMat4 *) dest) = *((struct CopyMat4 *) src);
}
/**
 * Set mtx to the identity matrix
 */
void mtxf_identity(Mat4 mtx) {
    s32 i;
    f32 *dest;
    for (dest = ((f32 *) mtx + 1), i = 0; i < 14; dest++, i++) {
        *dest = 0;
    }
    for (dest = (f32 *) mtx, i = 0; i < 4; dest += 5, i++) {
        *dest = 1;
    }
}

/**
 * Set dest to a translation matrix of vector b
 */
void mtxf_translate(Mat4 dest, Vec3f b) {
    register s32 i;
    register f32 *pen;
    for (pen = ((f32 *) dest + 1), i = 0; i < 12; pen++, i++) {
        *pen = 0;
    }
    for (pen = (f32 *) dest, i = 0; i < 4; pen += 5, i++) {
        *pen = 1;
    }
    vec3f_copy(&dest[3][0], &b[0]);
}

/**
 * Set mtx to a look-at matrix for the camera. The resulting transformation
 * transforms the world as if there exists a camera at position 'from' pointed
 * at the position 'to'. The up-vector is assumed to be (0, 1, 0), but the 'roll'
 * angle allows a bank rotation of the camera.
 */
void mtxf_lookat(Mat4 mtx, Vec3f from, Vec3f to, s16 roll) {
    Vec3f colX, colY, colZ;
    register f32 dx = (to[0] - from[0]);
    register f32 dz = (to[2] - from[2]);
    f32 invLength = -1.0 / sqrtf(sqr(dx) + sqr(dz));
	f32 sr  = sins(roll);
    dx *= invLength;
    dz *= invLength; 
    colY[1] = coss(roll);
    colY[0] = ( sr * dz);
    colY[2] = (-sr * dx);
    vec3_diff(colZ, from, to); // to & from are swapped
    vec3f_normalize(colZ);
    vec3f_cross(colX, colY, colZ);
    vec3f_normalize(colX);
    vec3f_cross(colY, colZ, colX);
    vec3f_normalize(colY);
    mtx[0][0] = colX[0];
    mtx[1][0] = colX[1];
    mtx[2][0] = colX[2];
    mtx[0][1] = colY[0];
    mtx[1][1] = colY[1];
    mtx[2][1] = colY[2];
    mtx[0][2] = colZ[0];
    mtx[1][2] = colZ[1];
    mtx[2][2] = colZ[2];
    mtx[3][0] = -vec3_dot(from, colX);
    mtx[3][1] = -vec3_dot(from, colY);
    mtx[3][2] = -vec3_dot(from, colZ);
    MTXF_END(mtx);
}

/**
 * Build a matrix that rotates around the z axis, then the x axis, then the y
 * axis, and then translates.
 */
void mtxf_rotate_zxy_and_translate(Mat4 dest, Vec3f translate, Vec3s rotate) {
    register f32 sx   = sins(rotate[0]);
    register f32 cx   = coss(rotate[0]);
    register f32 sy   = sins(rotate[1]);
    register f32 cy   = coss(rotate[1]);
    register f32 sz   = sins(rotate[2]);
    register f32 cz   = coss(rotate[2]);
    register f32 sysz = (sy * sz);
    register f32 cycz = (cy * cz);
    register f32 cysz = (cy * sz);
    register f32 sycz = (sy * cz);
    dest[0][0] = ((sysz * sx) + cycz);
    dest[1][0] = ((sycz * sx) - cysz);
    dest[2][0] = (cx * sy);
    dest[0][1] = (cx * sz);
    dest[1][1] = (cx * cz);
    dest[2][1] = -sx;
    dest[0][2] = ((cysz * sx) - sycz);
    dest[1][2] = ((cycz * sx) + sysz);
    dest[2][2] = (cx * cy);
    vec3f_copy(dest[3], translate);
    MTXF_END(dest);
}

/**
 * Build a matrix that rotates around the x axis, then the y axis, then the z
 * axis, and then translates.
 */
void mtxf_rotate_xyz_and_translate(Mat4 dest, Vec3f b, Vec3s c) {
    register f32 sx   = sins(c[0]);
    register f32 cx   = coss(c[0]);
    register f32 sy   = sins(c[1]);
    register f32 cy   = coss(c[1]);
    register f32 sz   = sins(c[2]);
    register f32 cz   = coss(c[2]);
    register f32 sxcz = (sx * cz);
    register f32 cxsz = (cx * sz);
    register f32 sxsz = (sx * sz);
    register f32 cxcz = (cx * cz);
    dest[0][0] = (cy * cz);
    dest[0][1] = (cy * sz);
    dest[0][2] = -sy;
    dest[1][0] = ((sxcz * sy) - cxsz);;
    dest[1][1] = ((sxsz * sy) + cxcz);
    dest[1][2] = (sx * cy);
    dest[2][0] = ((cxcz * sy) + sxsz);
    dest[2][1] = ((cxsz * sy) - sxcz);
    dest[2][2] = (cx * cy);
    vec3f_copy(dest[3], b);
    MTXF_END(dest);
}

/**
 * Set 'dest' to a transformation matrix that turns an object to face the camera.
 * 'mtx' is the look-at matrix from the camera
 * 'position' is the position of the object in the world
 * 'angle' rotates the object while still facing the camera.
 */
void mtxf_billboard(Mat4 dest, Mat4 mtx, Vec3f position, s16 angle) {
    register s32 i;
    register f32 *temp, *temp2;
    temp = (f32 *)dest;
    for (i = 0; i < 16; i++) {
        *temp = 0;
        temp++;
    }
    if (angle == 0x0) {
        dest[0][0] = 1;
        dest[0][1] = 0;
        dest[1][0] = 0;
        dest[1][1] = 1;
    } else {
        dest[0][0] = coss(angle);
        dest[0][1] = sins(angle);
        dest[1][0] = -dest[0][1];
        dest[1][1] =  dest[0][0];
    }
    ((u32 *) dest)[10] = 0x3F800000;
    dest[2][3] = 0;
    ((u32 *) dest)[15] = 0x3F800000;

    temp = (f32 *)dest;
    temp2 = (f32 *)mtx;
    for (i = 0; i < 3; i++) {
        temp[12] = (temp2[0] * position[0]) + (temp2[4] * position[1]) + (temp2[8] * position[2]) + temp2[12];
        temp++;
        temp2++;
    }
}

/**
 * Set 'dest' to a transformation matrix that aligns an object with the terrain
 * based on the normal. Used for enemies.
 * 'upDir' is the terrain normal
 * 'yaw' is the angle which it should face
 * 'pos' is the object's position in the world
 */
void mtxf_align_terrain_normal(Mat4 dest, Vec3f upDir, Vec3f pos, s16 yaw) {
    Vec3f lateralDir;
    Vec3f leftDir;
    Vec3f forwardDir;
    vec3f_set(lateralDir, sins(yaw), 0.0f, coss(yaw));
    vec3f_normalize(upDir);
    vec3f_cross(leftDir, upDir, lateralDir);
    vec3f_normalize(leftDir);
    vec3f_cross(forwardDir, leftDir, upDir);
    vec3f_normalize(forwardDir);
    vec3f_copy(dest[0], leftDir);
    vec3f_copy(dest[1], upDir);
    vec3f_copy(dest[2], forwardDir);
    vec3f_copy(dest[3], pos);
    MTXF_END(dest);
}

/**
 * Set 'mtx' to a transformation matrix that aligns an object with the terrain
 * based on 3 height samples in an equilateral triangle around the object.
 * Used for Mario when crawling or sliding.
 * 'yaw' is the angle which it should face
 * 'pos' is the object's position in the world
 * 'radius' is the distance from each triangle vertex to the center
 */
void mtxf_align_terrain_triangle(Mat4 mtx, Vec3f pos, s16 yaw, f32 radius) {
    struct Surface *sp74;
    Vec3f point0, point1, point2;
    Vec3f forward;
    Vec3f xColumn, yColumn, zColumn;
    f32 avgY;
    f32 minY = -radius * 3;

    point0[0] = pos[0] + radius * sins(yaw + 0x2AAA);
    point0[2] = pos[2] + radius * coss(yaw + 0x2AAA);
    point1[0] = pos[0] + radius * sins(yaw + 0x8000);
    point1[2] = pos[2] + radius * coss(yaw + 0x8000);
    point2[0] = pos[0] + radius * sins(yaw + 0xD555);
    point2[2] = pos[2] + radius * coss(yaw + 0xD555);
    point0[1] = find_floor(point0[0], pos[1] + 150, point0[2], &sp74);
    point1[1] = find_floor(point1[0], pos[1] + 150, point1[2], &sp74);
    point2[1] = find_floor(point2[0], pos[1] + 150, point2[2], &sp74);

    if ((point0[1] - pos[1]) < minY) point0[1] = pos[1];
    if ((point1[1] - pos[1]) < minY) point1[1] = pos[1];
    if ((point2[1] - pos[1]) < minY) point2[1] = pos[1];

    avgY = (point0[1] + point1[1] + point2[1]) / 3;

    vec3f_set(forward, sins(yaw), 0.0f, coss(yaw));
    find_vector_perpendicular_to_plane(yColumn, point0, point1, point2);
    vec3f_normalize(yColumn);
    vec3f_cross(xColumn, yColumn, forward);
    vec3f_normalize(xColumn);
    vec3f_cross(zColumn, xColumn, yColumn);
    vec3f_normalize(zColumn);
    vec3f_copy(mtx[0], xColumn);
    vec3f_copy(mtx[1], yColumn);
    vec3f_copy(mtx[2], zColumn);
	
    mtx[3][0] = pos[0];
    mtx[3][1] = (avgY < pos[1]) ? pos[1] : avgY;
    mtx[3][2] = pos[2];
    MTXF_END(mtx);
}

/**
 * Sets matrix 'dest' to the matrix product b * a assuming they are both
 * transformation matrices with a w-component of 1. Since the bottom row
 * is assumed to equal [0, 0, 0, 1], it saves some multiplications and
 * addition.
 * The resulting matrix represents first applying transformation b and
 * then a.
 */
void mtxf_mul(Mat4 dest, Mat4 a, Mat4 b) {
    s32 i, j;
    register f32 entry0;
    register f32 entry1;
    register f32 entry2;

    for (i = 0; i < 4; i++) {
        entry0 = a[i][0];
        entry1 = a[i][1];
        entry2 = a[i][2];
        for (j = 0; j < 3; j++) {
            dest[i][j] = entry0 * b[0][j] + entry1 * b[1][j] + entry2 * b[2][j];
        }
        if (i == 3) {
            dest[i][0] += b[3][0];
            dest[i][1] += b[3][1];
            dest[i][2] += b[3][2];
        }
    }
    dest[0][3] = dest[1][3] = dest[2][3] = 0;
    dest[3][3] = 1;

}
/**
 * Set matrix 'dest' to 'mtx' scaled by vector s
 */
void mtxf_scale_vec3f(Mat4 dest, Mat4 mtx, Vec3f s) {
    register f32 *temp  = (f32 *)dest;
    register f32 *temp2 = (f32 *)mtx;
    register s32 i;

    for (i = 0; i < 4; i++) {
        temp[ 0] = temp2[ 0] * s[0];
        temp[ 4] = temp2[ 4] * s[1];
        temp[ 8] = temp2[ 8] * s[2];
        temp[12] =  temp2[12];
        temp++;
        temp2++;
    }
}

/**
 * Multiply a vector with a transformation matrix, which applies the transformation
 * to the point. Note that the bottom row is assumed to be [0, 0, 0, 1], which is
 * true for transformation matrices if the translation has a w component of 1.
 */
void mtxf_mul_vec3s(Mat4 mtx, Vec3s b) {
    register f32 x = b[0];
    register f32 y = b[1];
    register f32 z = b[2];
    register f32 *temp2 = (f32 *)mtx;
    register s32 i;
    register s16 *c = b;
    for (i = 0; i < 3; i++) {
        c[0] = ((x * temp2[ 0])
              + (y * temp2[ 4])
              + (z * temp2[ 8])
              +      temp2[12]);
        c++;
        temp2++;
    }
}

/**
 * Convert float matrix 'src' to fixed point matrix 'dest'.
 * The float matrix may not contain entries larger than 65536 or the console
 * crashes. The fixed point matrix has entries with a 16-bit integer part, so
 * the floating point numbers are multiplied by 2^16 before being cast to a s32
 * integer. If this doesn't fit, the N64 and iQue consoles will throw an
 * exception. On Wii and Wii U Virtual Console the value will simply be clamped
 * and no crashes occur.
 */
void mtxf_to_mtx(Mtx *dest, Mat4 src) {
#ifdef AVOID_UB
    // Avoid type-casting which is technically UB by calling the equivalent
    // guMtxF2L function. This helps little-endian systems, as well.
    guMtxF2L(src, dest);
#else
    s32 asFixedPoint;
    register s32 i;
    register s16 *a3 = (s16 *) dest;      // all integer parts stored in first 16 bytes
    register s16 *t0 = (s16 *) dest + 16; // all fraction parts stored in last 16 bytes
    register f32 *t1 = (f32 *) src;

    for (i = 0; i < 16; i++) {
        asFixedPoint = *t1++ * (1 << 16); //! float-to-integer conversion responsible for PU crashes
        *a3++ = GET_HIGH_S16_OF_32(asFixedPoint); // integer part
        *t0++ = GET_LOW_S16_OF_32(asFixedPoint);  // fraction part
    }
#endif
}

/**
 * Set 'mtx' to a transformation matrix that rotates around the z axis.
 */
#define MATENTRY(a, b)                          \
    ((s16 *) mtx)[a     ] = (((s32) b) >> 16);  \
    ((s16 *) mtx)[a + 16] = (((s32) b) & 0xFFFF);
void mtxf_rotate_xy(Mtx *mtx, s16 angle) {
    register s32 i = (coss(angle) * 0x10000);
    register s32 j = (sins(angle) * 0x10000);
    register f32 *temp = (f32 *)mtx;
    register s32 k;
    for (k = 0; k < 16; k++) {
        *temp = 0;
        temp++;
    }
    MATENTRY(0,  i)
    MATENTRY(1,  j)
    MATENTRY(4, -j)
    MATENTRY(5,  i)
    ((s16 *) mtx)[10] = 1;
    ((s16 *) mtx)[15] = 1;
}
/**
 * Extract a position given an object's transformation matrix and a camera matrix.
 * This is used for determining the world position of the held object: since objMtx
 * inherits the transformation from both the camera and Mario, it calculates this
 * by taking the camera matrix and inverting its transformation by first rotating
 * objMtx back from screen orientation to world orientation, and then subtracting
 * the camera position.
 */
void get_pos_from_transform_mtx(Vec3f dest, Mat4 objMtx, Mat4 camMtx) {
    register s32 i;
    register f32 *temp1 = (f32 *)dest;
    register f32 *temp2 = (f32 *)camMtx;
    f32 y[3];
    register f32 *x = y;
    register f32 *temp3 = (f32 *)objMtx;

    for (i = 0; i < 3; i++) {
        *x = (temp3[12] - temp2[12]);
        temp2++;
        temp3++;
        x = (f32 *)(((u32)x) + 4);
    }
    temp2 -= 3;
    for (i = 0; i < 3; i++) {
        *temp1 = ((x[-3] * temp2[0])
                + (x[-2] * temp2[1])
                + (x[-1] * temp2[2]));
        temp1++;
        temp2 += 4;
    }
}

/**
 * Take the vector starting at 'from' pointed at 'to' an retrieve the length
 * of that vector, as well as the yaw and pitch angles.
 * Basically it converts the direction to spherical coordinates.
 */
void vec3f_get_dist_and_angle(Vec3f from, Vec3f to, f32 *dist, s16 *pitch, s16 *yaw) {
	Vec3f d;
	register f32 xz;
	vec3_diff(d, to, from);
    xz = (sqr(d[0]) + sqr(d[2]));
    *dist           = sqrtf(xz + sqr(d[1]));
    *pitch          = atan2s(sqrtf(xz), d[1]);
    *yaw            = atan2s(d[2], d[0]);
}

/**
 * Construct the 'to' point which is distance 'dist' away from the 'from' position,
 * and has the angles pitch and yaw.
 */
void vec3f_set_dist_and_angle(Vec3f from, Vec3f to, f32 dist, s16 pitch, s16 yaw) {
    to[0] = from[0] + dist * coss(pitch) * sins(yaw);
    to[1] = from[1] + dist * sins(pitch);
    to[2] = from[2] + dist * coss(pitch) * coss(yaw);
}

/**
 * Return the value 'current' after it tries to approach target, going up at
 * most 'inc' and going down at most 'dec'.
 */
s32 approach_s32(s32 current, s32 target, s32 inc, s32 dec) {
    s32 dist = (target - current);
    if (dist > 0) { // current < target
        current = ((dist >  inc) ? (current + inc) : target);
    } else if (dist < 0) { // current > target
        current = ((dist < -dec) ? (current - dec) : target);
    }
    return current;
}

/**
 * Return the value 'current' after it tries to approach target, going up at
 * most 'inc' and going down at most 'dec'.
 */
f32 approach_f32(f32 current, f32 target, f32 inc, f32 dec) {
    f32 dist = (target - current);
    if (dist >= 0.0f) { // target >= current
        current = ((dist >  inc) ? (current + inc) : target);
    } else { // target < current
        current = ((dist < -dec) ? (current - dec) : target);
    }
    return current;
}

/**
 * Helper function for atan2s. Does a look up of the arctangent of y/x assuming
 * the resulting angle is in range [0, 0x2000] (1/8 of a circle).
 */
static u16 atan2_lookup(f32 y, f32 x) {
    return x == 0
        ? 0x0
        : gArctanTable[(s32)((y / x) * 1024 + 0.5f)];;
}

/**
 * Compute the angle from (0, 0) to (x, y) as a s16. Given that terrain is in
 * the xz-plane, this is commonly called with (z, x) to get a yaw angle.
 */
s16 atan2s(f32 y, f32 x) {
    u16 ret;
    if (x >= 0) {
        if (y >= 0) {
            if (y >= x) {
                ret = atan2_lookup(x, y);
            } else {
                ret = 0x4000 - atan2_lookup(y, x);
            }
        } else {
            y = -y;
            if (y < x) {
                ret = 0x4000 + atan2_lookup(y, x);
            } else {
                ret = 0x8000 - atan2_lookup(x, y);
            }
        }
    } else {
        x = -x;
        if (y < 0) {
            y = -y;
            if (y >= x) {
                ret = 0x8000 + atan2_lookup(x, y);
            } else {
                ret = 0xC000 - atan2_lookup(y, x);
            }
        } else {
            if (y < x) {
                ret = 0xC000 + atan2_lookup(y, x);
            } else {
                ret = -atan2_lookup(x, y);
            }
        }
    }
    return ret;
}

/**
 * Compute the atan2 in radians by calling atan2s and converting the result.
 */
f32 atan2f(f32 y, f32 x) {
    return (f32) atan2s(y, x) * M_PI / 0x8000;
}

#define CURVE_BEGIN_1 1
#define CURVE_BEGIN_2 2
#define CURVE_MIDDLE 3
#define CURVE_END_1 4
#define CURVE_END_2 5

/**
 * Set 'result' to a 4-vector with weights corresponding to interpolation
 * value t in [0, 1] and gSplineState. Given the current control point P, these
 * weights are for P[0], P[1], P[2] and P[3] to obtain an interpolated point.
 * The weights naturally sum to 1, and they are also always in range [0, 1] so
 * the interpolated point will never overshoot. The curve is guaranteed to go
 * through the first and last point, but not through intermediate points.
 *
 * gSplineState ensures that the curve is clamped: the first two points
 * and last two points have different weight formulas. These are the weights
 * just before gSplineState transitions:
 * 1: [1, 0, 0, 0]
 * 1->2: [0, 3/12, 7/12, 2/12]
 * 2->3: [0, 1/6, 4/6, 1/6]
 * 3->3: [0, 1/6, 4/6, 1/6] (repeats)
 * 3->4: [0, 1/6, 4/6, 1/6]
 * 4->5: [0, 2/12, 7/12, 3/12]
 * 5: [0, 0, 0, 1]
 *
 * I suspect that the weight formulas will give a 3rd degree B-spline with the
 * common uniform clamped knot vector, e.g. for n points:
 * [0, 0, 0, 0, 1, 2, ... n-1, n, n, n, n]
 * TODO: verify the classification of the spline / figure out how polynomials were computed
 */
void spline_get_weights(Vec4f result, f32 t, UNUSED s32 c) {
    f32 tinv  = 1 - t;
    f32 tinv2 = tinv  * tinv;
    f32 tinv3 = tinv2 * tinv;
    f32 t2    = t     * t   ;
    f32 t3    = t2    * t   ;

    switch (gSplineState) {
        case CURVE_BEGIN_1:
            result[0] = tinv3;
            result[1] = ( t3 *        1.75f) - (t2 * 4.5f) + (t * 3.0f);
            result[2] = (-t3 * (11 / 12.0f)) + (t2 * 1.5f);
            result[3] = t3 * (1 / 6.0f);
            break;
        case CURVE_BEGIN_2:
            result[0] = tinv3 * 0.25f;
            result[1] = (t3 * (7 / 12.0f)) - (t2 * 1.25f) + (t * 0.25f) + (7 / 12.0f);
            result[2] = (-t3 * 0.5f) + (t2 * 0.5f) + (t * 0.5f) + (1 / 6.0f);
            result[3] = t3 * (1 / 6.0f);
            break;
        case CURVE_MIDDLE:
            result[0] = tinv3 * (1.0f / 6.0f);
            result[1] = (t3 * 0.5f) - t2 + (4.0f / 6.0f);
            result[2] = (-t3 * 0.5f) + (t2 * 0.5f) + (t * 0.5f) + (1.0f / 6.0f);
            result[3] = t3 * (1.0f / 6.0f);
            break;
        case CURVE_END_1:
            result[0] = tinv3 * (1.0f /  6.0f);
            result[1] = (-tinv3 * 0.5f) + (tinv2 * 0.5f) + (tinv * 0.5f) + (1.0f / 6.0f);
            result[2] = (tinv3 * (7.0f / 12.0f)) - (tinv2 * 1.25f) + (tinv * 0.25f) + (7.0f / 12.0f);
            result[3] = t3 * 0.25f;
            break;
        case CURVE_END_2:
            result[0] = tinv3 * (1.0f / 6.0f);
            result[1] = (-tinv3 * (11.0f / 12.0f)) + (tinv2 * 1.5f);
            result[2] = (tinv3 * 1.75f) - (tinv2 * 4.5f) + (tinv * 3.0f);
            result[3] = t3;
            break;
	}
}

/**
 * Initialize a spline animation.
 * 'keyFrames' should be an array of (s, x, y, z) vectors
 *  s: the speed of the keyframe in 1000/frames, e.g. s=100 means the keyframe lasts 10 frames
 *  (x, y, z): point in 3D space on the curve
 * The array should end with three entries with s=0 (infinite keyframe duration).
 * That's because the spline has a 3rd degree polynomial, so it looks 3 points ahead.
 */
void anim_spline_init(Vec4s *keyFrames) {
    gSplineKeyframe = keyFrames;
    gSplineKeyframeFraction = 0;
    gSplineState = 1;
}

/**
 * Poll the next point from a spline animation.
 * anim_spline_init should be called before polling for vectors.
 * Returns TRUE when the last point is reached, FALSE otherwise.
 */
s32 anim_spline_poll(Vec3f result) {
    Vec4f weights;
    s32 i;
    s32 hasEnded = FALSE;

    vec3f_copy(result, gVec3fZero);
    spline_get_weights(weights, gSplineKeyframeFraction, gSplineState);
    for (i = 0; i < 4; i++) {
        result[0] += weights[i] * gSplineKeyframe[i][1];
        result[1] += weights[i] * gSplineKeyframe[i][2];
        result[2] += weights[i] * gSplineKeyframe[i][3];
    }

    if ((gSplineKeyframeFraction += gSplineKeyframe[0][0] / 1000.0f) >= 1) {
        gSplineKeyframe++;
        gSplineKeyframeFraction--;
        switch (gSplineState) {
            case CURVE_END_2:
                hasEnded = TRUE;
                break;
            case CURVE_MIDDLE:
                if (gSplineKeyframe[2][0] == 0) {
                    gSplineState = CURVE_END_1;
                }
                break;
            default:
                gSplineState++;
                break;
        }
    }

    return hasEnded;
}
