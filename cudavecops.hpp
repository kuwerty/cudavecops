#pragma once

typedef unsigned char uchar;

static __host__ __device__ __inline__ float fract(const float x)
{
  return x - floorf(x);
}

static __host__ __device__ __inline__ double fract(const double x)
{
  return x - floor(x);
}

static __host__ __device__ __inline__ char2 operator - (const char2 & a)
{
    return make_char2(-a.x, -a.y);
}

static __host__ __device__ __inline__ char3 operator - (const char3 & a)
{
    return make_char3(-a.x, -a.y, -a.z);
}

static __host__ __device__ __inline__ char4 operator - (const char4 & a)
{
    return make_char4(-a.x, -a.y, -a.z, -a.w);
}

static __host__ __device__ __inline__ uchar2 operator - (const uchar2 & a)
{
    return make_uchar2(-a.x, -a.y);
}

static __host__ __device__ __inline__ uchar3 operator - (const uchar3 & a)
{
    return make_uchar3(-a.x, -a.y, -a.z);
}

static __host__ __device__ __inline__ uchar4 operator - (const uchar4 & a)
{
    return make_uchar4(-a.x, -a.y, -a.z, -a.w);
}

static __host__ __device__ __inline__ short2 operator - (const short2 & a)
{
    return make_short2(-a.x, -a.y);
}

static __host__ __device__ __inline__ short3 operator - (const short3 & a)
{
    return make_short3(-a.x, -a.y, -a.z);
}

static __host__ __device__ __inline__ short4 operator - (const short4 & a)
{
    return make_short4(-a.x, -a.y, -a.z, -a.w);
}

static __host__ __device__ __inline__ ushort2 operator - (const ushort2 & a)
{
    return make_ushort2(-a.x, -a.y);
}

static __host__ __device__ __inline__ ushort3 operator - (const ushort3 & a)
{
    return make_ushort3(-a.x, -a.y, -a.z);
}

static __host__ __device__ __inline__ ushort4 operator - (const ushort4 & a)
{
    return make_ushort4(-a.x, -a.y, -a.z, -a.w);
}

static __host__ __device__ __inline__ int2 operator - (const int2 & a)
{
    return make_int2(-a.x, -a.y);
}

static __host__ __device__ __inline__ int3 operator - (const int3 & a)
{
    return make_int3(-a.x, -a.y, -a.z);
}

static __host__ __device__ __inline__ int4 operator - (const int4 & a)
{
    return make_int4(-a.x, -a.y, -a.z, -a.w);
}

static __host__ __device__ __inline__ uint2 operator - (const uint2 & a)
{
    return make_uint2(-a.x, -a.y);
}

static __host__ __device__ __inline__ uint3 operator - (const uint3 & a)
{
    return make_uint3(-a.x, -a.y, -a.z);
}

static __host__ __device__ __inline__ uint4 operator - (const uint4 & a)
{
    return make_uint4(-a.x, -a.y, -a.z, -a.w);
}

static __host__ __device__ __inline__ long2 operator - (const long2 & a)
{
    return make_long2(-a.x, -a.y);
}

static __host__ __device__ __inline__ long3 operator - (const long3 & a)
{
    return make_long3(-a.x, -a.y, -a.z);
}

static __host__ __device__ __inline__ long4 operator - (const long4 & a)
{
    return make_long4(-a.x, -a.y, -a.z, -a.w);
}

static __host__ __device__ __inline__ ulong2 operator - (const ulong2 & a)
{
    return make_ulong2(-a.x, -a.y);
}

static __host__ __device__ __inline__ ulong3 operator - (const ulong3 & a)
{
    return make_ulong3(-a.x, -a.y, -a.z);
}

static __host__ __device__ __inline__ ulong4 operator - (const ulong4 & a)
{
    return make_ulong4(-a.x, -a.y, -a.z, -a.w);
}

static __host__ __device__ __inline__ float2 operator - (const float2 & a)
{
    return make_float2(-a.x, -a.y);
}

static __host__ __device__ __inline__ float3 operator - (const float3 & a)
{
    return make_float3(-a.x, -a.y, -a.z);
}

static __host__ __device__ __inline__ float4 operator - (const float4 & a)
{
    return make_float4(-a.x, -a.y, -a.z, -a.w);
}

static __host__ __device__ __inline__ double2 operator - (const double2 & a)
{
    return make_double2(-a.x, -a.y);
}

static __host__ __device__ __inline__ char2 operator ~ (const char2 & a)
{
    return make_char2(~a.x, ~a.y);
}

static __host__ __device__ __inline__ char3 operator ~ (const char3 & a)
{
    return make_char3(~a.x, ~a.y, ~a.z);
}

static __host__ __device__ __inline__ char4 operator ~ (const char4 & a)
{
    return make_char4(~a.x, ~a.y, ~a.z, ~a.w);
}

static __host__ __device__ __inline__ uchar2 operator ~ (const uchar2 & a)
{
    return make_uchar2(~a.x, ~a.y);
}

static __host__ __device__ __inline__ uchar3 operator ~ (const uchar3 & a)
{
    return make_uchar3(~a.x, ~a.y, ~a.z);
}

static __host__ __device__ __inline__ uchar4 operator ~ (const uchar4 & a)
{
    return make_uchar4(~a.x, ~a.y, ~a.z, ~a.w);
}

static __host__ __device__ __inline__ short2 operator ~ (const short2 & a)
{
    return make_short2(~a.x, ~a.y);
}

static __host__ __device__ __inline__ short3 operator ~ (const short3 & a)
{
    return make_short3(~a.x, ~a.y, ~a.z);
}

static __host__ __device__ __inline__ short4 operator ~ (const short4 & a)
{
    return make_short4(~a.x, ~a.y, ~a.z, ~a.w);
}

static __host__ __device__ __inline__ ushort2 operator ~ (const ushort2 & a)
{
    return make_ushort2(~a.x, ~a.y);
}

static __host__ __device__ __inline__ ushort3 operator ~ (const ushort3 & a)
{
    return make_ushort3(~a.x, ~a.y, ~a.z);
}

static __host__ __device__ __inline__ ushort4 operator ~ (const ushort4 & a)
{
    return make_ushort4(~a.x, ~a.y, ~a.z, ~a.w);
}

static __host__ __device__ __inline__ int2 operator ~ (const int2 & a)
{
    return make_int2(~a.x, ~a.y);
}

static __host__ __device__ __inline__ int3 operator ~ (const int3 & a)
{
    return make_int3(~a.x, ~a.y, ~a.z);
}

static __host__ __device__ __inline__ int4 operator ~ (const int4 & a)
{
    return make_int4(~a.x, ~a.y, ~a.z, ~a.w);
}

static __host__ __device__ __inline__ uint2 operator ~ (const uint2 & a)
{
    return make_uint2(~a.x, ~a.y);
}

static __host__ __device__ __inline__ uint3 operator ~ (const uint3 & a)
{
    return make_uint3(~a.x, ~a.y, ~a.z);
}

static __host__ __device__ __inline__ uint4 operator ~ (const uint4 & a)
{
    return make_uint4(~a.x, ~a.y, ~a.z, ~a.w);
}

static __host__ __device__ __inline__ long2 operator ~ (const long2 & a)
{
    return make_long2(~a.x, ~a.y);
}

static __host__ __device__ __inline__ long3 operator ~ (const long3 & a)
{
    return make_long3(~a.x, ~a.y, ~a.z);
}

static __host__ __device__ __inline__ long4 operator ~ (const long4 & a)
{
    return make_long4(~a.x, ~a.y, ~a.z, ~a.w);
}

static __host__ __device__ __inline__ ulong2 operator ~ (const ulong2 & a)
{
    return make_ulong2(~a.x, ~a.y);
}

static __host__ __device__ __inline__ ulong3 operator ~ (const ulong3 & a)
{
    return make_ulong3(~a.x, ~a.y, ~a.z);
}

static __host__ __device__ __inline__ ulong4 operator ~ (const ulong4 & a)
{
    return make_ulong4(~a.x, ~a.y, ~a.z, ~a.w);
}

static __host__ __device__ __inline__ char2 operator ! (const char2 & a)
{
    return make_char2(!a.x, !a.y);
}

static __host__ __device__ __inline__ char3 operator ! (const char3 & a)
{
    return make_char3(!a.x, !a.y, !a.z);
}

static __host__ __device__ __inline__ char4 operator ! (const char4 & a)
{
    return make_char4(!a.x, !a.y, !a.z, !a.w);
}

static __host__ __device__ __inline__ uchar2 operator ! (const uchar2 & a)
{
    return make_uchar2(!a.x, !a.y);
}

static __host__ __device__ __inline__ uchar3 operator ! (const uchar3 & a)
{
    return make_uchar3(!a.x, !a.y, !a.z);
}

static __host__ __device__ __inline__ uchar4 operator ! (const uchar4 & a)
{
    return make_uchar4(!a.x, !a.y, !a.z, !a.w);
}

static __host__ __device__ __inline__ short2 operator ! (const short2 & a)
{
    return make_short2(!a.x, !a.y);
}

static __host__ __device__ __inline__ short3 operator ! (const short3 & a)
{
    return make_short3(!a.x, !a.y, !a.z);
}

static __host__ __device__ __inline__ short4 operator ! (const short4 & a)
{
    return make_short4(!a.x, !a.y, !a.z, !a.w);
}

static __host__ __device__ __inline__ ushort2 operator ! (const ushort2 & a)
{
    return make_ushort2(!a.x, !a.y);
}

static __host__ __device__ __inline__ ushort3 operator ! (const ushort3 & a)
{
    return make_ushort3(!a.x, !a.y, !a.z);
}

static __host__ __device__ __inline__ ushort4 operator ! (const ushort4 & a)
{
    return make_ushort4(!a.x, !a.y, !a.z, !a.w);
}

static __host__ __device__ __inline__ int2 operator ! (const int2 & a)
{
    return make_int2(!a.x, !a.y);
}

static __host__ __device__ __inline__ int3 operator ! (const int3 & a)
{
    return make_int3(!a.x, !a.y, !a.z);
}

static __host__ __device__ __inline__ int4 operator ! (const int4 & a)
{
    return make_int4(!a.x, !a.y, !a.z, !a.w);
}

static __host__ __device__ __inline__ uint2 operator ! (const uint2 & a)
{
    return make_uint2(!a.x, !a.y);
}

static __host__ __device__ __inline__ uint3 operator ! (const uint3 & a)
{
    return make_uint3(!a.x, !a.y, !a.z);
}

static __host__ __device__ __inline__ uint4 operator ! (const uint4 & a)
{
    return make_uint4(!a.x, !a.y, !a.z, !a.w);
}

static __host__ __device__ __inline__ long2 operator ! (const long2 & a)
{
    return make_long2(!a.x, !a.y);
}

static __host__ __device__ __inline__ long3 operator ! (const long3 & a)
{
    return make_long3(!a.x, !a.y, !a.z);
}

static __host__ __device__ __inline__ long4 operator ! (const long4 & a)
{
    return make_long4(!a.x, !a.y, !a.z, !a.w);
}

static __host__ __device__ __inline__ ulong2 operator ! (const ulong2 & a)
{
    return make_ulong2(!a.x, !a.y);
}

static __host__ __device__ __inline__ ulong3 operator ! (const ulong3 & a)
{
    return make_ulong3(!a.x, !a.y, !a.z);
}

static __host__ __device__ __inline__ ulong4 operator ! (const ulong4 & a)
{
    return make_ulong4(!a.x, !a.y, !a.z, !a.w);
}

static __host__ __device__ __inline__ char2 operator + (const char2 & a, const char2 & b)
{
    return make_char2(a.x+b.x, a.y+b.y);
}

static __host__ __device__ __inline__ char2 operator + (const char & a, const char2 & b)
{
    return make_char2(a+b.x, a+b.y);
}

static __host__ __device__ __inline__ char2 operator + (const char2 & a, const char & b)
{
    return make_char2(a.x+b, a.y+b);
}

static __host__ __device__ __inline__ char2 & operator += (char2 & a, const char2 & b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

static __host__ __device__ __inline__ char2 & operator += (char2 & a, const char & b)
{
    a.x += b;
    a.y += b;
    return a;
}

static __host__ __device__ __inline__ char3 operator + (const char3 & a, const char3 & b)
{
    return make_char3(a.x+b.x, a.y+b.y, a.z+b.z);
}

static __host__ __device__ __inline__ char3 operator + (const char & a, const char3 & b)
{
    return make_char3(a+b.x, a+b.y, a+b.z);
}

static __host__ __device__ __inline__ char3 operator + (const char3 & a, const char & b)
{
    return make_char3(a.x+b, a.y+b, a.z+b);
}

static __host__ __device__ __inline__ char3 & operator += (char3 & a, const char3 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

static __host__ __device__ __inline__ char3 & operator += (char3 & a, const char & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    return a;
}

static __host__ __device__ __inline__ char4 operator + (const char4 & a, const char4 & b)
{
    return make_char4(a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w);
}

static __host__ __device__ __inline__ char4 operator + (const char & a, const char4 & b)
{
    return make_char4(a+b.x, a+b.y, a+b.z, a+b.w);
}

static __host__ __device__ __inline__ char4 operator + (const char4 & a, const char & b)
{
    return make_char4(a.x+b, a.y+b, a.z+b, a.w+b);
}

static __host__ __device__ __inline__ char4 & operator += (char4 & a, const char4 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    a.w += b.w;
    return a;
}

static __host__ __device__ __inline__ char4 & operator += (char4 & a, const char & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    a.w += b;
    return a;
}

static __host__ __device__ __inline__ uchar2 operator + (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x+b.x, a.y+b.y);
}

static __host__ __device__ __inline__ uchar2 operator + (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a+b.x, a+b.y);
}

static __host__ __device__ __inline__ uchar2 operator + (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x+b, a.y+b);
}

static __host__ __device__ __inline__ uchar2 & operator += (uchar2 & a, const uchar2 & b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

static __host__ __device__ __inline__ uchar2 & operator += (uchar2 & a, const uchar & b)
{
    a.x += b;
    a.y += b;
    return a;
}

static __host__ __device__ __inline__ uchar3 operator + (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x+b.x, a.y+b.y, a.z+b.z);
}

static __host__ __device__ __inline__ uchar3 operator + (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a+b.x, a+b.y, a+b.z);
}

static __host__ __device__ __inline__ uchar3 operator + (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x+b, a.y+b, a.z+b);
}

static __host__ __device__ __inline__ uchar3 & operator += (uchar3 & a, const uchar3 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

static __host__ __device__ __inline__ uchar3 & operator += (uchar3 & a, const uchar & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    return a;
}

static __host__ __device__ __inline__ uchar4 operator + (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w);
}

static __host__ __device__ __inline__ uchar4 operator + (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a+b.x, a+b.y, a+b.z, a+b.w);
}

static __host__ __device__ __inline__ uchar4 operator + (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x+b, a.y+b, a.z+b, a.w+b);
}

static __host__ __device__ __inline__ uchar4 & operator += (uchar4 & a, const uchar4 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    a.w += b.w;
    return a;
}

static __host__ __device__ __inline__ uchar4 & operator += (uchar4 & a, const uchar & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    a.w += b;
    return a;
}

static __host__ __device__ __inline__ short2 operator + (const short2 & a, const short2 & b)
{
    return make_short2(a.x+b.x, a.y+b.y);
}

static __host__ __device__ __inline__ short2 operator + (const short & a, const short2 & b)
{
    return make_short2(a+b.x, a+b.y);
}

static __host__ __device__ __inline__ short2 operator + (const short2 & a, const short & b)
{
    return make_short2(a.x+b, a.y+b);
}

static __host__ __device__ __inline__ short2 & operator += (short2 & a, const short2 & b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

static __host__ __device__ __inline__ short2 & operator += (short2 & a, const short & b)
{
    a.x += b;
    a.y += b;
    return a;
}

static __host__ __device__ __inline__ short3 operator + (const short3 & a, const short3 & b)
{
    return make_short3(a.x+b.x, a.y+b.y, a.z+b.z);
}

static __host__ __device__ __inline__ short3 operator + (const short & a, const short3 & b)
{
    return make_short3(a+b.x, a+b.y, a+b.z);
}

static __host__ __device__ __inline__ short3 operator + (const short3 & a, const short & b)
{
    return make_short3(a.x+b, a.y+b, a.z+b);
}

static __host__ __device__ __inline__ short3 & operator += (short3 & a, const short3 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

static __host__ __device__ __inline__ short3 & operator += (short3 & a, const short & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    return a;
}

static __host__ __device__ __inline__ short4 operator + (const short4 & a, const short4 & b)
{
    return make_short4(a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w);
}

static __host__ __device__ __inline__ short4 operator + (const short & a, const short4 & b)
{
    return make_short4(a+b.x, a+b.y, a+b.z, a+b.w);
}

static __host__ __device__ __inline__ short4 operator + (const short4 & a, const short & b)
{
    return make_short4(a.x+b, a.y+b, a.z+b, a.w+b);
}

static __host__ __device__ __inline__ short4 & operator += (short4 & a, const short4 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    a.w += b.w;
    return a;
}

static __host__ __device__ __inline__ short4 & operator += (short4 & a, const short & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    a.w += b;
    return a;
}

static __host__ __device__ __inline__ ushort2 operator + (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x+b.x, a.y+b.y);
}

static __host__ __device__ __inline__ ushort2 operator + (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a+b.x, a+b.y);
}

static __host__ __device__ __inline__ ushort2 operator + (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x+b, a.y+b);
}

static __host__ __device__ __inline__ ushort2 & operator += (ushort2 & a, const ushort2 & b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

static __host__ __device__ __inline__ ushort2 & operator += (ushort2 & a, const ushort & b)
{
    a.x += b;
    a.y += b;
    return a;
}

static __host__ __device__ __inline__ ushort3 operator + (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x+b.x, a.y+b.y, a.z+b.z);
}

static __host__ __device__ __inline__ ushort3 operator + (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a+b.x, a+b.y, a+b.z);
}

static __host__ __device__ __inline__ ushort3 operator + (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x+b, a.y+b, a.z+b);
}

static __host__ __device__ __inline__ ushort3 & operator += (ushort3 & a, const ushort3 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

static __host__ __device__ __inline__ ushort3 & operator += (ushort3 & a, const ushort & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    return a;
}

static __host__ __device__ __inline__ ushort4 operator + (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w);
}

static __host__ __device__ __inline__ ushort4 operator + (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a+b.x, a+b.y, a+b.z, a+b.w);
}

static __host__ __device__ __inline__ ushort4 operator + (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x+b, a.y+b, a.z+b, a.w+b);
}

static __host__ __device__ __inline__ ushort4 & operator += (ushort4 & a, const ushort4 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    a.w += b.w;
    return a;
}

static __host__ __device__ __inline__ ushort4 & operator += (ushort4 & a, const ushort & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    a.w += b;
    return a;
}

static __host__ __device__ __inline__ int2 operator + (const int2 & a, const int2 & b)
{
    return make_int2(a.x+b.x, a.y+b.y);
}

static __host__ __device__ __inline__ int2 operator + (const int & a, const int2 & b)
{
    return make_int2(a+b.x, a+b.y);
}

static __host__ __device__ __inline__ int2 operator + (const int2 & a, const int & b)
{
    return make_int2(a.x+b, a.y+b);
}

static __host__ __device__ __inline__ int2 & operator += (int2 & a, const int2 & b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

static __host__ __device__ __inline__ int2 & operator += (int2 & a, const int & b)
{
    a.x += b;
    a.y += b;
    return a;
}

static __host__ __device__ __inline__ int3 operator + (const int3 & a, const int3 & b)
{
    return make_int3(a.x+b.x, a.y+b.y, a.z+b.z);
}

static __host__ __device__ __inline__ int3 operator + (const int & a, const int3 & b)
{
    return make_int3(a+b.x, a+b.y, a+b.z);
}

static __host__ __device__ __inline__ int3 operator + (const int3 & a, const int & b)
{
    return make_int3(a.x+b, a.y+b, a.z+b);
}

static __host__ __device__ __inline__ int3 & operator += (int3 & a, const int3 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

static __host__ __device__ __inline__ int3 & operator += (int3 & a, const int & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    return a;
}

static __host__ __device__ __inline__ int4 operator + (const int4 & a, const int4 & b)
{
    return make_int4(a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w);
}

static __host__ __device__ __inline__ int4 operator + (const int & a, const int4 & b)
{
    return make_int4(a+b.x, a+b.y, a+b.z, a+b.w);
}

static __host__ __device__ __inline__ int4 operator + (const int4 & a, const int & b)
{
    return make_int4(a.x+b, a.y+b, a.z+b, a.w+b);
}

static __host__ __device__ __inline__ int4 & operator += (int4 & a, const int4 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    a.w += b.w;
    return a;
}

static __host__ __device__ __inline__ int4 & operator += (int4 & a, const int & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    a.w += b;
    return a;
}

static __host__ __device__ __inline__ uint2 operator + (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x+b.x, a.y+b.y);
}

static __host__ __device__ __inline__ uint2 operator + (const uint & a, const uint2 & b)
{
    return make_uint2(a+b.x, a+b.y);
}

static __host__ __device__ __inline__ uint2 operator + (const uint2 & a, const uint & b)
{
    return make_uint2(a.x+b, a.y+b);
}

static __host__ __device__ __inline__ uint2 & operator += (uint2 & a, const uint2 & b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

static __host__ __device__ __inline__ uint2 & operator += (uint2 & a, const uint & b)
{
    a.x += b;
    a.y += b;
    return a;
}

static __host__ __device__ __inline__ uint3 operator + (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x+b.x, a.y+b.y, a.z+b.z);
}

static __host__ __device__ __inline__ uint3 operator + (const uint & a, const uint3 & b)
{
    return make_uint3(a+b.x, a+b.y, a+b.z);
}

static __host__ __device__ __inline__ uint3 operator + (const uint3 & a, const uint & b)
{
    return make_uint3(a.x+b, a.y+b, a.z+b);
}

static __host__ __device__ __inline__ uint3 & operator += (uint3 & a, const uint3 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

static __host__ __device__ __inline__ uint3 & operator += (uint3 & a, const uint & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    return a;
}

static __host__ __device__ __inline__ uint4 operator + (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w);
}

static __host__ __device__ __inline__ uint4 operator + (const uint & a, const uint4 & b)
{
    return make_uint4(a+b.x, a+b.y, a+b.z, a+b.w);
}

static __host__ __device__ __inline__ uint4 operator + (const uint4 & a, const uint & b)
{
    return make_uint4(a.x+b, a.y+b, a.z+b, a.w+b);
}

static __host__ __device__ __inline__ uint4 & operator += (uint4 & a, const uint4 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    a.w += b.w;
    return a;
}

static __host__ __device__ __inline__ uint4 & operator += (uint4 & a, const uint & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    a.w += b;
    return a;
}

static __host__ __device__ __inline__ long2 operator + (const long2 & a, const long2 & b)
{
    return make_long2(a.x+b.x, a.y+b.y);
}

static __host__ __device__ __inline__ long2 operator + (const long & a, const long2 & b)
{
    return make_long2(a+b.x, a+b.y);
}

static __host__ __device__ __inline__ long2 operator + (const long2 & a, const long & b)
{
    return make_long2(a.x+b, a.y+b);
}

static __host__ __device__ __inline__ long2 & operator += (long2 & a, const long2 & b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

static __host__ __device__ __inline__ long2 & operator += (long2 & a, const long & b)
{
    a.x += b;
    a.y += b;
    return a;
}

static __host__ __device__ __inline__ long3 operator + (const long3 & a, const long3 & b)
{
    return make_long3(a.x+b.x, a.y+b.y, a.z+b.z);
}

static __host__ __device__ __inline__ long3 operator + (const long & a, const long3 & b)
{
    return make_long3(a+b.x, a+b.y, a+b.z);
}

static __host__ __device__ __inline__ long3 operator + (const long3 & a, const long & b)
{
    return make_long3(a.x+b, a.y+b, a.z+b);
}

static __host__ __device__ __inline__ long3 & operator += (long3 & a, const long3 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

static __host__ __device__ __inline__ long3 & operator += (long3 & a, const long & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    return a;
}

static __host__ __device__ __inline__ long4 operator + (const long4 & a, const long4 & b)
{
    return make_long4(a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w);
}

static __host__ __device__ __inline__ long4 operator + (const long & a, const long4 & b)
{
    return make_long4(a+b.x, a+b.y, a+b.z, a+b.w);
}

static __host__ __device__ __inline__ long4 operator + (const long4 & a, const long & b)
{
    return make_long4(a.x+b, a.y+b, a.z+b, a.w+b);
}

static __host__ __device__ __inline__ long4 & operator += (long4 & a, const long4 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    a.w += b.w;
    return a;
}

static __host__ __device__ __inline__ long4 & operator += (long4 & a, const long & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    a.w += b;
    return a;
}

static __host__ __device__ __inline__ ulong2 operator + (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x+b.x, a.y+b.y);
}

static __host__ __device__ __inline__ ulong2 operator + (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a+b.x, a+b.y);
}

static __host__ __device__ __inline__ ulong2 operator + (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x+b, a.y+b);
}

static __host__ __device__ __inline__ ulong2 & operator += (ulong2 & a, const ulong2 & b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

static __host__ __device__ __inline__ ulong2 & operator += (ulong2 & a, const ulong & b)
{
    a.x += b;
    a.y += b;
    return a;
}

static __host__ __device__ __inline__ ulong3 operator + (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x+b.x, a.y+b.y, a.z+b.z);
}

static __host__ __device__ __inline__ ulong3 operator + (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a+b.x, a+b.y, a+b.z);
}

static __host__ __device__ __inline__ ulong3 operator + (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x+b, a.y+b, a.z+b);
}

static __host__ __device__ __inline__ ulong3 & operator += (ulong3 & a, const ulong3 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

static __host__ __device__ __inline__ ulong3 & operator += (ulong3 & a, const ulong & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    return a;
}

static __host__ __device__ __inline__ ulong4 operator + (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w);
}

static __host__ __device__ __inline__ ulong4 operator + (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a+b.x, a+b.y, a+b.z, a+b.w);
}

static __host__ __device__ __inline__ ulong4 operator + (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x+b, a.y+b, a.z+b, a.w+b);
}

static __host__ __device__ __inline__ ulong4 & operator += (ulong4 & a, const ulong4 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    a.w += b.w;
    return a;
}

static __host__ __device__ __inline__ ulong4 & operator += (ulong4 & a, const ulong & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    a.w += b;
    return a;
}

static __host__ __device__ __inline__ float2 operator + (const float2 & a, const float2 & b)
{
    return make_float2(a.x+b.x, a.y+b.y);
}

static __host__ __device__ __inline__ float2 operator + (const float & a, const float2 & b)
{
    return make_float2(a+b.x, a+b.y);
}

static __host__ __device__ __inline__ float2 operator + (const float2 & a, const float & b)
{
    return make_float2(a.x+b, a.y+b);
}

static __host__ __device__ __inline__ float2 & operator += (float2 & a, const float2 & b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

static __host__ __device__ __inline__ float2 & operator += (float2 & a, const float & b)
{
    a.x += b;
    a.y += b;
    return a;
}

static __host__ __device__ __inline__ float3 operator + (const float3 & a, const float3 & b)
{
    return make_float3(a.x+b.x, a.y+b.y, a.z+b.z);
}

static __host__ __device__ __inline__ float3 operator + (const float & a, const float3 & b)
{
    return make_float3(a+b.x, a+b.y, a+b.z);
}

static __host__ __device__ __inline__ float3 operator + (const float3 & a, const float & b)
{
    return make_float3(a.x+b, a.y+b, a.z+b);
}

static __host__ __device__ __inline__ float3 & operator += (float3 & a, const float3 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

static __host__ __device__ __inline__ float3 & operator += (float3 & a, const float & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    return a;
}

static __host__ __device__ __inline__ float4 operator + (const float4 & a, const float4 & b)
{
    return make_float4(a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w);
}

static __host__ __device__ __inline__ float4 operator + (const float & a, const float4 & b)
{
    return make_float4(a+b.x, a+b.y, a+b.z, a+b.w);
}

static __host__ __device__ __inline__ float4 operator + (const float4 & a, const float & b)
{
    return make_float4(a.x+b, a.y+b, a.z+b, a.w+b);
}

static __host__ __device__ __inline__ float4 & operator += (float4 & a, const float4 & b)
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    a.w += b.w;
    return a;
}

static __host__ __device__ __inline__ float4 & operator += (float4 & a, const float & b)
{
    a.x += b;
    a.y += b;
    a.z += b;
    a.w += b;
    return a;
}

static __host__ __device__ __inline__ double2 operator + (const double2 & a, const double2 & b)
{
    return make_double2(a.x+b.x, a.y+b.y);
}

static __host__ __device__ __inline__ double2 operator + (const double & a, const double2 & b)
{
    return make_double2(a+b.x, a+b.y);
}

static __host__ __device__ __inline__ double2 operator + (const double2 & a, const double & b)
{
    return make_double2(a.x+b, a.y+b);
}

static __host__ __device__ __inline__ double2 & operator += (double2 & a, const double2 & b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

static __host__ __device__ __inline__ double2 & operator += (double2 & a, const double & b)
{
    a.x += b;
    a.y += b;
    return a;
}

static __host__ __device__ __inline__ char2 operator - (const char2 & a, const char2 & b)
{
    return make_char2(a.x-b.x, a.y-b.y);
}

static __host__ __device__ __inline__ char2 operator - (const char & a, const char2 & b)
{
    return make_char2(a-b.x, a-b.y);
}

static __host__ __device__ __inline__ char2 operator - (const char2 & a, const char & b)
{
    return make_char2(a.x-b, a.y-b);
}

static __host__ __device__ __inline__ char2 & operator -= (char2 & a, const char2 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

static __host__ __device__ __inline__ char2 & operator -= (char2 & a, const char & b)
{
    a.x -= b;
    a.y -= b;
    return a;
}

static __host__ __device__ __inline__ char3 operator - (const char3 & a, const char3 & b)
{
    return make_char3(a.x-b.x, a.y-b.y, a.z-b.z);
}

static __host__ __device__ __inline__ char3 operator - (const char & a, const char3 & b)
{
    return make_char3(a-b.x, a-b.y, a-b.z);
}

static __host__ __device__ __inline__ char3 operator - (const char3 & a, const char & b)
{
    return make_char3(a.x-b, a.y-b, a.z-b);
}

static __host__ __device__ __inline__ char3 & operator -= (char3 & a, const char3 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

static __host__ __device__ __inline__ char3 & operator -= (char3 & a, const char & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    return a;
}

static __host__ __device__ __inline__ char4 operator - (const char4 & a, const char4 & b)
{
    return make_char4(a.x-b.x, a.y-b.y, a.z-b.z, a.w-b.w);
}

static __host__ __device__ __inline__ char4 operator - (const char & a, const char4 & b)
{
    return make_char4(a-b.x, a-b.y, a-b.z, a-b.w);
}

static __host__ __device__ __inline__ char4 operator - (const char4 & a, const char & b)
{
    return make_char4(a.x-b, a.y-b, a.z-b, a.w-b);
}

static __host__ __device__ __inline__ char4 & operator -= (char4 & a, const char4 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    a.w -= b.w;
    return a;
}

static __host__ __device__ __inline__ char4 & operator -= (char4 & a, const char & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    a.w -= b;
    return a;
}

static __host__ __device__ __inline__ uchar2 operator - (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x-b.x, a.y-b.y);
}

static __host__ __device__ __inline__ uchar2 operator - (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a-b.x, a-b.y);
}

static __host__ __device__ __inline__ uchar2 operator - (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x-b, a.y-b);
}

static __host__ __device__ __inline__ uchar2 & operator -= (uchar2 & a, const uchar2 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

static __host__ __device__ __inline__ uchar2 & operator -= (uchar2 & a, const uchar & b)
{
    a.x -= b;
    a.y -= b;
    return a;
}

static __host__ __device__ __inline__ uchar3 operator - (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x-b.x, a.y-b.y, a.z-b.z);
}

static __host__ __device__ __inline__ uchar3 operator - (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a-b.x, a-b.y, a-b.z);
}

static __host__ __device__ __inline__ uchar3 operator - (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x-b, a.y-b, a.z-b);
}

static __host__ __device__ __inline__ uchar3 & operator -= (uchar3 & a, const uchar3 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

static __host__ __device__ __inline__ uchar3 & operator -= (uchar3 & a, const uchar & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    return a;
}

static __host__ __device__ __inline__ uchar4 operator - (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x-b.x, a.y-b.y, a.z-b.z, a.w-b.w);
}

static __host__ __device__ __inline__ uchar4 operator - (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a-b.x, a-b.y, a-b.z, a-b.w);
}

static __host__ __device__ __inline__ uchar4 operator - (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x-b, a.y-b, a.z-b, a.w-b);
}

static __host__ __device__ __inline__ uchar4 & operator -= (uchar4 & a, const uchar4 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    a.w -= b.w;
    return a;
}

static __host__ __device__ __inline__ uchar4 & operator -= (uchar4 & a, const uchar & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    a.w -= b;
    return a;
}

static __host__ __device__ __inline__ short2 operator - (const short2 & a, const short2 & b)
{
    return make_short2(a.x-b.x, a.y-b.y);
}

static __host__ __device__ __inline__ short2 operator - (const short & a, const short2 & b)
{
    return make_short2(a-b.x, a-b.y);
}

static __host__ __device__ __inline__ short2 operator - (const short2 & a, const short & b)
{
    return make_short2(a.x-b, a.y-b);
}

static __host__ __device__ __inline__ short2 & operator -= (short2 & a, const short2 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

static __host__ __device__ __inline__ short2 & operator -= (short2 & a, const short & b)
{
    a.x -= b;
    a.y -= b;
    return a;
}

static __host__ __device__ __inline__ short3 operator - (const short3 & a, const short3 & b)
{
    return make_short3(a.x-b.x, a.y-b.y, a.z-b.z);
}

static __host__ __device__ __inline__ short3 operator - (const short & a, const short3 & b)
{
    return make_short3(a-b.x, a-b.y, a-b.z);
}

static __host__ __device__ __inline__ short3 operator - (const short3 & a, const short & b)
{
    return make_short3(a.x-b, a.y-b, a.z-b);
}

static __host__ __device__ __inline__ short3 & operator -= (short3 & a, const short3 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

static __host__ __device__ __inline__ short3 & operator -= (short3 & a, const short & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    return a;
}

static __host__ __device__ __inline__ short4 operator - (const short4 & a, const short4 & b)
{
    return make_short4(a.x-b.x, a.y-b.y, a.z-b.z, a.w-b.w);
}

static __host__ __device__ __inline__ short4 operator - (const short & a, const short4 & b)
{
    return make_short4(a-b.x, a-b.y, a-b.z, a-b.w);
}

static __host__ __device__ __inline__ short4 operator - (const short4 & a, const short & b)
{
    return make_short4(a.x-b, a.y-b, a.z-b, a.w-b);
}

static __host__ __device__ __inline__ short4 & operator -= (short4 & a, const short4 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    a.w -= b.w;
    return a;
}

static __host__ __device__ __inline__ short4 & operator -= (short4 & a, const short & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    a.w -= b;
    return a;
}

static __host__ __device__ __inline__ ushort2 operator - (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x-b.x, a.y-b.y);
}

static __host__ __device__ __inline__ ushort2 operator - (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a-b.x, a-b.y);
}

static __host__ __device__ __inline__ ushort2 operator - (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x-b, a.y-b);
}

static __host__ __device__ __inline__ ushort2 & operator -= (ushort2 & a, const ushort2 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

static __host__ __device__ __inline__ ushort2 & operator -= (ushort2 & a, const ushort & b)
{
    a.x -= b;
    a.y -= b;
    return a;
}

static __host__ __device__ __inline__ ushort3 operator - (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x-b.x, a.y-b.y, a.z-b.z);
}

static __host__ __device__ __inline__ ushort3 operator - (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a-b.x, a-b.y, a-b.z);
}

static __host__ __device__ __inline__ ushort3 operator - (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x-b, a.y-b, a.z-b);
}

static __host__ __device__ __inline__ ushort3 & operator -= (ushort3 & a, const ushort3 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

static __host__ __device__ __inline__ ushort3 & operator -= (ushort3 & a, const ushort & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    return a;
}

static __host__ __device__ __inline__ ushort4 operator - (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x-b.x, a.y-b.y, a.z-b.z, a.w-b.w);
}

static __host__ __device__ __inline__ ushort4 operator - (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a-b.x, a-b.y, a-b.z, a-b.w);
}

static __host__ __device__ __inline__ ushort4 operator - (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x-b, a.y-b, a.z-b, a.w-b);
}

static __host__ __device__ __inline__ ushort4 & operator -= (ushort4 & a, const ushort4 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    a.w -= b.w;
    return a;
}

static __host__ __device__ __inline__ ushort4 & operator -= (ushort4 & a, const ushort & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    a.w -= b;
    return a;
}

static __host__ __device__ __inline__ int2 operator - (const int2 & a, const int2 & b)
{
    return make_int2(a.x-b.x, a.y-b.y);
}

static __host__ __device__ __inline__ int2 operator - (const int & a, const int2 & b)
{
    return make_int2(a-b.x, a-b.y);
}

static __host__ __device__ __inline__ int2 operator - (const int2 & a, const int & b)
{
    return make_int2(a.x-b, a.y-b);
}

static __host__ __device__ __inline__ int2 & operator -= (int2 & a, const int2 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

static __host__ __device__ __inline__ int2 & operator -= (int2 & a, const int & b)
{
    a.x -= b;
    a.y -= b;
    return a;
}

static __host__ __device__ __inline__ int3 operator - (const int3 & a, const int3 & b)
{
    return make_int3(a.x-b.x, a.y-b.y, a.z-b.z);
}

static __host__ __device__ __inline__ int3 operator - (const int & a, const int3 & b)
{
    return make_int3(a-b.x, a-b.y, a-b.z);
}

static __host__ __device__ __inline__ int3 operator - (const int3 & a, const int & b)
{
    return make_int3(a.x-b, a.y-b, a.z-b);
}

static __host__ __device__ __inline__ int3 & operator -= (int3 & a, const int3 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

static __host__ __device__ __inline__ int3 & operator -= (int3 & a, const int & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    return a;
}

static __host__ __device__ __inline__ int4 operator - (const int4 & a, const int4 & b)
{
    return make_int4(a.x-b.x, a.y-b.y, a.z-b.z, a.w-b.w);
}

static __host__ __device__ __inline__ int4 operator - (const int & a, const int4 & b)
{
    return make_int4(a-b.x, a-b.y, a-b.z, a-b.w);
}

static __host__ __device__ __inline__ int4 operator - (const int4 & a, const int & b)
{
    return make_int4(a.x-b, a.y-b, a.z-b, a.w-b);
}

static __host__ __device__ __inline__ int4 & operator -= (int4 & a, const int4 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    a.w -= b.w;
    return a;
}

static __host__ __device__ __inline__ int4 & operator -= (int4 & a, const int & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    a.w -= b;
    return a;
}

static __host__ __device__ __inline__ uint2 operator - (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x-b.x, a.y-b.y);
}

static __host__ __device__ __inline__ uint2 operator - (const uint & a, const uint2 & b)
{
    return make_uint2(a-b.x, a-b.y);
}

static __host__ __device__ __inline__ uint2 operator - (const uint2 & a, const uint & b)
{
    return make_uint2(a.x-b, a.y-b);
}

static __host__ __device__ __inline__ uint2 & operator -= (uint2 & a, const uint2 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

static __host__ __device__ __inline__ uint2 & operator -= (uint2 & a, const uint & b)
{
    a.x -= b;
    a.y -= b;
    return a;
}

static __host__ __device__ __inline__ uint3 operator - (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x-b.x, a.y-b.y, a.z-b.z);
}

static __host__ __device__ __inline__ uint3 operator - (const uint & a, const uint3 & b)
{
    return make_uint3(a-b.x, a-b.y, a-b.z);
}

static __host__ __device__ __inline__ uint3 operator - (const uint3 & a, const uint & b)
{
    return make_uint3(a.x-b, a.y-b, a.z-b);
}

static __host__ __device__ __inline__ uint3 & operator -= (uint3 & a, const uint3 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

static __host__ __device__ __inline__ uint3 & operator -= (uint3 & a, const uint & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    return a;
}

static __host__ __device__ __inline__ uint4 operator - (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x-b.x, a.y-b.y, a.z-b.z, a.w-b.w);
}

static __host__ __device__ __inline__ uint4 operator - (const uint & a, const uint4 & b)
{
    return make_uint4(a-b.x, a-b.y, a-b.z, a-b.w);
}

static __host__ __device__ __inline__ uint4 operator - (const uint4 & a, const uint & b)
{
    return make_uint4(a.x-b, a.y-b, a.z-b, a.w-b);
}

static __host__ __device__ __inline__ uint4 & operator -= (uint4 & a, const uint4 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    a.w -= b.w;
    return a;
}

static __host__ __device__ __inline__ uint4 & operator -= (uint4 & a, const uint & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    a.w -= b;
    return a;
}

static __host__ __device__ __inline__ long2 operator - (const long2 & a, const long2 & b)
{
    return make_long2(a.x-b.x, a.y-b.y);
}

static __host__ __device__ __inline__ long2 operator - (const long & a, const long2 & b)
{
    return make_long2(a-b.x, a-b.y);
}

static __host__ __device__ __inline__ long2 operator - (const long2 & a, const long & b)
{
    return make_long2(a.x-b, a.y-b);
}

static __host__ __device__ __inline__ long2 & operator -= (long2 & a, const long2 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

static __host__ __device__ __inline__ long2 & operator -= (long2 & a, const long & b)
{
    a.x -= b;
    a.y -= b;
    return a;
}

static __host__ __device__ __inline__ long3 operator - (const long3 & a, const long3 & b)
{
    return make_long3(a.x-b.x, a.y-b.y, a.z-b.z);
}

static __host__ __device__ __inline__ long3 operator - (const long & a, const long3 & b)
{
    return make_long3(a-b.x, a-b.y, a-b.z);
}

static __host__ __device__ __inline__ long3 operator - (const long3 & a, const long & b)
{
    return make_long3(a.x-b, a.y-b, a.z-b);
}

static __host__ __device__ __inline__ long3 & operator -= (long3 & a, const long3 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

static __host__ __device__ __inline__ long3 & operator -= (long3 & a, const long & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    return a;
}

static __host__ __device__ __inline__ long4 operator - (const long4 & a, const long4 & b)
{
    return make_long4(a.x-b.x, a.y-b.y, a.z-b.z, a.w-b.w);
}

static __host__ __device__ __inline__ long4 operator - (const long & a, const long4 & b)
{
    return make_long4(a-b.x, a-b.y, a-b.z, a-b.w);
}

static __host__ __device__ __inline__ long4 operator - (const long4 & a, const long & b)
{
    return make_long4(a.x-b, a.y-b, a.z-b, a.w-b);
}

static __host__ __device__ __inline__ long4 & operator -= (long4 & a, const long4 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    a.w -= b.w;
    return a;
}

static __host__ __device__ __inline__ long4 & operator -= (long4 & a, const long & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    a.w -= b;
    return a;
}

static __host__ __device__ __inline__ ulong2 operator - (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x-b.x, a.y-b.y);
}

static __host__ __device__ __inline__ ulong2 operator - (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a-b.x, a-b.y);
}

static __host__ __device__ __inline__ ulong2 operator - (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x-b, a.y-b);
}

static __host__ __device__ __inline__ ulong2 & operator -= (ulong2 & a, const ulong2 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

static __host__ __device__ __inline__ ulong2 & operator -= (ulong2 & a, const ulong & b)
{
    a.x -= b;
    a.y -= b;
    return a;
}

static __host__ __device__ __inline__ ulong3 operator - (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x-b.x, a.y-b.y, a.z-b.z);
}

static __host__ __device__ __inline__ ulong3 operator - (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a-b.x, a-b.y, a-b.z);
}

static __host__ __device__ __inline__ ulong3 operator - (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x-b, a.y-b, a.z-b);
}

static __host__ __device__ __inline__ ulong3 & operator -= (ulong3 & a, const ulong3 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

static __host__ __device__ __inline__ ulong3 & operator -= (ulong3 & a, const ulong & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    return a;
}

static __host__ __device__ __inline__ ulong4 operator - (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x-b.x, a.y-b.y, a.z-b.z, a.w-b.w);
}

static __host__ __device__ __inline__ ulong4 operator - (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a-b.x, a-b.y, a-b.z, a-b.w);
}

static __host__ __device__ __inline__ ulong4 operator - (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x-b, a.y-b, a.z-b, a.w-b);
}

static __host__ __device__ __inline__ ulong4 & operator -= (ulong4 & a, const ulong4 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    a.w -= b.w;
    return a;
}

static __host__ __device__ __inline__ ulong4 & operator -= (ulong4 & a, const ulong & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    a.w -= b;
    return a;
}

static __host__ __device__ __inline__ float2 operator - (const float2 & a, const float2 & b)
{
    return make_float2(a.x-b.x, a.y-b.y);
}

static __host__ __device__ __inline__ float2 operator - (const float & a, const float2 & b)
{
    return make_float2(a-b.x, a-b.y);
}

static __host__ __device__ __inline__ float2 operator - (const float2 & a, const float & b)
{
    return make_float2(a.x-b, a.y-b);
}

static __host__ __device__ __inline__ float2 & operator -= (float2 & a, const float2 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

static __host__ __device__ __inline__ float2 & operator -= (float2 & a, const float & b)
{
    a.x -= b;
    a.y -= b;
    return a;
}

static __host__ __device__ __inline__ float3 operator - (const float3 & a, const float3 & b)
{
    return make_float3(a.x-b.x, a.y-b.y, a.z-b.z);
}

static __host__ __device__ __inline__ float3 operator - (const float & a, const float3 & b)
{
    return make_float3(a-b.x, a-b.y, a-b.z);
}

static __host__ __device__ __inline__ float3 operator - (const float3 & a, const float & b)
{
    return make_float3(a.x-b, a.y-b, a.z-b);
}

static __host__ __device__ __inline__ float3 & operator -= (float3 & a, const float3 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

static __host__ __device__ __inline__ float3 & operator -= (float3 & a, const float & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    return a;
}

static __host__ __device__ __inline__ float4 operator - (const float4 & a, const float4 & b)
{
    return make_float4(a.x-b.x, a.y-b.y, a.z-b.z, a.w-b.w);
}

static __host__ __device__ __inline__ float4 operator - (const float & a, const float4 & b)
{
    return make_float4(a-b.x, a-b.y, a-b.z, a-b.w);
}

static __host__ __device__ __inline__ float4 operator - (const float4 & a, const float & b)
{
    return make_float4(a.x-b, a.y-b, a.z-b, a.w-b);
}

static __host__ __device__ __inline__ float4 & operator -= (float4 & a, const float4 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    a.w -= b.w;
    return a;
}

static __host__ __device__ __inline__ float4 & operator -= (float4 & a, const float & b)
{
    a.x -= b;
    a.y -= b;
    a.z -= b;
    a.w -= b;
    return a;
}

static __host__ __device__ __inline__ double2 operator - (const double2 & a, const double2 & b)
{
    return make_double2(a.x-b.x, a.y-b.y);
}

static __host__ __device__ __inline__ double2 operator - (const double & a, const double2 & b)
{
    return make_double2(a-b.x, a-b.y);
}

static __host__ __device__ __inline__ double2 operator - (const double2 & a, const double & b)
{
    return make_double2(a.x-b, a.y-b);
}

static __host__ __device__ __inline__ double2 & operator -= (double2 & a, const double2 & b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

static __host__ __device__ __inline__ double2 & operator -= (double2 & a, const double & b)
{
    a.x -= b;
    a.y -= b;
    return a;
}

static __host__ __device__ __inline__ char2 operator * (const char2 & a, const char2 & b)
{
    return make_char2(a.x*b.x, a.y*b.y);
}

static __host__ __device__ __inline__ char2 operator * (const char & a, const char2 & b)
{
    return make_char2(a*b.x, a*b.y);
}

static __host__ __device__ __inline__ char2 operator * (const char2 & a, const char & b)
{
    return make_char2(a.x*b, a.y*b);
}

static __host__ __device__ __inline__ char2 & operator *= (char2 & a, const char2 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    return a;
}

static __host__ __device__ __inline__ char2 & operator *= (char2 & a, const char & b)
{
    a.x *= b;
    a.y *= b;
    return a;
}

static __host__ __device__ __inline__ char3 operator * (const char3 & a, const char3 & b)
{
    return make_char3(a.x*b.x, a.y*b.y, a.z*b.z);
}

static __host__ __device__ __inline__ char3 operator * (const char & a, const char3 & b)
{
    return make_char3(a*b.x, a*b.y, a*b.z);
}

static __host__ __device__ __inline__ char3 operator * (const char3 & a, const char & b)
{
    return make_char3(a.x*b, a.y*b, a.z*b);
}

static __host__ __device__ __inline__ char3 & operator *= (char3 & a, const char3 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    return a;
}

static __host__ __device__ __inline__ char3 & operator *= (char3 & a, const char & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    return a;
}

static __host__ __device__ __inline__ char4 operator * (const char4 & a, const char4 & b)
{
    return make_char4(a.x*b.x, a.y*b.y, a.z*b.z, a.w*b.w);
}

static __host__ __device__ __inline__ char4 operator * (const char & a, const char4 & b)
{
    return make_char4(a*b.x, a*b.y, a*b.z, a*b.w);
}

static __host__ __device__ __inline__ char4 operator * (const char4 & a, const char & b)
{
    return make_char4(a.x*b, a.y*b, a.z*b, a.w*b);
}

static __host__ __device__ __inline__ char4 & operator *= (char4 & a, const char4 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    a.w *= b.w;
    return a;
}

static __host__ __device__ __inline__ char4 & operator *= (char4 & a, const char & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    a.w *= b;
    return a;
}

static __host__ __device__ __inline__ uchar2 operator * (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x*b.x, a.y*b.y);
}

static __host__ __device__ __inline__ uchar2 operator * (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a*b.x, a*b.y);
}

static __host__ __device__ __inline__ uchar2 operator * (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x*b, a.y*b);
}

static __host__ __device__ __inline__ uchar2 & operator *= (uchar2 & a, const uchar2 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    return a;
}

static __host__ __device__ __inline__ uchar2 & operator *= (uchar2 & a, const uchar & b)
{
    a.x *= b;
    a.y *= b;
    return a;
}

static __host__ __device__ __inline__ uchar3 operator * (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x*b.x, a.y*b.y, a.z*b.z);
}

static __host__ __device__ __inline__ uchar3 operator * (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a*b.x, a*b.y, a*b.z);
}

static __host__ __device__ __inline__ uchar3 operator * (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x*b, a.y*b, a.z*b);
}

static __host__ __device__ __inline__ uchar3 & operator *= (uchar3 & a, const uchar3 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    return a;
}

static __host__ __device__ __inline__ uchar3 & operator *= (uchar3 & a, const uchar & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    return a;
}

static __host__ __device__ __inline__ uchar4 operator * (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x*b.x, a.y*b.y, a.z*b.z, a.w*b.w);
}

static __host__ __device__ __inline__ uchar4 operator * (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a*b.x, a*b.y, a*b.z, a*b.w);
}

static __host__ __device__ __inline__ uchar4 operator * (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x*b, a.y*b, a.z*b, a.w*b);
}

static __host__ __device__ __inline__ uchar4 & operator *= (uchar4 & a, const uchar4 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    a.w *= b.w;
    return a;
}

static __host__ __device__ __inline__ uchar4 & operator *= (uchar4 & a, const uchar & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    a.w *= b;
    return a;
}

static __host__ __device__ __inline__ short2 operator * (const short2 & a, const short2 & b)
{
    return make_short2(a.x*b.x, a.y*b.y);
}

static __host__ __device__ __inline__ short2 operator * (const short & a, const short2 & b)
{
    return make_short2(a*b.x, a*b.y);
}

static __host__ __device__ __inline__ short2 operator * (const short2 & a, const short & b)
{
    return make_short2(a.x*b, a.y*b);
}

static __host__ __device__ __inline__ short2 & operator *= (short2 & a, const short2 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    return a;
}

static __host__ __device__ __inline__ short2 & operator *= (short2 & a, const short & b)
{
    a.x *= b;
    a.y *= b;
    return a;
}

static __host__ __device__ __inline__ short3 operator * (const short3 & a, const short3 & b)
{
    return make_short3(a.x*b.x, a.y*b.y, a.z*b.z);
}

static __host__ __device__ __inline__ short3 operator * (const short & a, const short3 & b)
{
    return make_short3(a*b.x, a*b.y, a*b.z);
}

static __host__ __device__ __inline__ short3 operator * (const short3 & a, const short & b)
{
    return make_short3(a.x*b, a.y*b, a.z*b);
}

static __host__ __device__ __inline__ short3 & operator *= (short3 & a, const short3 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    return a;
}

static __host__ __device__ __inline__ short3 & operator *= (short3 & a, const short & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    return a;
}

static __host__ __device__ __inline__ short4 operator * (const short4 & a, const short4 & b)
{
    return make_short4(a.x*b.x, a.y*b.y, a.z*b.z, a.w*b.w);
}

static __host__ __device__ __inline__ short4 operator * (const short & a, const short4 & b)
{
    return make_short4(a*b.x, a*b.y, a*b.z, a*b.w);
}

static __host__ __device__ __inline__ short4 operator * (const short4 & a, const short & b)
{
    return make_short4(a.x*b, a.y*b, a.z*b, a.w*b);
}

static __host__ __device__ __inline__ short4 & operator *= (short4 & a, const short4 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    a.w *= b.w;
    return a;
}

static __host__ __device__ __inline__ short4 & operator *= (short4 & a, const short & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    a.w *= b;
    return a;
}

static __host__ __device__ __inline__ ushort2 operator * (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x*b.x, a.y*b.y);
}

static __host__ __device__ __inline__ ushort2 operator * (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a*b.x, a*b.y);
}

static __host__ __device__ __inline__ ushort2 operator * (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x*b, a.y*b);
}

static __host__ __device__ __inline__ ushort2 & operator *= (ushort2 & a, const ushort2 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    return a;
}

static __host__ __device__ __inline__ ushort2 & operator *= (ushort2 & a, const ushort & b)
{
    a.x *= b;
    a.y *= b;
    return a;
}

static __host__ __device__ __inline__ ushort3 operator * (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x*b.x, a.y*b.y, a.z*b.z);
}

static __host__ __device__ __inline__ ushort3 operator * (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a*b.x, a*b.y, a*b.z);
}

static __host__ __device__ __inline__ ushort3 operator * (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x*b, a.y*b, a.z*b);
}

static __host__ __device__ __inline__ ushort3 & operator *= (ushort3 & a, const ushort3 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    return a;
}

static __host__ __device__ __inline__ ushort3 & operator *= (ushort3 & a, const ushort & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    return a;
}

static __host__ __device__ __inline__ ushort4 operator * (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x*b.x, a.y*b.y, a.z*b.z, a.w*b.w);
}

static __host__ __device__ __inline__ ushort4 operator * (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a*b.x, a*b.y, a*b.z, a*b.w);
}

static __host__ __device__ __inline__ ushort4 operator * (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x*b, a.y*b, a.z*b, a.w*b);
}

static __host__ __device__ __inline__ ushort4 & operator *= (ushort4 & a, const ushort4 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    a.w *= b.w;
    return a;
}

static __host__ __device__ __inline__ ushort4 & operator *= (ushort4 & a, const ushort & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    a.w *= b;
    return a;
}

static __host__ __device__ __inline__ int2 operator * (const int2 & a, const int2 & b)
{
    return make_int2(a.x*b.x, a.y*b.y);
}

static __host__ __device__ __inline__ int2 operator * (const int & a, const int2 & b)
{
    return make_int2(a*b.x, a*b.y);
}

static __host__ __device__ __inline__ int2 operator * (const int2 & a, const int & b)
{
    return make_int2(a.x*b, a.y*b);
}

static __host__ __device__ __inline__ int2 & operator *= (int2 & a, const int2 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    return a;
}

static __host__ __device__ __inline__ int2 & operator *= (int2 & a, const int & b)
{
    a.x *= b;
    a.y *= b;
    return a;
}

static __host__ __device__ __inline__ int3 operator * (const int3 & a, const int3 & b)
{
    return make_int3(a.x*b.x, a.y*b.y, a.z*b.z);
}

static __host__ __device__ __inline__ int3 operator * (const int & a, const int3 & b)
{
    return make_int3(a*b.x, a*b.y, a*b.z);
}

static __host__ __device__ __inline__ int3 operator * (const int3 & a, const int & b)
{
    return make_int3(a.x*b, a.y*b, a.z*b);
}

static __host__ __device__ __inline__ int3 & operator *= (int3 & a, const int3 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    return a;
}

static __host__ __device__ __inline__ int3 & operator *= (int3 & a, const int & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    return a;
}

static __host__ __device__ __inline__ int4 operator * (const int4 & a, const int4 & b)
{
    return make_int4(a.x*b.x, a.y*b.y, a.z*b.z, a.w*b.w);
}

static __host__ __device__ __inline__ int4 operator * (const int & a, const int4 & b)
{
    return make_int4(a*b.x, a*b.y, a*b.z, a*b.w);
}

static __host__ __device__ __inline__ int4 operator * (const int4 & a, const int & b)
{
    return make_int4(a.x*b, a.y*b, a.z*b, a.w*b);
}

static __host__ __device__ __inline__ int4 & operator *= (int4 & a, const int4 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    a.w *= b.w;
    return a;
}

static __host__ __device__ __inline__ int4 & operator *= (int4 & a, const int & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    a.w *= b;
    return a;
}

static __host__ __device__ __inline__ uint2 operator * (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x*b.x, a.y*b.y);
}

static __host__ __device__ __inline__ uint2 operator * (const uint & a, const uint2 & b)
{
    return make_uint2(a*b.x, a*b.y);
}

static __host__ __device__ __inline__ uint2 operator * (const uint2 & a, const uint & b)
{
    return make_uint2(a.x*b, a.y*b);
}

static __host__ __device__ __inline__ uint2 & operator *= (uint2 & a, const uint2 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    return a;
}

static __host__ __device__ __inline__ uint2 & operator *= (uint2 & a, const uint & b)
{
    a.x *= b;
    a.y *= b;
    return a;
}

static __host__ __device__ __inline__ uint3 operator * (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x*b.x, a.y*b.y, a.z*b.z);
}

static __host__ __device__ __inline__ uint3 operator * (const uint & a, const uint3 & b)
{
    return make_uint3(a*b.x, a*b.y, a*b.z);
}

static __host__ __device__ __inline__ uint3 operator * (const uint3 & a, const uint & b)
{
    return make_uint3(a.x*b, a.y*b, a.z*b);
}

static __host__ __device__ __inline__ uint3 & operator *= (uint3 & a, const uint3 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    return a;
}

static __host__ __device__ __inline__ uint3 & operator *= (uint3 & a, const uint & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    return a;
}

static __host__ __device__ __inline__ uint4 operator * (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x*b.x, a.y*b.y, a.z*b.z, a.w*b.w);
}

static __host__ __device__ __inline__ uint4 operator * (const uint & a, const uint4 & b)
{
    return make_uint4(a*b.x, a*b.y, a*b.z, a*b.w);
}

static __host__ __device__ __inline__ uint4 operator * (const uint4 & a, const uint & b)
{
    return make_uint4(a.x*b, a.y*b, a.z*b, a.w*b);
}

static __host__ __device__ __inline__ uint4 & operator *= (uint4 & a, const uint4 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    a.w *= b.w;
    return a;
}

static __host__ __device__ __inline__ uint4 & operator *= (uint4 & a, const uint & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    a.w *= b;
    return a;
}

static __host__ __device__ __inline__ long2 operator * (const long2 & a, const long2 & b)
{
    return make_long2(a.x*b.x, a.y*b.y);
}

static __host__ __device__ __inline__ long2 operator * (const long & a, const long2 & b)
{
    return make_long2(a*b.x, a*b.y);
}

static __host__ __device__ __inline__ long2 operator * (const long2 & a, const long & b)
{
    return make_long2(a.x*b, a.y*b);
}

static __host__ __device__ __inline__ long2 & operator *= (long2 & a, const long2 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    return a;
}

static __host__ __device__ __inline__ long2 & operator *= (long2 & a, const long & b)
{
    a.x *= b;
    a.y *= b;
    return a;
}

static __host__ __device__ __inline__ long3 operator * (const long3 & a, const long3 & b)
{
    return make_long3(a.x*b.x, a.y*b.y, a.z*b.z);
}

static __host__ __device__ __inline__ long3 operator * (const long & a, const long3 & b)
{
    return make_long3(a*b.x, a*b.y, a*b.z);
}

static __host__ __device__ __inline__ long3 operator * (const long3 & a, const long & b)
{
    return make_long3(a.x*b, a.y*b, a.z*b);
}

static __host__ __device__ __inline__ long3 & operator *= (long3 & a, const long3 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    return a;
}

static __host__ __device__ __inline__ long3 & operator *= (long3 & a, const long & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    return a;
}

static __host__ __device__ __inline__ long4 operator * (const long4 & a, const long4 & b)
{
    return make_long4(a.x*b.x, a.y*b.y, a.z*b.z, a.w*b.w);
}

static __host__ __device__ __inline__ long4 operator * (const long & a, const long4 & b)
{
    return make_long4(a*b.x, a*b.y, a*b.z, a*b.w);
}

static __host__ __device__ __inline__ long4 operator * (const long4 & a, const long & b)
{
    return make_long4(a.x*b, a.y*b, a.z*b, a.w*b);
}

static __host__ __device__ __inline__ long4 & operator *= (long4 & a, const long4 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    a.w *= b.w;
    return a;
}

static __host__ __device__ __inline__ long4 & operator *= (long4 & a, const long & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    a.w *= b;
    return a;
}

static __host__ __device__ __inline__ ulong2 operator * (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x*b.x, a.y*b.y);
}

static __host__ __device__ __inline__ ulong2 operator * (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a*b.x, a*b.y);
}

static __host__ __device__ __inline__ ulong2 operator * (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x*b, a.y*b);
}

static __host__ __device__ __inline__ ulong2 & operator *= (ulong2 & a, const ulong2 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    return a;
}

static __host__ __device__ __inline__ ulong2 & operator *= (ulong2 & a, const ulong & b)
{
    a.x *= b;
    a.y *= b;
    return a;
}

static __host__ __device__ __inline__ ulong3 operator * (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x*b.x, a.y*b.y, a.z*b.z);
}

static __host__ __device__ __inline__ ulong3 operator * (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a*b.x, a*b.y, a*b.z);
}

static __host__ __device__ __inline__ ulong3 operator * (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x*b, a.y*b, a.z*b);
}

static __host__ __device__ __inline__ ulong3 & operator *= (ulong3 & a, const ulong3 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    return a;
}

static __host__ __device__ __inline__ ulong3 & operator *= (ulong3 & a, const ulong & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    return a;
}

static __host__ __device__ __inline__ ulong4 operator * (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x*b.x, a.y*b.y, a.z*b.z, a.w*b.w);
}

static __host__ __device__ __inline__ ulong4 operator * (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a*b.x, a*b.y, a*b.z, a*b.w);
}

static __host__ __device__ __inline__ ulong4 operator * (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x*b, a.y*b, a.z*b, a.w*b);
}

static __host__ __device__ __inline__ ulong4 & operator *= (ulong4 & a, const ulong4 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    a.w *= b.w;
    return a;
}

static __host__ __device__ __inline__ ulong4 & operator *= (ulong4 & a, const ulong & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    a.w *= b;
    return a;
}

static __host__ __device__ __inline__ float2 operator * (const float2 & a, const float2 & b)
{
    return make_float2(a.x*b.x, a.y*b.y);
}

static __host__ __device__ __inline__ float2 operator * (const float & a, const float2 & b)
{
    return make_float2(a*b.x, a*b.y);
}

static __host__ __device__ __inline__ float2 operator * (const float2 & a, const float & b)
{
    return make_float2(a.x*b, a.y*b);
}

static __host__ __device__ __inline__ float2 & operator *= (float2 & a, const float2 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    return a;
}

static __host__ __device__ __inline__ float2 & operator *= (float2 & a, const float & b)
{
    a.x *= b;
    a.y *= b;
    return a;
}

static __host__ __device__ __inline__ float3 operator * (const float3 & a, const float3 & b)
{
    return make_float3(a.x*b.x, a.y*b.y, a.z*b.z);
}

static __host__ __device__ __inline__ float3 operator * (const float & a, const float3 & b)
{
    return make_float3(a*b.x, a*b.y, a*b.z);
}

static __host__ __device__ __inline__ float3 operator * (const float3 & a, const float & b)
{
    return make_float3(a.x*b, a.y*b, a.z*b);
}

static __host__ __device__ __inline__ float3 & operator *= (float3 & a, const float3 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    return a;
}

static __host__ __device__ __inline__ float3 & operator *= (float3 & a, const float & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    return a;
}

static __host__ __device__ __inline__ float4 operator * (const float4 & a, const float4 & b)
{
    return make_float4(a.x*b.x, a.y*b.y, a.z*b.z, a.w*b.w);
}

static __host__ __device__ __inline__ float4 operator * (const float & a, const float4 & b)
{
    return make_float4(a*b.x, a*b.y, a*b.z, a*b.w);
}

static __host__ __device__ __inline__ float4 operator * (const float4 & a, const float & b)
{
    return make_float4(a.x*b, a.y*b, a.z*b, a.w*b);
}

static __host__ __device__ __inline__ float4 & operator *= (float4 & a, const float4 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    a.w *= b.w;
    return a;
}

static __host__ __device__ __inline__ float4 & operator *= (float4 & a, const float & b)
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    a.w *= b;
    return a;
}

static __host__ __device__ __inline__ double2 operator * (const double2 & a, const double2 & b)
{
    return make_double2(a.x*b.x, a.y*b.y);
}

static __host__ __device__ __inline__ double2 operator * (const double & a, const double2 & b)
{
    return make_double2(a*b.x, a*b.y);
}

static __host__ __device__ __inline__ double2 operator * (const double2 & a, const double & b)
{
    return make_double2(a.x*b, a.y*b);
}

static __host__ __device__ __inline__ double2 & operator *= (double2 & a, const double2 & b)
{
    a.x *= b.x;
    a.y *= b.y;
    return a;
}

static __host__ __device__ __inline__ double2 & operator *= (double2 & a, const double & b)
{
    a.x *= b;
    a.y *= b;
    return a;
}

static __host__ __device__ __inline__ char2 operator / (const char2 & a, const char2 & b)
{
    return make_char2(a.x/b.x, a.y/b.y);
}

static __host__ __device__ __inline__ char2 operator / (const char & a, const char2 & b)
{
    return make_char2(a/b.x, a/b.y);
}

static __host__ __device__ __inline__ char2 operator / (const char2 & a, const char & b)
{
    return make_char2(a.x/b, a.y/b);
}

static __host__ __device__ __inline__ char2 & operator /= (char2 & a, const char2 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    return a;
}

static __host__ __device__ __inline__ char2 & operator /= (char2 & a, const char & b)
{
    a.x /= b;
    a.y /= b;
    return a;
}

static __host__ __device__ __inline__ char3 operator / (const char3 & a, const char3 & b)
{
    return make_char3(a.x/b.x, a.y/b.y, a.z/b.z);
}

static __host__ __device__ __inline__ char3 operator / (const char & a, const char3 & b)
{
    return make_char3(a/b.x, a/b.y, a/b.z);
}

static __host__ __device__ __inline__ char3 operator / (const char3 & a, const char & b)
{
    return make_char3(a.x/b, a.y/b, a.z/b);
}

static __host__ __device__ __inline__ char3 & operator /= (char3 & a, const char3 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    return a;
}

static __host__ __device__ __inline__ char3 & operator /= (char3 & a, const char & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    return a;
}

static __host__ __device__ __inline__ char4 operator / (const char4 & a, const char4 & b)
{
    return make_char4(a.x/b.x, a.y/b.y, a.z/b.z, a.w/b.w);
}

static __host__ __device__ __inline__ char4 operator / (const char & a, const char4 & b)
{
    return make_char4(a/b.x, a/b.y, a/b.z, a/b.w);
}

static __host__ __device__ __inline__ char4 operator / (const char4 & a, const char & b)
{
    return make_char4(a.x/b, a.y/b, a.z/b, a.w/b);
}

static __host__ __device__ __inline__ char4 & operator /= (char4 & a, const char4 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    a.w /= b.w;
    return a;
}

static __host__ __device__ __inline__ char4 & operator /= (char4 & a, const char & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    a.w /= b;
    return a;
}

static __host__ __device__ __inline__ uchar2 operator / (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x/b.x, a.y/b.y);
}

static __host__ __device__ __inline__ uchar2 operator / (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a/b.x, a/b.y);
}

static __host__ __device__ __inline__ uchar2 operator / (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x/b, a.y/b);
}

static __host__ __device__ __inline__ uchar2 & operator /= (uchar2 & a, const uchar2 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    return a;
}

static __host__ __device__ __inline__ uchar2 & operator /= (uchar2 & a, const uchar & b)
{
    a.x /= b;
    a.y /= b;
    return a;
}

static __host__ __device__ __inline__ uchar3 operator / (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x/b.x, a.y/b.y, a.z/b.z);
}

static __host__ __device__ __inline__ uchar3 operator / (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a/b.x, a/b.y, a/b.z);
}

static __host__ __device__ __inline__ uchar3 operator / (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x/b, a.y/b, a.z/b);
}

static __host__ __device__ __inline__ uchar3 & operator /= (uchar3 & a, const uchar3 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    return a;
}

static __host__ __device__ __inline__ uchar3 & operator /= (uchar3 & a, const uchar & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    return a;
}

static __host__ __device__ __inline__ uchar4 operator / (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x/b.x, a.y/b.y, a.z/b.z, a.w/b.w);
}

static __host__ __device__ __inline__ uchar4 operator / (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a/b.x, a/b.y, a/b.z, a/b.w);
}

static __host__ __device__ __inline__ uchar4 operator / (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x/b, a.y/b, a.z/b, a.w/b);
}

static __host__ __device__ __inline__ uchar4 & operator /= (uchar4 & a, const uchar4 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    a.w /= b.w;
    return a;
}

static __host__ __device__ __inline__ uchar4 & operator /= (uchar4 & a, const uchar & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    a.w /= b;
    return a;
}

static __host__ __device__ __inline__ short2 operator / (const short2 & a, const short2 & b)
{
    return make_short2(a.x/b.x, a.y/b.y);
}

static __host__ __device__ __inline__ short2 operator / (const short & a, const short2 & b)
{
    return make_short2(a/b.x, a/b.y);
}

static __host__ __device__ __inline__ short2 operator / (const short2 & a, const short & b)
{
    return make_short2(a.x/b, a.y/b);
}

static __host__ __device__ __inline__ short2 & operator /= (short2 & a, const short2 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    return a;
}

static __host__ __device__ __inline__ short2 & operator /= (short2 & a, const short & b)
{
    a.x /= b;
    a.y /= b;
    return a;
}

static __host__ __device__ __inline__ short3 operator / (const short3 & a, const short3 & b)
{
    return make_short3(a.x/b.x, a.y/b.y, a.z/b.z);
}

static __host__ __device__ __inline__ short3 operator / (const short & a, const short3 & b)
{
    return make_short3(a/b.x, a/b.y, a/b.z);
}

static __host__ __device__ __inline__ short3 operator / (const short3 & a, const short & b)
{
    return make_short3(a.x/b, a.y/b, a.z/b);
}

static __host__ __device__ __inline__ short3 & operator /= (short3 & a, const short3 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    return a;
}

static __host__ __device__ __inline__ short3 & operator /= (short3 & a, const short & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    return a;
}

static __host__ __device__ __inline__ short4 operator / (const short4 & a, const short4 & b)
{
    return make_short4(a.x/b.x, a.y/b.y, a.z/b.z, a.w/b.w);
}

static __host__ __device__ __inline__ short4 operator / (const short & a, const short4 & b)
{
    return make_short4(a/b.x, a/b.y, a/b.z, a/b.w);
}

static __host__ __device__ __inline__ short4 operator / (const short4 & a, const short & b)
{
    return make_short4(a.x/b, a.y/b, a.z/b, a.w/b);
}

static __host__ __device__ __inline__ short4 & operator /= (short4 & a, const short4 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    a.w /= b.w;
    return a;
}

static __host__ __device__ __inline__ short4 & operator /= (short4 & a, const short & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    a.w /= b;
    return a;
}

static __host__ __device__ __inline__ ushort2 operator / (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x/b.x, a.y/b.y);
}

static __host__ __device__ __inline__ ushort2 operator / (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a/b.x, a/b.y);
}

static __host__ __device__ __inline__ ushort2 operator / (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x/b, a.y/b);
}

static __host__ __device__ __inline__ ushort2 & operator /= (ushort2 & a, const ushort2 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    return a;
}

static __host__ __device__ __inline__ ushort2 & operator /= (ushort2 & a, const ushort & b)
{
    a.x /= b;
    a.y /= b;
    return a;
}

static __host__ __device__ __inline__ ushort3 operator / (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x/b.x, a.y/b.y, a.z/b.z);
}

static __host__ __device__ __inline__ ushort3 operator / (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a/b.x, a/b.y, a/b.z);
}

static __host__ __device__ __inline__ ushort3 operator / (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x/b, a.y/b, a.z/b);
}

static __host__ __device__ __inline__ ushort3 & operator /= (ushort3 & a, const ushort3 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    return a;
}

static __host__ __device__ __inline__ ushort3 & operator /= (ushort3 & a, const ushort & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    return a;
}

static __host__ __device__ __inline__ ushort4 operator / (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x/b.x, a.y/b.y, a.z/b.z, a.w/b.w);
}

static __host__ __device__ __inline__ ushort4 operator / (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a/b.x, a/b.y, a/b.z, a/b.w);
}

static __host__ __device__ __inline__ ushort4 operator / (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x/b, a.y/b, a.z/b, a.w/b);
}

static __host__ __device__ __inline__ ushort4 & operator /= (ushort4 & a, const ushort4 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    a.w /= b.w;
    return a;
}

static __host__ __device__ __inline__ ushort4 & operator /= (ushort4 & a, const ushort & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    a.w /= b;
    return a;
}

static __host__ __device__ __inline__ int2 operator / (const int2 & a, const int2 & b)
{
    return make_int2(a.x/b.x, a.y/b.y);
}

static __host__ __device__ __inline__ int2 operator / (const int & a, const int2 & b)
{
    return make_int2(a/b.x, a/b.y);
}

static __host__ __device__ __inline__ int2 operator / (const int2 & a, const int & b)
{
    return make_int2(a.x/b, a.y/b);
}

static __host__ __device__ __inline__ int2 & operator /= (int2 & a, const int2 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    return a;
}

static __host__ __device__ __inline__ int2 & operator /= (int2 & a, const int & b)
{
    a.x /= b;
    a.y /= b;
    return a;
}

static __host__ __device__ __inline__ int3 operator / (const int3 & a, const int3 & b)
{
    return make_int3(a.x/b.x, a.y/b.y, a.z/b.z);
}

static __host__ __device__ __inline__ int3 operator / (const int & a, const int3 & b)
{
    return make_int3(a/b.x, a/b.y, a/b.z);
}

static __host__ __device__ __inline__ int3 operator / (const int3 & a, const int & b)
{
    return make_int3(a.x/b, a.y/b, a.z/b);
}

static __host__ __device__ __inline__ int3 & operator /= (int3 & a, const int3 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    return a;
}

static __host__ __device__ __inline__ int3 & operator /= (int3 & a, const int & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    return a;
}

static __host__ __device__ __inline__ int4 operator / (const int4 & a, const int4 & b)
{
    return make_int4(a.x/b.x, a.y/b.y, a.z/b.z, a.w/b.w);
}

static __host__ __device__ __inline__ int4 operator / (const int & a, const int4 & b)
{
    return make_int4(a/b.x, a/b.y, a/b.z, a/b.w);
}

static __host__ __device__ __inline__ int4 operator / (const int4 & a, const int & b)
{
    return make_int4(a.x/b, a.y/b, a.z/b, a.w/b);
}

static __host__ __device__ __inline__ int4 & operator /= (int4 & a, const int4 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    a.w /= b.w;
    return a;
}

static __host__ __device__ __inline__ int4 & operator /= (int4 & a, const int & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    a.w /= b;
    return a;
}

static __host__ __device__ __inline__ uint2 operator / (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x/b.x, a.y/b.y);
}

static __host__ __device__ __inline__ uint2 operator / (const uint & a, const uint2 & b)
{
    return make_uint2(a/b.x, a/b.y);
}

static __host__ __device__ __inline__ uint2 operator / (const uint2 & a, const uint & b)
{
    return make_uint2(a.x/b, a.y/b);
}

static __host__ __device__ __inline__ uint2 & operator /= (uint2 & a, const uint2 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    return a;
}

static __host__ __device__ __inline__ uint2 & operator /= (uint2 & a, const uint & b)
{
    a.x /= b;
    a.y /= b;
    return a;
}

static __host__ __device__ __inline__ uint3 operator / (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x/b.x, a.y/b.y, a.z/b.z);
}

static __host__ __device__ __inline__ uint3 operator / (const uint & a, const uint3 & b)
{
    return make_uint3(a/b.x, a/b.y, a/b.z);
}

static __host__ __device__ __inline__ uint3 operator / (const uint3 & a, const uint & b)
{
    return make_uint3(a.x/b, a.y/b, a.z/b);
}

static __host__ __device__ __inline__ uint3 & operator /= (uint3 & a, const uint3 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    return a;
}

static __host__ __device__ __inline__ uint3 & operator /= (uint3 & a, const uint & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    return a;
}

static __host__ __device__ __inline__ uint4 operator / (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x/b.x, a.y/b.y, a.z/b.z, a.w/b.w);
}

static __host__ __device__ __inline__ uint4 operator / (const uint & a, const uint4 & b)
{
    return make_uint4(a/b.x, a/b.y, a/b.z, a/b.w);
}

static __host__ __device__ __inline__ uint4 operator / (const uint4 & a, const uint & b)
{
    return make_uint4(a.x/b, a.y/b, a.z/b, a.w/b);
}

static __host__ __device__ __inline__ uint4 & operator /= (uint4 & a, const uint4 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    a.w /= b.w;
    return a;
}

static __host__ __device__ __inline__ uint4 & operator /= (uint4 & a, const uint & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    a.w /= b;
    return a;
}

static __host__ __device__ __inline__ long2 operator / (const long2 & a, const long2 & b)
{
    return make_long2(a.x/b.x, a.y/b.y);
}

static __host__ __device__ __inline__ long2 operator / (const long & a, const long2 & b)
{
    return make_long2(a/b.x, a/b.y);
}

static __host__ __device__ __inline__ long2 operator / (const long2 & a, const long & b)
{
    return make_long2(a.x/b, a.y/b);
}

static __host__ __device__ __inline__ long2 & operator /= (long2 & a, const long2 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    return a;
}

static __host__ __device__ __inline__ long2 & operator /= (long2 & a, const long & b)
{
    a.x /= b;
    a.y /= b;
    return a;
}

static __host__ __device__ __inline__ long3 operator / (const long3 & a, const long3 & b)
{
    return make_long3(a.x/b.x, a.y/b.y, a.z/b.z);
}

static __host__ __device__ __inline__ long3 operator / (const long & a, const long3 & b)
{
    return make_long3(a/b.x, a/b.y, a/b.z);
}

static __host__ __device__ __inline__ long3 operator / (const long3 & a, const long & b)
{
    return make_long3(a.x/b, a.y/b, a.z/b);
}

static __host__ __device__ __inline__ long3 & operator /= (long3 & a, const long3 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    return a;
}

static __host__ __device__ __inline__ long3 & operator /= (long3 & a, const long & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    return a;
}

static __host__ __device__ __inline__ long4 operator / (const long4 & a, const long4 & b)
{
    return make_long4(a.x/b.x, a.y/b.y, a.z/b.z, a.w/b.w);
}

static __host__ __device__ __inline__ long4 operator / (const long & a, const long4 & b)
{
    return make_long4(a/b.x, a/b.y, a/b.z, a/b.w);
}

static __host__ __device__ __inline__ long4 operator / (const long4 & a, const long & b)
{
    return make_long4(a.x/b, a.y/b, a.z/b, a.w/b);
}

static __host__ __device__ __inline__ long4 & operator /= (long4 & a, const long4 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    a.w /= b.w;
    return a;
}

static __host__ __device__ __inline__ long4 & operator /= (long4 & a, const long & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    a.w /= b;
    return a;
}

static __host__ __device__ __inline__ ulong2 operator / (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x/b.x, a.y/b.y);
}

static __host__ __device__ __inline__ ulong2 operator / (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a/b.x, a/b.y);
}

static __host__ __device__ __inline__ ulong2 operator / (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x/b, a.y/b);
}

static __host__ __device__ __inline__ ulong2 & operator /= (ulong2 & a, const ulong2 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    return a;
}

static __host__ __device__ __inline__ ulong2 & operator /= (ulong2 & a, const ulong & b)
{
    a.x /= b;
    a.y /= b;
    return a;
}

static __host__ __device__ __inline__ ulong3 operator / (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x/b.x, a.y/b.y, a.z/b.z);
}

static __host__ __device__ __inline__ ulong3 operator / (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a/b.x, a/b.y, a/b.z);
}

static __host__ __device__ __inline__ ulong3 operator / (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x/b, a.y/b, a.z/b);
}

static __host__ __device__ __inline__ ulong3 & operator /= (ulong3 & a, const ulong3 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    return a;
}

static __host__ __device__ __inline__ ulong3 & operator /= (ulong3 & a, const ulong & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    return a;
}

static __host__ __device__ __inline__ ulong4 operator / (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x/b.x, a.y/b.y, a.z/b.z, a.w/b.w);
}

static __host__ __device__ __inline__ ulong4 operator / (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a/b.x, a/b.y, a/b.z, a/b.w);
}

static __host__ __device__ __inline__ ulong4 operator / (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x/b, a.y/b, a.z/b, a.w/b);
}

static __host__ __device__ __inline__ ulong4 & operator /= (ulong4 & a, const ulong4 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    a.w /= b.w;
    return a;
}

static __host__ __device__ __inline__ ulong4 & operator /= (ulong4 & a, const ulong & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    a.w /= b;
    return a;
}

static __host__ __device__ __inline__ float2 operator / (const float2 & a, const float2 & b)
{
    return make_float2(a.x/b.x, a.y/b.y);
}

static __host__ __device__ __inline__ float2 operator / (const float & a, const float2 & b)
{
    return make_float2(a/b.x, a/b.y);
}

static __host__ __device__ __inline__ float2 operator / (const float2 & a, const float & b)
{
    return make_float2(a.x/b, a.y/b);
}

static __host__ __device__ __inline__ float2 & operator /= (float2 & a, const float2 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    return a;
}

static __host__ __device__ __inline__ float2 & operator /= (float2 & a, const float & b)
{
    a.x /= b;
    a.y /= b;
    return a;
}

static __host__ __device__ __inline__ float3 operator / (const float3 & a, const float3 & b)
{
    return make_float3(a.x/b.x, a.y/b.y, a.z/b.z);
}

static __host__ __device__ __inline__ float3 operator / (const float & a, const float3 & b)
{
    return make_float3(a/b.x, a/b.y, a/b.z);
}

static __host__ __device__ __inline__ float3 operator / (const float3 & a, const float & b)
{
    return make_float3(a.x/b, a.y/b, a.z/b);
}

static __host__ __device__ __inline__ float3 & operator /= (float3 & a, const float3 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    return a;
}

static __host__ __device__ __inline__ float3 & operator /= (float3 & a, const float & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    return a;
}

static __host__ __device__ __inline__ float4 operator / (const float4 & a, const float4 & b)
{
    return make_float4(a.x/b.x, a.y/b.y, a.z/b.z, a.w/b.w);
}

static __host__ __device__ __inline__ float4 operator / (const float & a, const float4 & b)
{
    return make_float4(a/b.x, a/b.y, a/b.z, a/b.w);
}

static __host__ __device__ __inline__ float4 operator / (const float4 & a, const float & b)
{
    return make_float4(a.x/b, a.y/b, a.z/b, a.w/b);
}

static __host__ __device__ __inline__ float4 & operator /= (float4 & a, const float4 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    a.w /= b.w;
    return a;
}

static __host__ __device__ __inline__ float4 & operator /= (float4 & a, const float & b)
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    a.w /= b;
    return a;
}

static __host__ __device__ __inline__ double2 operator / (const double2 & a, const double2 & b)
{
    return make_double2(a.x/b.x, a.y/b.y);
}

static __host__ __device__ __inline__ double2 operator / (const double & a, const double2 & b)
{
    return make_double2(a/b.x, a/b.y);
}

static __host__ __device__ __inline__ double2 operator / (const double2 & a, const double & b)
{
    return make_double2(a.x/b, a.y/b);
}

static __host__ __device__ __inline__ double2 & operator /= (double2 & a, const double2 & b)
{
    a.x /= b.x;
    a.y /= b.y;
    return a;
}

static __host__ __device__ __inline__ double2 & operator /= (double2 & a, const double & b)
{
    a.x /= b;
    a.y /= b;
    return a;
}

static __host__ __device__ __inline__ char2 operator % (const char2 & a, const char2 & b)
{
    return make_char2(a.x%b.x, a.y%b.y);
}

static __host__ __device__ __inline__ char2 operator % (const char & a, const char2 & b)
{
    return make_char2(a%b.x, a%b.y);
}

static __host__ __device__ __inline__ char2 operator % (const char2 & a, const char & b)
{
    return make_char2(a.x%b, a.y%b);
}

static __host__ __device__ __inline__ char2 & operator %= (char2 & a, const char2 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    return a;
}

static __host__ __device__ __inline__ char2 & operator %= (char2 & a, const char & b)
{
    a.x %= b;
    a.y %= b;
    return a;
}

static __host__ __device__ __inline__ char3 operator % (const char3 & a, const char3 & b)
{
    return make_char3(a.x%b.x, a.y%b.y, a.z%b.z);
}

static __host__ __device__ __inline__ char3 operator % (const char & a, const char3 & b)
{
    return make_char3(a%b.x, a%b.y, a%b.z);
}

static __host__ __device__ __inline__ char3 operator % (const char3 & a, const char & b)
{
    return make_char3(a.x%b, a.y%b, a.z%b);
}

static __host__ __device__ __inline__ char3 & operator %= (char3 & a, const char3 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    return a;
}

static __host__ __device__ __inline__ char3 & operator %= (char3 & a, const char & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    return a;
}

static __host__ __device__ __inline__ char4 operator % (const char4 & a, const char4 & b)
{
    return make_char4(a.x%b.x, a.y%b.y, a.z%b.z, a.w%b.w);
}

static __host__ __device__ __inline__ char4 operator % (const char & a, const char4 & b)
{
    return make_char4(a%b.x, a%b.y, a%b.z, a%b.w);
}

static __host__ __device__ __inline__ char4 operator % (const char4 & a, const char & b)
{
    return make_char4(a.x%b, a.y%b, a.z%b, a.w%b);
}

static __host__ __device__ __inline__ char4 & operator %= (char4 & a, const char4 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    a.w %= b.w;
    return a;
}

static __host__ __device__ __inline__ char4 & operator %= (char4 & a, const char & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    a.w %= b;
    return a;
}

static __host__ __device__ __inline__ uchar2 operator % (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x%b.x, a.y%b.y);
}

static __host__ __device__ __inline__ uchar2 operator % (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a%b.x, a%b.y);
}

static __host__ __device__ __inline__ uchar2 operator % (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x%b, a.y%b);
}

static __host__ __device__ __inline__ uchar2 & operator %= (uchar2 & a, const uchar2 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    return a;
}

static __host__ __device__ __inline__ uchar2 & operator %= (uchar2 & a, const uchar & b)
{
    a.x %= b;
    a.y %= b;
    return a;
}

static __host__ __device__ __inline__ uchar3 operator % (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x%b.x, a.y%b.y, a.z%b.z);
}

static __host__ __device__ __inline__ uchar3 operator % (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a%b.x, a%b.y, a%b.z);
}

static __host__ __device__ __inline__ uchar3 operator % (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x%b, a.y%b, a.z%b);
}

static __host__ __device__ __inline__ uchar3 & operator %= (uchar3 & a, const uchar3 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    return a;
}

static __host__ __device__ __inline__ uchar3 & operator %= (uchar3 & a, const uchar & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    return a;
}

static __host__ __device__ __inline__ uchar4 operator % (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x%b.x, a.y%b.y, a.z%b.z, a.w%b.w);
}

static __host__ __device__ __inline__ uchar4 operator % (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a%b.x, a%b.y, a%b.z, a%b.w);
}

static __host__ __device__ __inline__ uchar4 operator % (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x%b, a.y%b, a.z%b, a.w%b);
}

static __host__ __device__ __inline__ uchar4 & operator %= (uchar4 & a, const uchar4 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    a.w %= b.w;
    return a;
}

static __host__ __device__ __inline__ uchar4 & operator %= (uchar4 & a, const uchar & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    a.w %= b;
    return a;
}

static __host__ __device__ __inline__ short2 operator % (const short2 & a, const short2 & b)
{
    return make_short2(a.x%b.x, a.y%b.y);
}

static __host__ __device__ __inline__ short2 operator % (const short & a, const short2 & b)
{
    return make_short2(a%b.x, a%b.y);
}

static __host__ __device__ __inline__ short2 operator % (const short2 & a, const short & b)
{
    return make_short2(a.x%b, a.y%b);
}

static __host__ __device__ __inline__ short2 & operator %= (short2 & a, const short2 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    return a;
}

static __host__ __device__ __inline__ short2 & operator %= (short2 & a, const short & b)
{
    a.x %= b;
    a.y %= b;
    return a;
}

static __host__ __device__ __inline__ short3 operator % (const short3 & a, const short3 & b)
{
    return make_short3(a.x%b.x, a.y%b.y, a.z%b.z);
}

static __host__ __device__ __inline__ short3 operator % (const short & a, const short3 & b)
{
    return make_short3(a%b.x, a%b.y, a%b.z);
}

static __host__ __device__ __inline__ short3 operator % (const short3 & a, const short & b)
{
    return make_short3(a.x%b, a.y%b, a.z%b);
}

static __host__ __device__ __inline__ short3 & operator %= (short3 & a, const short3 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    return a;
}

static __host__ __device__ __inline__ short3 & operator %= (short3 & a, const short & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    return a;
}

static __host__ __device__ __inline__ short4 operator % (const short4 & a, const short4 & b)
{
    return make_short4(a.x%b.x, a.y%b.y, a.z%b.z, a.w%b.w);
}

static __host__ __device__ __inline__ short4 operator % (const short & a, const short4 & b)
{
    return make_short4(a%b.x, a%b.y, a%b.z, a%b.w);
}

static __host__ __device__ __inline__ short4 operator % (const short4 & a, const short & b)
{
    return make_short4(a.x%b, a.y%b, a.z%b, a.w%b);
}

static __host__ __device__ __inline__ short4 & operator %= (short4 & a, const short4 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    a.w %= b.w;
    return a;
}

static __host__ __device__ __inline__ short4 & operator %= (short4 & a, const short & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    a.w %= b;
    return a;
}

static __host__ __device__ __inline__ ushort2 operator % (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x%b.x, a.y%b.y);
}

static __host__ __device__ __inline__ ushort2 operator % (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a%b.x, a%b.y);
}

static __host__ __device__ __inline__ ushort2 operator % (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x%b, a.y%b);
}

static __host__ __device__ __inline__ ushort2 & operator %= (ushort2 & a, const ushort2 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    return a;
}

static __host__ __device__ __inline__ ushort2 & operator %= (ushort2 & a, const ushort & b)
{
    a.x %= b;
    a.y %= b;
    return a;
}

static __host__ __device__ __inline__ ushort3 operator % (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x%b.x, a.y%b.y, a.z%b.z);
}

static __host__ __device__ __inline__ ushort3 operator % (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a%b.x, a%b.y, a%b.z);
}

static __host__ __device__ __inline__ ushort3 operator % (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x%b, a.y%b, a.z%b);
}

static __host__ __device__ __inline__ ushort3 & operator %= (ushort3 & a, const ushort3 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    return a;
}

static __host__ __device__ __inline__ ushort3 & operator %= (ushort3 & a, const ushort & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    return a;
}

static __host__ __device__ __inline__ ushort4 operator % (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x%b.x, a.y%b.y, a.z%b.z, a.w%b.w);
}

static __host__ __device__ __inline__ ushort4 operator % (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a%b.x, a%b.y, a%b.z, a%b.w);
}

static __host__ __device__ __inline__ ushort4 operator % (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x%b, a.y%b, a.z%b, a.w%b);
}

static __host__ __device__ __inline__ ushort4 & operator %= (ushort4 & a, const ushort4 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    a.w %= b.w;
    return a;
}

static __host__ __device__ __inline__ ushort4 & operator %= (ushort4 & a, const ushort & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    a.w %= b;
    return a;
}

static __host__ __device__ __inline__ int2 operator % (const int2 & a, const int2 & b)
{
    return make_int2(a.x%b.x, a.y%b.y);
}

static __host__ __device__ __inline__ int2 operator % (const int & a, const int2 & b)
{
    return make_int2(a%b.x, a%b.y);
}

static __host__ __device__ __inline__ int2 operator % (const int2 & a, const int & b)
{
    return make_int2(a.x%b, a.y%b);
}

static __host__ __device__ __inline__ int2 & operator %= (int2 & a, const int2 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    return a;
}

static __host__ __device__ __inline__ int2 & operator %= (int2 & a, const int & b)
{
    a.x %= b;
    a.y %= b;
    return a;
}

static __host__ __device__ __inline__ int3 operator % (const int3 & a, const int3 & b)
{
    return make_int3(a.x%b.x, a.y%b.y, a.z%b.z);
}

static __host__ __device__ __inline__ int3 operator % (const int & a, const int3 & b)
{
    return make_int3(a%b.x, a%b.y, a%b.z);
}

static __host__ __device__ __inline__ int3 operator % (const int3 & a, const int & b)
{
    return make_int3(a.x%b, a.y%b, a.z%b);
}

static __host__ __device__ __inline__ int3 & operator %= (int3 & a, const int3 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    return a;
}

static __host__ __device__ __inline__ int3 & operator %= (int3 & a, const int & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    return a;
}

static __host__ __device__ __inline__ int4 operator % (const int4 & a, const int4 & b)
{
    return make_int4(a.x%b.x, a.y%b.y, a.z%b.z, a.w%b.w);
}

static __host__ __device__ __inline__ int4 operator % (const int & a, const int4 & b)
{
    return make_int4(a%b.x, a%b.y, a%b.z, a%b.w);
}

static __host__ __device__ __inline__ int4 operator % (const int4 & a, const int & b)
{
    return make_int4(a.x%b, a.y%b, a.z%b, a.w%b);
}

static __host__ __device__ __inline__ int4 & operator %= (int4 & a, const int4 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    a.w %= b.w;
    return a;
}

static __host__ __device__ __inline__ int4 & operator %= (int4 & a, const int & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    a.w %= b;
    return a;
}

static __host__ __device__ __inline__ uint2 operator % (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x%b.x, a.y%b.y);
}

static __host__ __device__ __inline__ uint2 operator % (const uint & a, const uint2 & b)
{
    return make_uint2(a%b.x, a%b.y);
}

static __host__ __device__ __inline__ uint2 operator % (const uint2 & a, const uint & b)
{
    return make_uint2(a.x%b, a.y%b);
}

static __host__ __device__ __inline__ uint2 & operator %= (uint2 & a, const uint2 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    return a;
}

static __host__ __device__ __inline__ uint2 & operator %= (uint2 & a, const uint & b)
{
    a.x %= b;
    a.y %= b;
    return a;
}

static __host__ __device__ __inline__ uint3 operator % (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x%b.x, a.y%b.y, a.z%b.z);
}

static __host__ __device__ __inline__ uint3 operator % (const uint & a, const uint3 & b)
{
    return make_uint3(a%b.x, a%b.y, a%b.z);
}

static __host__ __device__ __inline__ uint3 operator % (const uint3 & a, const uint & b)
{
    return make_uint3(a.x%b, a.y%b, a.z%b);
}

static __host__ __device__ __inline__ uint3 & operator %= (uint3 & a, const uint3 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    return a;
}

static __host__ __device__ __inline__ uint3 & operator %= (uint3 & a, const uint & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    return a;
}

static __host__ __device__ __inline__ uint4 operator % (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x%b.x, a.y%b.y, a.z%b.z, a.w%b.w);
}

static __host__ __device__ __inline__ uint4 operator % (const uint & a, const uint4 & b)
{
    return make_uint4(a%b.x, a%b.y, a%b.z, a%b.w);
}

static __host__ __device__ __inline__ uint4 operator % (const uint4 & a, const uint & b)
{
    return make_uint4(a.x%b, a.y%b, a.z%b, a.w%b);
}

static __host__ __device__ __inline__ uint4 & operator %= (uint4 & a, const uint4 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    a.w %= b.w;
    return a;
}

static __host__ __device__ __inline__ uint4 & operator %= (uint4 & a, const uint & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    a.w %= b;
    return a;
}

static __host__ __device__ __inline__ long2 operator % (const long2 & a, const long2 & b)
{
    return make_long2(a.x%b.x, a.y%b.y);
}

static __host__ __device__ __inline__ long2 operator % (const long & a, const long2 & b)
{
    return make_long2(a%b.x, a%b.y);
}

static __host__ __device__ __inline__ long2 operator % (const long2 & a, const long & b)
{
    return make_long2(a.x%b, a.y%b);
}

static __host__ __device__ __inline__ long2 & operator %= (long2 & a, const long2 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    return a;
}

static __host__ __device__ __inline__ long2 & operator %= (long2 & a, const long & b)
{
    a.x %= b;
    a.y %= b;
    return a;
}

static __host__ __device__ __inline__ long3 operator % (const long3 & a, const long3 & b)
{
    return make_long3(a.x%b.x, a.y%b.y, a.z%b.z);
}

static __host__ __device__ __inline__ long3 operator % (const long & a, const long3 & b)
{
    return make_long3(a%b.x, a%b.y, a%b.z);
}

static __host__ __device__ __inline__ long3 operator % (const long3 & a, const long & b)
{
    return make_long3(a.x%b, a.y%b, a.z%b);
}

static __host__ __device__ __inline__ long3 & operator %= (long3 & a, const long3 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    return a;
}

static __host__ __device__ __inline__ long3 & operator %= (long3 & a, const long & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    return a;
}

static __host__ __device__ __inline__ long4 operator % (const long4 & a, const long4 & b)
{
    return make_long4(a.x%b.x, a.y%b.y, a.z%b.z, a.w%b.w);
}

static __host__ __device__ __inline__ long4 operator % (const long & a, const long4 & b)
{
    return make_long4(a%b.x, a%b.y, a%b.z, a%b.w);
}

static __host__ __device__ __inline__ long4 operator % (const long4 & a, const long & b)
{
    return make_long4(a.x%b, a.y%b, a.z%b, a.w%b);
}

static __host__ __device__ __inline__ long4 & operator %= (long4 & a, const long4 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    a.w %= b.w;
    return a;
}

static __host__ __device__ __inline__ long4 & operator %= (long4 & a, const long & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    a.w %= b;
    return a;
}

static __host__ __device__ __inline__ ulong2 operator % (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x%b.x, a.y%b.y);
}

static __host__ __device__ __inline__ ulong2 operator % (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a%b.x, a%b.y);
}

static __host__ __device__ __inline__ ulong2 operator % (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x%b, a.y%b);
}

static __host__ __device__ __inline__ ulong2 & operator %= (ulong2 & a, const ulong2 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    return a;
}

static __host__ __device__ __inline__ ulong2 & operator %= (ulong2 & a, const ulong & b)
{
    a.x %= b;
    a.y %= b;
    return a;
}

static __host__ __device__ __inline__ ulong3 operator % (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x%b.x, a.y%b.y, a.z%b.z);
}

static __host__ __device__ __inline__ ulong3 operator % (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a%b.x, a%b.y, a%b.z);
}

static __host__ __device__ __inline__ ulong3 operator % (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x%b, a.y%b, a.z%b);
}

static __host__ __device__ __inline__ ulong3 & operator %= (ulong3 & a, const ulong3 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    return a;
}

static __host__ __device__ __inline__ ulong3 & operator %= (ulong3 & a, const ulong & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    return a;
}

static __host__ __device__ __inline__ ulong4 operator % (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x%b.x, a.y%b.y, a.z%b.z, a.w%b.w);
}

static __host__ __device__ __inline__ ulong4 operator % (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a%b.x, a%b.y, a%b.z, a%b.w);
}

static __host__ __device__ __inline__ ulong4 operator % (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x%b, a.y%b, a.z%b, a.w%b);
}

static __host__ __device__ __inline__ ulong4 & operator %= (ulong4 & a, const ulong4 & b)
{
    a.x %= b.x;
    a.y %= b.y;
    a.z %= b.z;
    a.w %= b.w;
    return a;
}

static __host__ __device__ __inline__ ulong4 & operator %= (ulong4 & a, const ulong & b)
{
    a.x %= b;
    a.y %= b;
    a.z %= b;
    a.w %= b;
    return a;
}

static __host__ __device__ __inline__ char2 operator & (const char2 & a, const char2 & b)
{
    return make_char2(a.x&b.x, a.y&b.y);
}

static __host__ __device__ __inline__ char2 operator & (const char & a, const char2 & b)
{
    return make_char2(a&b.x, a&b.y);
}

static __host__ __device__ __inline__ char2 operator & (const char2 & a, const char & b)
{
    return make_char2(a.x&b, a.y&b);
}

static __host__ __device__ __inline__ char2 & operator &= (char2 & a, const char2 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    return a;
}

static __host__ __device__ __inline__ char2 & operator &= (char2 & a, const char & b)
{
    a.x &= b;
    a.y &= b;
    return a;
}

static __host__ __device__ __inline__ char3 operator & (const char3 & a, const char3 & b)
{
    return make_char3(a.x&b.x, a.y&b.y, a.z&b.z);
}

static __host__ __device__ __inline__ char3 operator & (const char & a, const char3 & b)
{
    return make_char3(a&b.x, a&b.y, a&b.z);
}

static __host__ __device__ __inline__ char3 operator & (const char3 & a, const char & b)
{
    return make_char3(a.x&b, a.y&b, a.z&b);
}

static __host__ __device__ __inline__ char3 & operator &= (char3 & a, const char3 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    return a;
}

static __host__ __device__ __inline__ char3 & operator &= (char3 & a, const char & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    return a;
}

static __host__ __device__ __inline__ char4 operator & (const char4 & a, const char4 & b)
{
    return make_char4(a.x&b.x, a.y&b.y, a.z&b.z, a.w&b.w);
}

static __host__ __device__ __inline__ char4 operator & (const char & a, const char4 & b)
{
    return make_char4(a&b.x, a&b.y, a&b.z, a&b.w);
}

static __host__ __device__ __inline__ char4 operator & (const char4 & a, const char & b)
{
    return make_char4(a.x&b, a.y&b, a.z&b, a.w&b);
}

static __host__ __device__ __inline__ char4 & operator &= (char4 & a, const char4 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    a.w &= b.w;
    return a;
}

static __host__ __device__ __inline__ char4 & operator &= (char4 & a, const char & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    a.w &= b;
    return a;
}

static __host__ __device__ __inline__ uchar2 operator & (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x&b.x, a.y&b.y);
}

static __host__ __device__ __inline__ uchar2 operator & (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a&b.x, a&b.y);
}

static __host__ __device__ __inline__ uchar2 operator & (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x&b, a.y&b);
}

static __host__ __device__ __inline__ uchar2 & operator &= (uchar2 & a, const uchar2 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    return a;
}

static __host__ __device__ __inline__ uchar2 & operator &= (uchar2 & a, const uchar & b)
{
    a.x &= b;
    a.y &= b;
    return a;
}

static __host__ __device__ __inline__ uchar3 operator & (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x&b.x, a.y&b.y, a.z&b.z);
}

static __host__ __device__ __inline__ uchar3 operator & (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a&b.x, a&b.y, a&b.z);
}

static __host__ __device__ __inline__ uchar3 operator & (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x&b, a.y&b, a.z&b);
}

static __host__ __device__ __inline__ uchar3 & operator &= (uchar3 & a, const uchar3 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    return a;
}

static __host__ __device__ __inline__ uchar3 & operator &= (uchar3 & a, const uchar & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    return a;
}

static __host__ __device__ __inline__ uchar4 operator & (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x&b.x, a.y&b.y, a.z&b.z, a.w&b.w);
}

static __host__ __device__ __inline__ uchar4 operator & (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a&b.x, a&b.y, a&b.z, a&b.w);
}

static __host__ __device__ __inline__ uchar4 operator & (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x&b, a.y&b, a.z&b, a.w&b);
}

static __host__ __device__ __inline__ uchar4 & operator &= (uchar4 & a, const uchar4 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    a.w &= b.w;
    return a;
}

static __host__ __device__ __inline__ uchar4 & operator &= (uchar4 & a, const uchar & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    a.w &= b;
    return a;
}

static __host__ __device__ __inline__ short2 operator & (const short2 & a, const short2 & b)
{
    return make_short2(a.x&b.x, a.y&b.y);
}

static __host__ __device__ __inline__ short2 operator & (const short & a, const short2 & b)
{
    return make_short2(a&b.x, a&b.y);
}

static __host__ __device__ __inline__ short2 operator & (const short2 & a, const short & b)
{
    return make_short2(a.x&b, a.y&b);
}

static __host__ __device__ __inline__ short2 & operator &= (short2 & a, const short2 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    return a;
}

static __host__ __device__ __inline__ short2 & operator &= (short2 & a, const short & b)
{
    a.x &= b;
    a.y &= b;
    return a;
}

static __host__ __device__ __inline__ short3 operator & (const short3 & a, const short3 & b)
{
    return make_short3(a.x&b.x, a.y&b.y, a.z&b.z);
}

static __host__ __device__ __inline__ short3 operator & (const short & a, const short3 & b)
{
    return make_short3(a&b.x, a&b.y, a&b.z);
}

static __host__ __device__ __inline__ short3 operator & (const short3 & a, const short & b)
{
    return make_short3(a.x&b, a.y&b, a.z&b);
}

static __host__ __device__ __inline__ short3 & operator &= (short3 & a, const short3 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    return a;
}

static __host__ __device__ __inline__ short3 & operator &= (short3 & a, const short & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    return a;
}

static __host__ __device__ __inline__ short4 operator & (const short4 & a, const short4 & b)
{
    return make_short4(a.x&b.x, a.y&b.y, a.z&b.z, a.w&b.w);
}

static __host__ __device__ __inline__ short4 operator & (const short & a, const short4 & b)
{
    return make_short4(a&b.x, a&b.y, a&b.z, a&b.w);
}

static __host__ __device__ __inline__ short4 operator & (const short4 & a, const short & b)
{
    return make_short4(a.x&b, a.y&b, a.z&b, a.w&b);
}

static __host__ __device__ __inline__ short4 & operator &= (short4 & a, const short4 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    a.w &= b.w;
    return a;
}

static __host__ __device__ __inline__ short4 & operator &= (short4 & a, const short & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    a.w &= b;
    return a;
}

static __host__ __device__ __inline__ ushort2 operator & (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x&b.x, a.y&b.y);
}

static __host__ __device__ __inline__ ushort2 operator & (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a&b.x, a&b.y);
}

static __host__ __device__ __inline__ ushort2 operator & (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x&b, a.y&b);
}

static __host__ __device__ __inline__ ushort2 & operator &= (ushort2 & a, const ushort2 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    return a;
}

static __host__ __device__ __inline__ ushort2 & operator &= (ushort2 & a, const ushort & b)
{
    a.x &= b;
    a.y &= b;
    return a;
}

static __host__ __device__ __inline__ ushort3 operator & (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x&b.x, a.y&b.y, a.z&b.z);
}

static __host__ __device__ __inline__ ushort3 operator & (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a&b.x, a&b.y, a&b.z);
}

static __host__ __device__ __inline__ ushort3 operator & (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x&b, a.y&b, a.z&b);
}

static __host__ __device__ __inline__ ushort3 & operator &= (ushort3 & a, const ushort3 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    return a;
}

static __host__ __device__ __inline__ ushort3 & operator &= (ushort3 & a, const ushort & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    return a;
}

static __host__ __device__ __inline__ ushort4 operator & (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x&b.x, a.y&b.y, a.z&b.z, a.w&b.w);
}

static __host__ __device__ __inline__ ushort4 operator & (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a&b.x, a&b.y, a&b.z, a&b.w);
}

static __host__ __device__ __inline__ ushort4 operator & (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x&b, a.y&b, a.z&b, a.w&b);
}

static __host__ __device__ __inline__ ushort4 & operator &= (ushort4 & a, const ushort4 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    a.w &= b.w;
    return a;
}

static __host__ __device__ __inline__ ushort4 & operator &= (ushort4 & a, const ushort & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    a.w &= b;
    return a;
}

static __host__ __device__ __inline__ int2 operator & (const int2 & a, const int2 & b)
{
    return make_int2(a.x&b.x, a.y&b.y);
}

static __host__ __device__ __inline__ int2 operator & (const int & a, const int2 & b)
{
    return make_int2(a&b.x, a&b.y);
}

static __host__ __device__ __inline__ int2 operator & (const int2 & a, const int & b)
{
    return make_int2(a.x&b, a.y&b);
}

static __host__ __device__ __inline__ int2 & operator &= (int2 & a, const int2 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    return a;
}

static __host__ __device__ __inline__ int2 & operator &= (int2 & a, const int & b)
{
    a.x &= b;
    a.y &= b;
    return a;
}

static __host__ __device__ __inline__ int3 operator & (const int3 & a, const int3 & b)
{
    return make_int3(a.x&b.x, a.y&b.y, a.z&b.z);
}

static __host__ __device__ __inline__ int3 operator & (const int & a, const int3 & b)
{
    return make_int3(a&b.x, a&b.y, a&b.z);
}

static __host__ __device__ __inline__ int3 operator & (const int3 & a, const int & b)
{
    return make_int3(a.x&b, a.y&b, a.z&b);
}

static __host__ __device__ __inline__ int3 & operator &= (int3 & a, const int3 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    return a;
}

static __host__ __device__ __inline__ int3 & operator &= (int3 & a, const int & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    return a;
}

static __host__ __device__ __inline__ int4 operator & (const int4 & a, const int4 & b)
{
    return make_int4(a.x&b.x, a.y&b.y, a.z&b.z, a.w&b.w);
}

static __host__ __device__ __inline__ int4 operator & (const int & a, const int4 & b)
{
    return make_int4(a&b.x, a&b.y, a&b.z, a&b.w);
}

static __host__ __device__ __inline__ int4 operator & (const int4 & a, const int & b)
{
    return make_int4(a.x&b, a.y&b, a.z&b, a.w&b);
}

static __host__ __device__ __inline__ int4 & operator &= (int4 & a, const int4 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    a.w &= b.w;
    return a;
}

static __host__ __device__ __inline__ int4 & operator &= (int4 & a, const int & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    a.w &= b;
    return a;
}

static __host__ __device__ __inline__ uint2 operator & (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x&b.x, a.y&b.y);
}

static __host__ __device__ __inline__ uint2 operator & (const uint & a, const uint2 & b)
{
    return make_uint2(a&b.x, a&b.y);
}

static __host__ __device__ __inline__ uint2 operator & (const uint2 & a, const uint & b)
{
    return make_uint2(a.x&b, a.y&b);
}

static __host__ __device__ __inline__ uint2 & operator &= (uint2 & a, const uint2 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    return a;
}

static __host__ __device__ __inline__ uint2 & operator &= (uint2 & a, const uint & b)
{
    a.x &= b;
    a.y &= b;
    return a;
}

static __host__ __device__ __inline__ uint3 operator & (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x&b.x, a.y&b.y, a.z&b.z);
}

static __host__ __device__ __inline__ uint3 operator & (const uint & a, const uint3 & b)
{
    return make_uint3(a&b.x, a&b.y, a&b.z);
}

static __host__ __device__ __inline__ uint3 operator & (const uint3 & a, const uint & b)
{
    return make_uint3(a.x&b, a.y&b, a.z&b);
}

static __host__ __device__ __inline__ uint3 & operator &= (uint3 & a, const uint3 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    return a;
}

static __host__ __device__ __inline__ uint3 & operator &= (uint3 & a, const uint & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    return a;
}

static __host__ __device__ __inline__ uint4 operator & (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x&b.x, a.y&b.y, a.z&b.z, a.w&b.w);
}

static __host__ __device__ __inline__ uint4 operator & (const uint & a, const uint4 & b)
{
    return make_uint4(a&b.x, a&b.y, a&b.z, a&b.w);
}

static __host__ __device__ __inline__ uint4 operator & (const uint4 & a, const uint & b)
{
    return make_uint4(a.x&b, a.y&b, a.z&b, a.w&b);
}

static __host__ __device__ __inline__ uint4 & operator &= (uint4 & a, const uint4 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    a.w &= b.w;
    return a;
}

static __host__ __device__ __inline__ uint4 & operator &= (uint4 & a, const uint & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    a.w &= b;
    return a;
}

static __host__ __device__ __inline__ long2 operator & (const long2 & a, const long2 & b)
{
    return make_long2(a.x&b.x, a.y&b.y);
}

static __host__ __device__ __inline__ long2 operator & (const long & a, const long2 & b)
{
    return make_long2(a&b.x, a&b.y);
}

static __host__ __device__ __inline__ long2 operator & (const long2 & a, const long & b)
{
    return make_long2(a.x&b, a.y&b);
}

static __host__ __device__ __inline__ long2 & operator &= (long2 & a, const long2 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    return a;
}

static __host__ __device__ __inline__ long2 & operator &= (long2 & a, const long & b)
{
    a.x &= b;
    a.y &= b;
    return a;
}

static __host__ __device__ __inline__ long3 operator & (const long3 & a, const long3 & b)
{
    return make_long3(a.x&b.x, a.y&b.y, a.z&b.z);
}

static __host__ __device__ __inline__ long3 operator & (const long & a, const long3 & b)
{
    return make_long3(a&b.x, a&b.y, a&b.z);
}

static __host__ __device__ __inline__ long3 operator & (const long3 & a, const long & b)
{
    return make_long3(a.x&b, a.y&b, a.z&b);
}

static __host__ __device__ __inline__ long3 & operator &= (long3 & a, const long3 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    return a;
}

static __host__ __device__ __inline__ long3 & operator &= (long3 & a, const long & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    return a;
}

static __host__ __device__ __inline__ long4 operator & (const long4 & a, const long4 & b)
{
    return make_long4(a.x&b.x, a.y&b.y, a.z&b.z, a.w&b.w);
}

static __host__ __device__ __inline__ long4 operator & (const long & a, const long4 & b)
{
    return make_long4(a&b.x, a&b.y, a&b.z, a&b.w);
}

static __host__ __device__ __inline__ long4 operator & (const long4 & a, const long & b)
{
    return make_long4(a.x&b, a.y&b, a.z&b, a.w&b);
}

static __host__ __device__ __inline__ long4 & operator &= (long4 & a, const long4 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    a.w &= b.w;
    return a;
}

static __host__ __device__ __inline__ long4 & operator &= (long4 & a, const long & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    a.w &= b;
    return a;
}

static __host__ __device__ __inline__ ulong2 operator & (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x&b.x, a.y&b.y);
}

static __host__ __device__ __inline__ ulong2 operator & (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a&b.x, a&b.y);
}

static __host__ __device__ __inline__ ulong2 operator & (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x&b, a.y&b);
}

static __host__ __device__ __inline__ ulong2 & operator &= (ulong2 & a, const ulong2 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    return a;
}

static __host__ __device__ __inline__ ulong2 & operator &= (ulong2 & a, const ulong & b)
{
    a.x &= b;
    a.y &= b;
    return a;
}

static __host__ __device__ __inline__ ulong3 operator & (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x&b.x, a.y&b.y, a.z&b.z);
}

static __host__ __device__ __inline__ ulong3 operator & (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a&b.x, a&b.y, a&b.z);
}

static __host__ __device__ __inline__ ulong3 operator & (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x&b, a.y&b, a.z&b);
}

static __host__ __device__ __inline__ ulong3 & operator &= (ulong3 & a, const ulong3 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    return a;
}

static __host__ __device__ __inline__ ulong3 & operator &= (ulong3 & a, const ulong & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    return a;
}

static __host__ __device__ __inline__ ulong4 operator & (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x&b.x, a.y&b.y, a.z&b.z, a.w&b.w);
}

static __host__ __device__ __inline__ ulong4 operator & (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a&b.x, a&b.y, a&b.z, a&b.w);
}

static __host__ __device__ __inline__ ulong4 operator & (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x&b, a.y&b, a.z&b, a.w&b);
}

static __host__ __device__ __inline__ ulong4 & operator &= (ulong4 & a, const ulong4 & b)
{
    a.x &= b.x;
    a.y &= b.y;
    a.z &= b.z;
    a.w &= b.w;
    return a;
}

static __host__ __device__ __inline__ ulong4 & operator &= (ulong4 & a, const ulong & b)
{
    a.x &= b;
    a.y &= b;
    a.z &= b;
    a.w &= b;
    return a;
}

static __host__ __device__ __inline__ char2 operator | (const char2 & a, const char2 & b)
{
    return make_char2(a.x|b.x, a.y|b.y);
}

static __host__ __device__ __inline__ char2 operator | (const char & a, const char2 & b)
{
    return make_char2(a|b.x, a|b.y);
}

static __host__ __device__ __inline__ char2 operator | (const char2 & a, const char & b)
{
    return make_char2(a.x|b, a.y|b);
}

static __host__ __device__ __inline__ char2 & operator |= (char2 & a, const char2 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    return a;
}

static __host__ __device__ __inline__ char2 & operator |= (char2 & a, const char & b)
{
    a.x |= b;
    a.y |= b;
    return a;
}

static __host__ __device__ __inline__ char3 operator | (const char3 & a, const char3 & b)
{
    return make_char3(a.x|b.x, a.y|b.y, a.z|b.z);
}

static __host__ __device__ __inline__ char3 operator | (const char & a, const char3 & b)
{
    return make_char3(a|b.x, a|b.y, a|b.z);
}

static __host__ __device__ __inline__ char3 operator | (const char3 & a, const char & b)
{
    return make_char3(a.x|b, a.y|b, a.z|b);
}

static __host__ __device__ __inline__ char3 & operator |= (char3 & a, const char3 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    return a;
}

static __host__ __device__ __inline__ char3 & operator |= (char3 & a, const char & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    return a;
}

static __host__ __device__ __inline__ char4 operator | (const char4 & a, const char4 & b)
{
    return make_char4(a.x|b.x, a.y|b.y, a.z|b.z, a.w|b.w);
}

static __host__ __device__ __inline__ char4 operator | (const char & a, const char4 & b)
{
    return make_char4(a|b.x, a|b.y, a|b.z, a|b.w);
}

static __host__ __device__ __inline__ char4 operator | (const char4 & a, const char & b)
{
    return make_char4(a.x|b, a.y|b, a.z|b, a.w|b);
}

static __host__ __device__ __inline__ char4 & operator |= (char4 & a, const char4 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    a.w |= b.w;
    return a;
}

static __host__ __device__ __inline__ char4 & operator |= (char4 & a, const char & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    a.w |= b;
    return a;
}

static __host__ __device__ __inline__ uchar2 operator | (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x|b.x, a.y|b.y);
}

static __host__ __device__ __inline__ uchar2 operator | (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a|b.x, a|b.y);
}

static __host__ __device__ __inline__ uchar2 operator | (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x|b, a.y|b);
}

static __host__ __device__ __inline__ uchar2 & operator |= (uchar2 & a, const uchar2 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    return a;
}

static __host__ __device__ __inline__ uchar2 & operator |= (uchar2 & a, const uchar & b)
{
    a.x |= b;
    a.y |= b;
    return a;
}

static __host__ __device__ __inline__ uchar3 operator | (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x|b.x, a.y|b.y, a.z|b.z);
}

static __host__ __device__ __inline__ uchar3 operator | (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a|b.x, a|b.y, a|b.z);
}

static __host__ __device__ __inline__ uchar3 operator | (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x|b, a.y|b, a.z|b);
}

static __host__ __device__ __inline__ uchar3 & operator |= (uchar3 & a, const uchar3 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    return a;
}

static __host__ __device__ __inline__ uchar3 & operator |= (uchar3 & a, const uchar & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    return a;
}

static __host__ __device__ __inline__ uchar4 operator | (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x|b.x, a.y|b.y, a.z|b.z, a.w|b.w);
}

static __host__ __device__ __inline__ uchar4 operator | (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a|b.x, a|b.y, a|b.z, a|b.w);
}

static __host__ __device__ __inline__ uchar4 operator | (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x|b, a.y|b, a.z|b, a.w|b);
}

static __host__ __device__ __inline__ uchar4 & operator |= (uchar4 & a, const uchar4 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    a.w |= b.w;
    return a;
}

static __host__ __device__ __inline__ uchar4 & operator |= (uchar4 & a, const uchar & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    a.w |= b;
    return a;
}

static __host__ __device__ __inline__ short2 operator | (const short2 & a, const short2 & b)
{
    return make_short2(a.x|b.x, a.y|b.y);
}

static __host__ __device__ __inline__ short2 operator | (const short & a, const short2 & b)
{
    return make_short2(a|b.x, a|b.y);
}

static __host__ __device__ __inline__ short2 operator | (const short2 & a, const short & b)
{
    return make_short2(a.x|b, a.y|b);
}

static __host__ __device__ __inline__ short2 & operator |= (short2 & a, const short2 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    return a;
}

static __host__ __device__ __inline__ short2 & operator |= (short2 & a, const short & b)
{
    a.x |= b;
    a.y |= b;
    return a;
}

static __host__ __device__ __inline__ short3 operator | (const short3 & a, const short3 & b)
{
    return make_short3(a.x|b.x, a.y|b.y, a.z|b.z);
}

static __host__ __device__ __inline__ short3 operator | (const short & a, const short3 & b)
{
    return make_short3(a|b.x, a|b.y, a|b.z);
}

static __host__ __device__ __inline__ short3 operator | (const short3 & a, const short & b)
{
    return make_short3(a.x|b, a.y|b, a.z|b);
}

static __host__ __device__ __inline__ short3 & operator |= (short3 & a, const short3 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    return a;
}

static __host__ __device__ __inline__ short3 & operator |= (short3 & a, const short & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    return a;
}

static __host__ __device__ __inline__ short4 operator | (const short4 & a, const short4 & b)
{
    return make_short4(a.x|b.x, a.y|b.y, a.z|b.z, a.w|b.w);
}

static __host__ __device__ __inline__ short4 operator | (const short & a, const short4 & b)
{
    return make_short4(a|b.x, a|b.y, a|b.z, a|b.w);
}

static __host__ __device__ __inline__ short4 operator | (const short4 & a, const short & b)
{
    return make_short4(a.x|b, a.y|b, a.z|b, a.w|b);
}

static __host__ __device__ __inline__ short4 & operator |= (short4 & a, const short4 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    a.w |= b.w;
    return a;
}

static __host__ __device__ __inline__ short4 & operator |= (short4 & a, const short & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    a.w |= b;
    return a;
}

static __host__ __device__ __inline__ ushort2 operator | (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x|b.x, a.y|b.y);
}

static __host__ __device__ __inline__ ushort2 operator | (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a|b.x, a|b.y);
}

static __host__ __device__ __inline__ ushort2 operator | (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x|b, a.y|b);
}

static __host__ __device__ __inline__ ushort2 & operator |= (ushort2 & a, const ushort2 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    return a;
}

static __host__ __device__ __inline__ ushort2 & operator |= (ushort2 & a, const ushort & b)
{
    a.x |= b;
    a.y |= b;
    return a;
}

static __host__ __device__ __inline__ ushort3 operator | (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x|b.x, a.y|b.y, a.z|b.z);
}

static __host__ __device__ __inline__ ushort3 operator | (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a|b.x, a|b.y, a|b.z);
}

static __host__ __device__ __inline__ ushort3 operator | (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x|b, a.y|b, a.z|b);
}

static __host__ __device__ __inline__ ushort3 & operator |= (ushort3 & a, const ushort3 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    return a;
}

static __host__ __device__ __inline__ ushort3 & operator |= (ushort3 & a, const ushort & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    return a;
}

static __host__ __device__ __inline__ ushort4 operator | (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x|b.x, a.y|b.y, a.z|b.z, a.w|b.w);
}

static __host__ __device__ __inline__ ushort4 operator | (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a|b.x, a|b.y, a|b.z, a|b.w);
}

static __host__ __device__ __inline__ ushort4 operator | (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x|b, a.y|b, a.z|b, a.w|b);
}

static __host__ __device__ __inline__ ushort4 & operator |= (ushort4 & a, const ushort4 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    a.w |= b.w;
    return a;
}

static __host__ __device__ __inline__ ushort4 & operator |= (ushort4 & a, const ushort & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    a.w |= b;
    return a;
}

static __host__ __device__ __inline__ int2 operator | (const int2 & a, const int2 & b)
{
    return make_int2(a.x|b.x, a.y|b.y);
}

static __host__ __device__ __inline__ int2 operator | (const int & a, const int2 & b)
{
    return make_int2(a|b.x, a|b.y);
}

static __host__ __device__ __inline__ int2 operator | (const int2 & a, const int & b)
{
    return make_int2(a.x|b, a.y|b);
}

static __host__ __device__ __inline__ int2 & operator |= (int2 & a, const int2 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    return a;
}

static __host__ __device__ __inline__ int2 & operator |= (int2 & a, const int & b)
{
    a.x |= b;
    a.y |= b;
    return a;
}

static __host__ __device__ __inline__ int3 operator | (const int3 & a, const int3 & b)
{
    return make_int3(a.x|b.x, a.y|b.y, a.z|b.z);
}

static __host__ __device__ __inline__ int3 operator | (const int & a, const int3 & b)
{
    return make_int3(a|b.x, a|b.y, a|b.z);
}

static __host__ __device__ __inline__ int3 operator | (const int3 & a, const int & b)
{
    return make_int3(a.x|b, a.y|b, a.z|b);
}

static __host__ __device__ __inline__ int3 & operator |= (int3 & a, const int3 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    return a;
}

static __host__ __device__ __inline__ int3 & operator |= (int3 & a, const int & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    return a;
}

static __host__ __device__ __inline__ int4 operator | (const int4 & a, const int4 & b)
{
    return make_int4(a.x|b.x, a.y|b.y, a.z|b.z, a.w|b.w);
}

static __host__ __device__ __inline__ int4 operator | (const int & a, const int4 & b)
{
    return make_int4(a|b.x, a|b.y, a|b.z, a|b.w);
}

static __host__ __device__ __inline__ int4 operator | (const int4 & a, const int & b)
{
    return make_int4(a.x|b, a.y|b, a.z|b, a.w|b);
}

static __host__ __device__ __inline__ int4 & operator |= (int4 & a, const int4 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    a.w |= b.w;
    return a;
}

static __host__ __device__ __inline__ int4 & operator |= (int4 & a, const int & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    a.w |= b;
    return a;
}

static __host__ __device__ __inline__ uint2 operator | (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x|b.x, a.y|b.y);
}

static __host__ __device__ __inline__ uint2 operator | (const uint & a, const uint2 & b)
{
    return make_uint2(a|b.x, a|b.y);
}

static __host__ __device__ __inline__ uint2 operator | (const uint2 & a, const uint & b)
{
    return make_uint2(a.x|b, a.y|b);
}

static __host__ __device__ __inline__ uint2 & operator |= (uint2 & a, const uint2 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    return a;
}

static __host__ __device__ __inline__ uint2 & operator |= (uint2 & a, const uint & b)
{
    a.x |= b;
    a.y |= b;
    return a;
}

static __host__ __device__ __inline__ uint3 operator | (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x|b.x, a.y|b.y, a.z|b.z);
}

static __host__ __device__ __inline__ uint3 operator | (const uint & a, const uint3 & b)
{
    return make_uint3(a|b.x, a|b.y, a|b.z);
}

static __host__ __device__ __inline__ uint3 operator | (const uint3 & a, const uint & b)
{
    return make_uint3(a.x|b, a.y|b, a.z|b);
}

static __host__ __device__ __inline__ uint3 & operator |= (uint3 & a, const uint3 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    return a;
}

static __host__ __device__ __inline__ uint3 & operator |= (uint3 & a, const uint & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    return a;
}

static __host__ __device__ __inline__ uint4 operator | (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x|b.x, a.y|b.y, a.z|b.z, a.w|b.w);
}

static __host__ __device__ __inline__ uint4 operator | (const uint & a, const uint4 & b)
{
    return make_uint4(a|b.x, a|b.y, a|b.z, a|b.w);
}

static __host__ __device__ __inline__ uint4 operator | (const uint4 & a, const uint & b)
{
    return make_uint4(a.x|b, a.y|b, a.z|b, a.w|b);
}

static __host__ __device__ __inline__ uint4 & operator |= (uint4 & a, const uint4 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    a.w |= b.w;
    return a;
}

static __host__ __device__ __inline__ uint4 & operator |= (uint4 & a, const uint & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    a.w |= b;
    return a;
}

static __host__ __device__ __inline__ long2 operator | (const long2 & a, const long2 & b)
{
    return make_long2(a.x|b.x, a.y|b.y);
}

static __host__ __device__ __inline__ long2 operator | (const long & a, const long2 & b)
{
    return make_long2(a|b.x, a|b.y);
}

static __host__ __device__ __inline__ long2 operator | (const long2 & a, const long & b)
{
    return make_long2(a.x|b, a.y|b);
}

static __host__ __device__ __inline__ long2 & operator |= (long2 & a, const long2 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    return a;
}

static __host__ __device__ __inline__ long2 & operator |= (long2 & a, const long & b)
{
    a.x |= b;
    a.y |= b;
    return a;
}

static __host__ __device__ __inline__ long3 operator | (const long3 & a, const long3 & b)
{
    return make_long3(a.x|b.x, a.y|b.y, a.z|b.z);
}

static __host__ __device__ __inline__ long3 operator | (const long & a, const long3 & b)
{
    return make_long3(a|b.x, a|b.y, a|b.z);
}

static __host__ __device__ __inline__ long3 operator | (const long3 & a, const long & b)
{
    return make_long3(a.x|b, a.y|b, a.z|b);
}

static __host__ __device__ __inline__ long3 & operator |= (long3 & a, const long3 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    return a;
}

static __host__ __device__ __inline__ long3 & operator |= (long3 & a, const long & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    return a;
}

static __host__ __device__ __inline__ long4 operator | (const long4 & a, const long4 & b)
{
    return make_long4(a.x|b.x, a.y|b.y, a.z|b.z, a.w|b.w);
}

static __host__ __device__ __inline__ long4 operator | (const long & a, const long4 & b)
{
    return make_long4(a|b.x, a|b.y, a|b.z, a|b.w);
}

static __host__ __device__ __inline__ long4 operator | (const long4 & a, const long & b)
{
    return make_long4(a.x|b, a.y|b, a.z|b, a.w|b);
}

static __host__ __device__ __inline__ long4 & operator |= (long4 & a, const long4 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    a.w |= b.w;
    return a;
}

static __host__ __device__ __inline__ long4 & operator |= (long4 & a, const long & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    a.w |= b;
    return a;
}

static __host__ __device__ __inline__ ulong2 operator | (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x|b.x, a.y|b.y);
}

static __host__ __device__ __inline__ ulong2 operator | (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a|b.x, a|b.y);
}

static __host__ __device__ __inline__ ulong2 operator | (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x|b, a.y|b);
}

static __host__ __device__ __inline__ ulong2 & operator |= (ulong2 & a, const ulong2 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    return a;
}

static __host__ __device__ __inline__ ulong2 & operator |= (ulong2 & a, const ulong & b)
{
    a.x |= b;
    a.y |= b;
    return a;
}

static __host__ __device__ __inline__ ulong3 operator | (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x|b.x, a.y|b.y, a.z|b.z);
}

static __host__ __device__ __inline__ ulong3 operator | (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a|b.x, a|b.y, a|b.z);
}

static __host__ __device__ __inline__ ulong3 operator | (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x|b, a.y|b, a.z|b);
}

static __host__ __device__ __inline__ ulong3 & operator |= (ulong3 & a, const ulong3 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    return a;
}

static __host__ __device__ __inline__ ulong3 & operator |= (ulong3 & a, const ulong & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    return a;
}

static __host__ __device__ __inline__ ulong4 operator | (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x|b.x, a.y|b.y, a.z|b.z, a.w|b.w);
}

static __host__ __device__ __inline__ ulong4 operator | (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a|b.x, a|b.y, a|b.z, a|b.w);
}

static __host__ __device__ __inline__ ulong4 operator | (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x|b, a.y|b, a.z|b, a.w|b);
}

static __host__ __device__ __inline__ ulong4 & operator |= (ulong4 & a, const ulong4 & b)
{
    a.x |= b.x;
    a.y |= b.y;
    a.z |= b.z;
    a.w |= b.w;
    return a;
}

static __host__ __device__ __inline__ ulong4 & operator |= (ulong4 & a, const ulong & b)
{
    a.x |= b;
    a.y |= b;
    a.z |= b;
    a.w |= b;
    return a;
}

static __host__ __device__ __inline__ char2 operator ^ (const char2 & a, const char2 & b)
{
    return make_char2(a.x^b.x, a.y^b.y);
}

static __host__ __device__ __inline__ char2 operator ^ (const char & a, const char2 & b)
{
    return make_char2(a^b.x, a^b.y);
}

static __host__ __device__ __inline__ char2 operator ^ (const char2 & a, const char & b)
{
    return make_char2(a.x^b, a.y^b);
}

static __host__ __device__ __inline__ char2 & operator ^= (char2 & a, const char2 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    return a;
}

static __host__ __device__ __inline__ char2 & operator ^= (char2 & a, const char & b)
{
    a.x ^= b;
    a.y ^= b;
    return a;
}

static __host__ __device__ __inline__ char3 operator ^ (const char3 & a, const char3 & b)
{
    return make_char3(a.x^b.x, a.y^b.y, a.z^b.z);
}

static __host__ __device__ __inline__ char3 operator ^ (const char & a, const char3 & b)
{
    return make_char3(a^b.x, a^b.y, a^b.z);
}

static __host__ __device__ __inline__ char3 operator ^ (const char3 & a, const char & b)
{
    return make_char3(a.x^b, a.y^b, a.z^b);
}

static __host__ __device__ __inline__ char3 & operator ^= (char3 & a, const char3 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    return a;
}

static __host__ __device__ __inline__ char3 & operator ^= (char3 & a, const char & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    return a;
}

static __host__ __device__ __inline__ char4 operator ^ (const char4 & a, const char4 & b)
{
    return make_char4(a.x^b.x, a.y^b.y, a.z^b.z, a.w^b.w);
}

static __host__ __device__ __inline__ char4 operator ^ (const char & a, const char4 & b)
{
    return make_char4(a^b.x, a^b.y, a^b.z, a^b.w);
}

static __host__ __device__ __inline__ char4 operator ^ (const char4 & a, const char & b)
{
    return make_char4(a.x^b, a.y^b, a.z^b, a.w^b);
}

static __host__ __device__ __inline__ char4 & operator ^= (char4 & a, const char4 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    a.w ^= b.w;
    return a;
}

static __host__ __device__ __inline__ char4 & operator ^= (char4 & a, const char & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    a.w ^= b;
    return a;
}

static __host__ __device__ __inline__ uchar2 operator ^ (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x^b.x, a.y^b.y);
}

static __host__ __device__ __inline__ uchar2 operator ^ (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a^b.x, a^b.y);
}

static __host__ __device__ __inline__ uchar2 operator ^ (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x^b, a.y^b);
}

static __host__ __device__ __inline__ uchar2 & operator ^= (uchar2 & a, const uchar2 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    return a;
}

static __host__ __device__ __inline__ uchar2 & operator ^= (uchar2 & a, const uchar & b)
{
    a.x ^= b;
    a.y ^= b;
    return a;
}

static __host__ __device__ __inline__ uchar3 operator ^ (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x^b.x, a.y^b.y, a.z^b.z);
}

static __host__ __device__ __inline__ uchar3 operator ^ (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a^b.x, a^b.y, a^b.z);
}

static __host__ __device__ __inline__ uchar3 operator ^ (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x^b, a.y^b, a.z^b);
}

static __host__ __device__ __inline__ uchar3 & operator ^= (uchar3 & a, const uchar3 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    return a;
}

static __host__ __device__ __inline__ uchar3 & operator ^= (uchar3 & a, const uchar & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    return a;
}

static __host__ __device__ __inline__ uchar4 operator ^ (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x^b.x, a.y^b.y, a.z^b.z, a.w^b.w);
}

static __host__ __device__ __inline__ uchar4 operator ^ (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a^b.x, a^b.y, a^b.z, a^b.w);
}

static __host__ __device__ __inline__ uchar4 operator ^ (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x^b, a.y^b, a.z^b, a.w^b);
}

static __host__ __device__ __inline__ uchar4 & operator ^= (uchar4 & a, const uchar4 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    a.w ^= b.w;
    return a;
}

static __host__ __device__ __inline__ uchar4 & operator ^= (uchar4 & a, const uchar & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    a.w ^= b;
    return a;
}

static __host__ __device__ __inline__ short2 operator ^ (const short2 & a, const short2 & b)
{
    return make_short2(a.x^b.x, a.y^b.y);
}

static __host__ __device__ __inline__ short2 operator ^ (const short & a, const short2 & b)
{
    return make_short2(a^b.x, a^b.y);
}

static __host__ __device__ __inline__ short2 operator ^ (const short2 & a, const short & b)
{
    return make_short2(a.x^b, a.y^b);
}

static __host__ __device__ __inline__ short2 & operator ^= (short2 & a, const short2 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    return a;
}

static __host__ __device__ __inline__ short2 & operator ^= (short2 & a, const short & b)
{
    a.x ^= b;
    a.y ^= b;
    return a;
}

static __host__ __device__ __inline__ short3 operator ^ (const short3 & a, const short3 & b)
{
    return make_short3(a.x^b.x, a.y^b.y, a.z^b.z);
}

static __host__ __device__ __inline__ short3 operator ^ (const short & a, const short3 & b)
{
    return make_short3(a^b.x, a^b.y, a^b.z);
}

static __host__ __device__ __inline__ short3 operator ^ (const short3 & a, const short & b)
{
    return make_short3(a.x^b, a.y^b, a.z^b);
}

static __host__ __device__ __inline__ short3 & operator ^= (short3 & a, const short3 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    return a;
}

static __host__ __device__ __inline__ short3 & operator ^= (short3 & a, const short & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    return a;
}

static __host__ __device__ __inline__ short4 operator ^ (const short4 & a, const short4 & b)
{
    return make_short4(a.x^b.x, a.y^b.y, a.z^b.z, a.w^b.w);
}

static __host__ __device__ __inline__ short4 operator ^ (const short & a, const short4 & b)
{
    return make_short4(a^b.x, a^b.y, a^b.z, a^b.w);
}

static __host__ __device__ __inline__ short4 operator ^ (const short4 & a, const short & b)
{
    return make_short4(a.x^b, a.y^b, a.z^b, a.w^b);
}

static __host__ __device__ __inline__ short4 & operator ^= (short4 & a, const short4 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    a.w ^= b.w;
    return a;
}

static __host__ __device__ __inline__ short4 & operator ^= (short4 & a, const short & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    a.w ^= b;
    return a;
}

static __host__ __device__ __inline__ ushort2 operator ^ (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x^b.x, a.y^b.y);
}

static __host__ __device__ __inline__ ushort2 operator ^ (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a^b.x, a^b.y);
}

static __host__ __device__ __inline__ ushort2 operator ^ (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x^b, a.y^b);
}

static __host__ __device__ __inline__ ushort2 & operator ^= (ushort2 & a, const ushort2 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    return a;
}

static __host__ __device__ __inline__ ushort2 & operator ^= (ushort2 & a, const ushort & b)
{
    a.x ^= b;
    a.y ^= b;
    return a;
}

static __host__ __device__ __inline__ ushort3 operator ^ (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x^b.x, a.y^b.y, a.z^b.z);
}

static __host__ __device__ __inline__ ushort3 operator ^ (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a^b.x, a^b.y, a^b.z);
}

static __host__ __device__ __inline__ ushort3 operator ^ (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x^b, a.y^b, a.z^b);
}

static __host__ __device__ __inline__ ushort3 & operator ^= (ushort3 & a, const ushort3 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    return a;
}

static __host__ __device__ __inline__ ushort3 & operator ^= (ushort3 & a, const ushort & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    return a;
}

static __host__ __device__ __inline__ ushort4 operator ^ (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x^b.x, a.y^b.y, a.z^b.z, a.w^b.w);
}

static __host__ __device__ __inline__ ushort4 operator ^ (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a^b.x, a^b.y, a^b.z, a^b.w);
}

static __host__ __device__ __inline__ ushort4 operator ^ (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x^b, a.y^b, a.z^b, a.w^b);
}

static __host__ __device__ __inline__ ushort4 & operator ^= (ushort4 & a, const ushort4 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    a.w ^= b.w;
    return a;
}

static __host__ __device__ __inline__ ushort4 & operator ^= (ushort4 & a, const ushort & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    a.w ^= b;
    return a;
}

static __host__ __device__ __inline__ int2 operator ^ (const int2 & a, const int2 & b)
{
    return make_int2(a.x^b.x, a.y^b.y);
}

static __host__ __device__ __inline__ int2 operator ^ (const int & a, const int2 & b)
{
    return make_int2(a^b.x, a^b.y);
}

static __host__ __device__ __inline__ int2 operator ^ (const int2 & a, const int & b)
{
    return make_int2(a.x^b, a.y^b);
}

static __host__ __device__ __inline__ int2 & operator ^= (int2 & a, const int2 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    return a;
}

static __host__ __device__ __inline__ int2 & operator ^= (int2 & a, const int & b)
{
    a.x ^= b;
    a.y ^= b;
    return a;
}

static __host__ __device__ __inline__ int3 operator ^ (const int3 & a, const int3 & b)
{
    return make_int3(a.x^b.x, a.y^b.y, a.z^b.z);
}

static __host__ __device__ __inline__ int3 operator ^ (const int & a, const int3 & b)
{
    return make_int3(a^b.x, a^b.y, a^b.z);
}

static __host__ __device__ __inline__ int3 operator ^ (const int3 & a, const int & b)
{
    return make_int3(a.x^b, a.y^b, a.z^b);
}

static __host__ __device__ __inline__ int3 & operator ^= (int3 & a, const int3 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    return a;
}

static __host__ __device__ __inline__ int3 & operator ^= (int3 & a, const int & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    return a;
}

static __host__ __device__ __inline__ int4 operator ^ (const int4 & a, const int4 & b)
{
    return make_int4(a.x^b.x, a.y^b.y, a.z^b.z, a.w^b.w);
}

static __host__ __device__ __inline__ int4 operator ^ (const int & a, const int4 & b)
{
    return make_int4(a^b.x, a^b.y, a^b.z, a^b.w);
}

static __host__ __device__ __inline__ int4 operator ^ (const int4 & a, const int & b)
{
    return make_int4(a.x^b, a.y^b, a.z^b, a.w^b);
}

static __host__ __device__ __inline__ int4 & operator ^= (int4 & a, const int4 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    a.w ^= b.w;
    return a;
}

static __host__ __device__ __inline__ int4 & operator ^= (int4 & a, const int & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    a.w ^= b;
    return a;
}

static __host__ __device__ __inline__ uint2 operator ^ (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x^b.x, a.y^b.y);
}

static __host__ __device__ __inline__ uint2 operator ^ (const uint & a, const uint2 & b)
{
    return make_uint2(a^b.x, a^b.y);
}

static __host__ __device__ __inline__ uint2 operator ^ (const uint2 & a, const uint & b)
{
    return make_uint2(a.x^b, a.y^b);
}

static __host__ __device__ __inline__ uint2 & operator ^= (uint2 & a, const uint2 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    return a;
}

static __host__ __device__ __inline__ uint2 & operator ^= (uint2 & a, const uint & b)
{
    a.x ^= b;
    a.y ^= b;
    return a;
}

static __host__ __device__ __inline__ uint3 operator ^ (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x^b.x, a.y^b.y, a.z^b.z);
}

static __host__ __device__ __inline__ uint3 operator ^ (const uint & a, const uint3 & b)
{
    return make_uint3(a^b.x, a^b.y, a^b.z);
}

static __host__ __device__ __inline__ uint3 operator ^ (const uint3 & a, const uint & b)
{
    return make_uint3(a.x^b, a.y^b, a.z^b);
}

static __host__ __device__ __inline__ uint3 & operator ^= (uint3 & a, const uint3 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    return a;
}

static __host__ __device__ __inline__ uint3 & operator ^= (uint3 & a, const uint & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    return a;
}

static __host__ __device__ __inline__ uint4 operator ^ (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x^b.x, a.y^b.y, a.z^b.z, a.w^b.w);
}

static __host__ __device__ __inline__ uint4 operator ^ (const uint & a, const uint4 & b)
{
    return make_uint4(a^b.x, a^b.y, a^b.z, a^b.w);
}

static __host__ __device__ __inline__ uint4 operator ^ (const uint4 & a, const uint & b)
{
    return make_uint4(a.x^b, a.y^b, a.z^b, a.w^b);
}

static __host__ __device__ __inline__ uint4 & operator ^= (uint4 & a, const uint4 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    a.w ^= b.w;
    return a;
}

static __host__ __device__ __inline__ uint4 & operator ^= (uint4 & a, const uint & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    a.w ^= b;
    return a;
}

static __host__ __device__ __inline__ long2 operator ^ (const long2 & a, const long2 & b)
{
    return make_long2(a.x^b.x, a.y^b.y);
}

static __host__ __device__ __inline__ long2 operator ^ (const long & a, const long2 & b)
{
    return make_long2(a^b.x, a^b.y);
}

static __host__ __device__ __inline__ long2 operator ^ (const long2 & a, const long & b)
{
    return make_long2(a.x^b, a.y^b);
}

static __host__ __device__ __inline__ long2 & operator ^= (long2 & a, const long2 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    return a;
}

static __host__ __device__ __inline__ long2 & operator ^= (long2 & a, const long & b)
{
    a.x ^= b;
    a.y ^= b;
    return a;
}

static __host__ __device__ __inline__ long3 operator ^ (const long3 & a, const long3 & b)
{
    return make_long3(a.x^b.x, a.y^b.y, a.z^b.z);
}

static __host__ __device__ __inline__ long3 operator ^ (const long & a, const long3 & b)
{
    return make_long3(a^b.x, a^b.y, a^b.z);
}

static __host__ __device__ __inline__ long3 operator ^ (const long3 & a, const long & b)
{
    return make_long3(a.x^b, a.y^b, a.z^b);
}

static __host__ __device__ __inline__ long3 & operator ^= (long3 & a, const long3 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    return a;
}

static __host__ __device__ __inline__ long3 & operator ^= (long3 & a, const long & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    return a;
}

static __host__ __device__ __inline__ long4 operator ^ (const long4 & a, const long4 & b)
{
    return make_long4(a.x^b.x, a.y^b.y, a.z^b.z, a.w^b.w);
}

static __host__ __device__ __inline__ long4 operator ^ (const long & a, const long4 & b)
{
    return make_long4(a^b.x, a^b.y, a^b.z, a^b.w);
}

static __host__ __device__ __inline__ long4 operator ^ (const long4 & a, const long & b)
{
    return make_long4(a.x^b, a.y^b, a.z^b, a.w^b);
}

static __host__ __device__ __inline__ long4 & operator ^= (long4 & a, const long4 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    a.w ^= b.w;
    return a;
}

static __host__ __device__ __inline__ long4 & operator ^= (long4 & a, const long & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    a.w ^= b;
    return a;
}

static __host__ __device__ __inline__ ulong2 operator ^ (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x^b.x, a.y^b.y);
}

static __host__ __device__ __inline__ ulong2 operator ^ (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a^b.x, a^b.y);
}

static __host__ __device__ __inline__ ulong2 operator ^ (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x^b, a.y^b);
}

static __host__ __device__ __inline__ ulong2 & operator ^= (ulong2 & a, const ulong2 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    return a;
}

static __host__ __device__ __inline__ ulong2 & operator ^= (ulong2 & a, const ulong & b)
{
    a.x ^= b;
    a.y ^= b;
    return a;
}

static __host__ __device__ __inline__ ulong3 operator ^ (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x^b.x, a.y^b.y, a.z^b.z);
}

static __host__ __device__ __inline__ ulong3 operator ^ (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a^b.x, a^b.y, a^b.z);
}

static __host__ __device__ __inline__ ulong3 operator ^ (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x^b, a.y^b, a.z^b);
}

static __host__ __device__ __inline__ ulong3 & operator ^= (ulong3 & a, const ulong3 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    return a;
}

static __host__ __device__ __inline__ ulong3 & operator ^= (ulong3 & a, const ulong & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    return a;
}

static __host__ __device__ __inline__ ulong4 operator ^ (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x^b.x, a.y^b.y, a.z^b.z, a.w^b.w);
}

static __host__ __device__ __inline__ ulong4 operator ^ (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a^b.x, a^b.y, a^b.z, a^b.w);
}

static __host__ __device__ __inline__ ulong4 operator ^ (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x^b, a.y^b, a.z^b, a.w^b);
}

static __host__ __device__ __inline__ ulong4 & operator ^= (ulong4 & a, const ulong4 & b)
{
    a.x ^= b.x;
    a.y ^= b.y;
    a.z ^= b.z;
    a.w ^= b.w;
    return a;
}

static __host__ __device__ __inline__ ulong4 & operator ^= (ulong4 & a, const ulong & b)
{
    a.x ^= b;
    a.y ^= b;
    a.z ^= b;
    a.w ^= b;
    return a;
}

static __host__ __device__ __inline__ char2 operator << (const char2 & a, const char2 & b)
{
    return make_char2(a.x<<b.x, a.y<<b.y);
}

static __host__ __device__ __inline__ char2 operator << (const char & a, const char2 & b)
{
    return make_char2(a<<b.x, a<<b.y);
}

static __host__ __device__ __inline__ char2 operator << (const char2 & a, const char & b)
{
    return make_char2(a.x<<b, a.y<<b);
}

static __host__ __device__ __inline__ char2 & operator <<= (char2 & a, const char2 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    return a;
}

static __host__ __device__ __inline__ char2 & operator <<= (char2 & a, const char & b)
{
    a.x <<= b;
    a.y <<= b;
    return a;
}

static __host__ __device__ __inline__ char3 operator << (const char3 & a, const char3 & b)
{
    return make_char3(a.x<<b.x, a.y<<b.y, a.z<<b.z);
}

static __host__ __device__ __inline__ char3 operator << (const char & a, const char3 & b)
{
    return make_char3(a<<b.x, a<<b.y, a<<b.z);
}

static __host__ __device__ __inline__ char3 operator << (const char3 & a, const char & b)
{
    return make_char3(a.x<<b, a.y<<b, a.z<<b);
}

static __host__ __device__ __inline__ char3 & operator <<= (char3 & a, const char3 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    return a;
}

static __host__ __device__ __inline__ char3 & operator <<= (char3 & a, const char & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    return a;
}

static __host__ __device__ __inline__ char4 operator << (const char4 & a, const char4 & b)
{
    return make_char4(a.x<<b.x, a.y<<b.y, a.z<<b.z, a.w<<b.w);
}

static __host__ __device__ __inline__ char4 operator << (const char & a, const char4 & b)
{
    return make_char4(a<<b.x, a<<b.y, a<<b.z, a<<b.w);
}

static __host__ __device__ __inline__ char4 operator << (const char4 & a, const char & b)
{
    return make_char4(a.x<<b, a.y<<b, a.z<<b, a.w<<b);
}

static __host__ __device__ __inline__ char4 & operator <<= (char4 & a, const char4 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    a.w <<= b.w;
    return a;
}

static __host__ __device__ __inline__ char4 & operator <<= (char4 & a, const char & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    a.w <<= b;
    return a;
}

static __host__ __device__ __inline__ uchar2 operator << (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x<<b.x, a.y<<b.y);
}

static __host__ __device__ __inline__ uchar2 operator << (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a<<b.x, a<<b.y);
}

static __host__ __device__ __inline__ uchar2 operator << (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x<<b, a.y<<b);
}

static __host__ __device__ __inline__ uchar2 & operator <<= (uchar2 & a, const uchar2 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    return a;
}

static __host__ __device__ __inline__ uchar2 & operator <<= (uchar2 & a, const uchar & b)
{
    a.x <<= b;
    a.y <<= b;
    return a;
}

static __host__ __device__ __inline__ uchar3 operator << (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x<<b.x, a.y<<b.y, a.z<<b.z);
}

static __host__ __device__ __inline__ uchar3 operator << (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a<<b.x, a<<b.y, a<<b.z);
}

static __host__ __device__ __inline__ uchar3 operator << (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x<<b, a.y<<b, a.z<<b);
}

static __host__ __device__ __inline__ uchar3 & operator <<= (uchar3 & a, const uchar3 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    return a;
}

static __host__ __device__ __inline__ uchar3 & operator <<= (uchar3 & a, const uchar & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    return a;
}

static __host__ __device__ __inline__ uchar4 operator << (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x<<b.x, a.y<<b.y, a.z<<b.z, a.w<<b.w);
}

static __host__ __device__ __inline__ uchar4 operator << (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a<<b.x, a<<b.y, a<<b.z, a<<b.w);
}

static __host__ __device__ __inline__ uchar4 operator << (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x<<b, a.y<<b, a.z<<b, a.w<<b);
}

static __host__ __device__ __inline__ uchar4 & operator <<= (uchar4 & a, const uchar4 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    a.w <<= b.w;
    return a;
}

static __host__ __device__ __inline__ uchar4 & operator <<= (uchar4 & a, const uchar & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    a.w <<= b;
    return a;
}

static __host__ __device__ __inline__ short2 operator << (const short2 & a, const short2 & b)
{
    return make_short2(a.x<<b.x, a.y<<b.y);
}

static __host__ __device__ __inline__ short2 operator << (const short & a, const short2 & b)
{
    return make_short2(a<<b.x, a<<b.y);
}

static __host__ __device__ __inline__ short2 operator << (const short2 & a, const short & b)
{
    return make_short2(a.x<<b, a.y<<b);
}

static __host__ __device__ __inline__ short2 & operator <<= (short2 & a, const short2 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    return a;
}

static __host__ __device__ __inline__ short2 & operator <<= (short2 & a, const short & b)
{
    a.x <<= b;
    a.y <<= b;
    return a;
}

static __host__ __device__ __inline__ short3 operator << (const short3 & a, const short3 & b)
{
    return make_short3(a.x<<b.x, a.y<<b.y, a.z<<b.z);
}

static __host__ __device__ __inline__ short3 operator << (const short & a, const short3 & b)
{
    return make_short3(a<<b.x, a<<b.y, a<<b.z);
}

static __host__ __device__ __inline__ short3 operator << (const short3 & a, const short & b)
{
    return make_short3(a.x<<b, a.y<<b, a.z<<b);
}

static __host__ __device__ __inline__ short3 & operator <<= (short3 & a, const short3 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    return a;
}

static __host__ __device__ __inline__ short3 & operator <<= (short3 & a, const short & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    return a;
}

static __host__ __device__ __inline__ short4 operator << (const short4 & a, const short4 & b)
{
    return make_short4(a.x<<b.x, a.y<<b.y, a.z<<b.z, a.w<<b.w);
}

static __host__ __device__ __inline__ short4 operator << (const short & a, const short4 & b)
{
    return make_short4(a<<b.x, a<<b.y, a<<b.z, a<<b.w);
}

static __host__ __device__ __inline__ short4 operator << (const short4 & a, const short & b)
{
    return make_short4(a.x<<b, a.y<<b, a.z<<b, a.w<<b);
}

static __host__ __device__ __inline__ short4 & operator <<= (short4 & a, const short4 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    a.w <<= b.w;
    return a;
}

static __host__ __device__ __inline__ short4 & operator <<= (short4 & a, const short & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    a.w <<= b;
    return a;
}

static __host__ __device__ __inline__ ushort2 operator << (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x<<b.x, a.y<<b.y);
}

static __host__ __device__ __inline__ ushort2 operator << (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a<<b.x, a<<b.y);
}

static __host__ __device__ __inline__ ushort2 operator << (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x<<b, a.y<<b);
}

static __host__ __device__ __inline__ ushort2 & operator <<= (ushort2 & a, const ushort2 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    return a;
}

static __host__ __device__ __inline__ ushort2 & operator <<= (ushort2 & a, const ushort & b)
{
    a.x <<= b;
    a.y <<= b;
    return a;
}

static __host__ __device__ __inline__ ushort3 operator << (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x<<b.x, a.y<<b.y, a.z<<b.z);
}

static __host__ __device__ __inline__ ushort3 operator << (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a<<b.x, a<<b.y, a<<b.z);
}

static __host__ __device__ __inline__ ushort3 operator << (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x<<b, a.y<<b, a.z<<b);
}

static __host__ __device__ __inline__ ushort3 & operator <<= (ushort3 & a, const ushort3 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    return a;
}

static __host__ __device__ __inline__ ushort3 & operator <<= (ushort3 & a, const ushort & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    return a;
}

static __host__ __device__ __inline__ ushort4 operator << (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x<<b.x, a.y<<b.y, a.z<<b.z, a.w<<b.w);
}

static __host__ __device__ __inline__ ushort4 operator << (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a<<b.x, a<<b.y, a<<b.z, a<<b.w);
}

static __host__ __device__ __inline__ ushort4 operator << (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x<<b, a.y<<b, a.z<<b, a.w<<b);
}

static __host__ __device__ __inline__ ushort4 & operator <<= (ushort4 & a, const ushort4 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    a.w <<= b.w;
    return a;
}

static __host__ __device__ __inline__ ushort4 & operator <<= (ushort4 & a, const ushort & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    a.w <<= b;
    return a;
}

static __host__ __device__ __inline__ int2 operator << (const int2 & a, const int2 & b)
{
    return make_int2(a.x<<b.x, a.y<<b.y);
}

static __host__ __device__ __inline__ int2 operator << (const int & a, const int2 & b)
{
    return make_int2(a<<b.x, a<<b.y);
}

static __host__ __device__ __inline__ int2 operator << (const int2 & a, const int & b)
{
    return make_int2(a.x<<b, a.y<<b);
}

static __host__ __device__ __inline__ int2 & operator <<= (int2 & a, const int2 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    return a;
}

static __host__ __device__ __inline__ int2 & operator <<= (int2 & a, const int & b)
{
    a.x <<= b;
    a.y <<= b;
    return a;
}

static __host__ __device__ __inline__ int3 operator << (const int3 & a, const int3 & b)
{
    return make_int3(a.x<<b.x, a.y<<b.y, a.z<<b.z);
}

static __host__ __device__ __inline__ int3 operator << (const int & a, const int3 & b)
{
    return make_int3(a<<b.x, a<<b.y, a<<b.z);
}

static __host__ __device__ __inline__ int3 operator << (const int3 & a, const int & b)
{
    return make_int3(a.x<<b, a.y<<b, a.z<<b);
}

static __host__ __device__ __inline__ int3 & operator <<= (int3 & a, const int3 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    return a;
}

static __host__ __device__ __inline__ int3 & operator <<= (int3 & a, const int & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    return a;
}

static __host__ __device__ __inline__ int4 operator << (const int4 & a, const int4 & b)
{
    return make_int4(a.x<<b.x, a.y<<b.y, a.z<<b.z, a.w<<b.w);
}

static __host__ __device__ __inline__ int4 operator << (const int & a, const int4 & b)
{
    return make_int4(a<<b.x, a<<b.y, a<<b.z, a<<b.w);
}

static __host__ __device__ __inline__ int4 operator << (const int4 & a, const int & b)
{
    return make_int4(a.x<<b, a.y<<b, a.z<<b, a.w<<b);
}

static __host__ __device__ __inline__ int4 & operator <<= (int4 & a, const int4 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    a.w <<= b.w;
    return a;
}

static __host__ __device__ __inline__ int4 & operator <<= (int4 & a, const int & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    a.w <<= b;
    return a;
}

static __host__ __device__ __inline__ uint2 operator << (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x<<b.x, a.y<<b.y);
}

static __host__ __device__ __inline__ uint2 operator << (const uint & a, const uint2 & b)
{
    return make_uint2(a<<b.x, a<<b.y);
}

static __host__ __device__ __inline__ uint2 operator << (const uint2 & a, const uint & b)
{
    return make_uint2(a.x<<b, a.y<<b);
}

static __host__ __device__ __inline__ uint2 & operator <<= (uint2 & a, const uint2 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    return a;
}

static __host__ __device__ __inline__ uint2 & operator <<= (uint2 & a, const uint & b)
{
    a.x <<= b;
    a.y <<= b;
    return a;
}

static __host__ __device__ __inline__ uint3 operator << (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x<<b.x, a.y<<b.y, a.z<<b.z);
}

static __host__ __device__ __inline__ uint3 operator << (const uint & a, const uint3 & b)
{
    return make_uint3(a<<b.x, a<<b.y, a<<b.z);
}

static __host__ __device__ __inline__ uint3 operator << (const uint3 & a, const uint & b)
{
    return make_uint3(a.x<<b, a.y<<b, a.z<<b);
}

static __host__ __device__ __inline__ uint3 & operator <<= (uint3 & a, const uint3 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    return a;
}

static __host__ __device__ __inline__ uint3 & operator <<= (uint3 & a, const uint & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    return a;
}

static __host__ __device__ __inline__ uint4 operator << (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x<<b.x, a.y<<b.y, a.z<<b.z, a.w<<b.w);
}

static __host__ __device__ __inline__ uint4 operator << (const uint & a, const uint4 & b)
{
    return make_uint4(a<<b.x, a<<b.y, a<<b.z, a<<b.w);
}

static __host__ __device__ __inline__ uint4 operator << (const uint4 & a, const uint & b)
{
    return make_uint4(a.x<<b, a.y<<b, a.z<<b, a.w<<b);
}

static __host__ __device__ __inline__ uint4 & operator <<= (uint4 & a, const uint4 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    a.w <<= b.w;
    return a;
}

static __host__ __device__ __inline__ uint4 & operator <<= (uint4 & a, const uint & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    a.w <<= b;
    return a;
}

static __host__ __device__ __inline__ long2 operator << (const long2 & a, const long2 & b)
{
    return make_long2(a.x<<b.x, a.y<<b.y);
}

static __host__ __device__ __inline__ long2 operator << (const long & a, const long2 & b)
{
    return make_long2(a<<b.x, a<<b.y);
}

static __host__ __device__ __inline__ long2 operator << (const long2 & a, const long & b)
{
    return make_long2(a.x<<b, a.y<<b);
}

static __host__ __device__ __inline__ long2 & operator <<= (long2 & a, const long2 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    return a;
}

static __host__ __device__ __inline__ long2 & operator <<= (long2 & a, const long & b)
{
    a.x <<= b;
    a.y <<= b;
    return a;
}

static __host__ __device__ __inline__ long3 operator << (const long3 & a, const long3 & b)
{
    return make_long3(a.x<<b.x, a.y<<b.y, a.z<<b.z);
}

static __host__ __device__ __inline__ long3 operator << (const long & a, const long3 & b)
{
    return make_long3(a<<b.x, a<<b.y, a<<b.z);
}

static __host__ __device__ __inline__ long3 operator << (const long3 & a, const long & b)
{
    return make_long3(a.x<<b, a.y<<b, a.z<<b);
}

static __host__ __device__ __inline__ long3 & operator <<= (long3 & a, const long3 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    return a;
}

static __host__ __device__ __inline__ long3 & operator <<= (long3 & a, const long & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    return a;
}

static __host__ __device__ __inline__ long4 operator << (const long4 & a, const long4 & b)
{
    return make_long4(a.x<<b.x, a.y<<b.y, a.z<<b.z, a.w<<b.w);
}

static __host__ __device__ __inline__ long4 operator << (const long & a, const long4 & b)
{
    return make_long4(a<<b.x, a<<b.y, a<<b.z, a<<b.w);
}

static __host__ __device__ __inline__ long4 operator << (const long4 & a, const long & b)
{
    return make_long4(a.x<<b, a.y<<b, a.z<<b, a.w<<b);
}

static __host__ __device__ __inline__ long4 & operator <<= (long4 & a, const long4 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    a.w <<= b.w;
    return a;
}

static __host__ __device__ __inline__ long4 & operator <<= (long4 & a, const long & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    a.w <<= b;
    return a;
}

static __host__ __device__ __inline__ ulong2 operator << (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x<<b.x, a.y<<b.y);
}

static __host__ __device__ __inline__ ulong2 operator << (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a<<b.x, a<<b.y);
}

static __host__ __device__ __inline__ ulong2 operator << (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x<<b, a.y<<b);
}

static __host__ __device__ __inline__ ulong2 & operator <<= (ulong2 & a, const ulong2 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    return a;
}

static __host__ __device__ __inline__ ulong2 & operator <<= (ulong2 & a, const ulong & b)
{
    a.x <<= b;
    a.y <<= b;
    return a;
}

static __host__ __device__ __inline__ ulong3 operator << (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x<<b.x, a.y<<b.y, a.z<<b.z);
}

static __host__ __device__ __inline__ ulong3 operator << (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a<<b.x, a<<b.y, a<<b.z);
}

static __host__ __device__ __inline__ ulong3 operator << (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x<<b, a.y<<b, a.z<<b);
}

static __host__ __device__ __inline__ ulong3 & operator <<= (ulong3 & a, const ulong3 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    return a;
}

static __host__ __device__ __inline__ ulong3 & operator <<= (ulong3 & a, const ulong & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    return a;
}

static __host__ __device__ __inline__ ulong4 operator << (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x<<b.x, a.y<<b.y, a.z<<b.z, a.w<<b.w);
}

static __host__ __device__ __inline__ ulong4 operator << (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a<<b.x, a<<b.y, a<<b.z, a<<b.w);
}

static __host__ __device__ __inline__ ulong4 operator << (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x<<b, a.y<<b, a.z<<b, a.w<<b);
}

static __host__ __device__ __inline__ ulong4 & operator <<= (ulong4 & a, const ulong4 & b)
{
    a.x <<= b.x;
    a.y <<= b.y;
    a.z <<= b.z;
    a.w <<= b.w;
    return a;
}

static __host__ __device__ __inline__ ulong4 & operator <<= (ulong4 & a, const ulong & b)
{
    a.x <<= b;
    a.y <<= b;
    a.z <<= b;
    a.w <<= b;
    return a;
}

static __host__ __device__ __inline__ char2 operator >> (const char2 & a, const char2 & b)
{
    return make_char2(a.x>>b.x, a.y>>b.y);
}

static __host__ __device__ __inline__ char2 operator >> (const char & a, const char2 & b)
{
    return make_char2(a>>b.x, a>>b.y);
}

static __host__ __device__ __inline__ char2 operator >> (const char2 & a, const char & b)
{
    return make_char2(a.x>>b, a.y>>b);
}

static __host__ __device__ __inline__ char2 & operator >>= (char2 & a, const char2 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    return a;
}

static __host__ __device__ __inline__ char2 & operator >>= (char2 & a, const char & b)
{
    a.x >>= b;
    a.y >>= b;
    return a;
}

static __host__ __device__ __inline__ char3 operator >> (const char3 & a, const char3 & b)
{
    return make_char3(a.x>>b.x, a.y>>b.y, a.z>>b.z);
}

static __host__ __device__ __inline__ char3 operator >> (const char & a, const char3 & b)
{
    return make_char3(a>>b.x, a>>b.y, a>>b.z);
}

static __host__ __device__ __inline__ char3 operator >> (const char3 & a, const char & b)
{
    return make_char3(a.x>>b, a.y>>b, a.z>>b);
}

static __host__ __device__ __inline__ char3 & operator >>= (char3 & a, const char3 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    return a;
}

static __host__ __device__ __inline__ char3 & operator >>= (char3 & a, const char & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    return a;
}

static __host__ __device__ __inline__ char4 operator >> (const char4 & a, const char4 & b)
{
    return make_char4(a.x>>b.x, a.y>>b.y, a.z>>b.z, a.w>>b.w);
}

static __host__ __device__ __inline__ char4 operator >> (const char & a, const char4 & b)
{
    return make_char4(a>>b.x, a>>b.y, a>>b.z, a>>b.w);
}

static __host__ __device__ __inline__ char4 operator >> (const char4 & a, const char & b)
{
    return make_char4(a.x>>b, a.y>>b, a.z>>b, a.w>>b);
}

static __host__ __device__ __inline__ char4 & operator >>= (char4 & a, const char4 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    a.w >>= b.w;
    return a;
}

static __host__ __device__ __inline__ char4 & operator >>= (char4 & a, const char & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    a.w >>= b;
    return a;
}

static __host__ __device__ __inline__ uchar2 operator >> (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x>>b.x, a.y>>b.y);
}

static __host__ __device__ __inline__ uchar2 operator >> (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a>>b.x, a>>b.y);
}

static __host__ __device__ __inline__ uchar2 operator >> (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x>>b, a.y>>b);
}

static __host__ __device__ __inline__ uchar2 & operator >>= (uchar2 & a, const uchar2 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    return a;
}

static __host__ __device__ __inline__ uchar2 & operator >>= (uchar2 & a, const uchar & b)
{
    a.x >>= b;
    a.y >>= b;
    return a;
}

static __host__ __device__ __inline__ uchar3 operator >> (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x>>b.x, a.y>>b.y, a.z>>b.z);
}

static __host__ __device__ __inline__ uchar3 operator >> (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a>>b.x, a>>b.y, a>>b.z);
}

static __host__ __device__ __inline__ uchar3 operator >> (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x>>b, a.y>>b, a.z>>b);
}

static __host__ __device__ __inline__ uchar3 & operator >>= (uchar3 & a, const uchar3 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    return a;
}

static __host__ __device__ __inline__ uchar3 & operator >>= (uchar3 & a, const uchar & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    return a;
}

static __host__ __device__ __inline__ uchar4 operator >> (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x>>b.x, a.y>>b.y, a.z>>b.z, a.w>>b.w);
}

static __host__ __device__ __inline__ uchar4 operator >> (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a>>b.x, a>>b.y, a>>b.z, a>>b.w);
}

static __host__ __device__ __inline__ uchar4 operator >> (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x>>b, a.y>>b, a.z>>b, a.w>>b);
}

static __host__ __device__ __inline__ uchar4 & operator >>= (uchar4 & a, const uchar4 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    a.w >>= b.w;
    return a;
}

static __host__ __device__ __inline__ uchar4 & operator >>= (uchar4 & a, const uchar & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    a.w >>= b;
    return a;
}

static __host__ __device__ __inline__ short2 operator >> (const short2 & a, const short2 & b)
{
    return make_short2(a.x>>b.x, a.y>>b.y);
}

static __host__ __device__ __inline__ short2 operator >> (const short & a, const short2 & b)
{
    return make_short2(a>>b.x, a>>b.y);
}

static __host__ __device__ __inline__ short2 operator >> (const short2 & a, const short & b)
{
    return make_short2(a.x>>b, a.y>>b);
}

static __host__ __device__ __inline__ short2 & operator >>= (short2 & a, const short2 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    return a;
}

static __host__ __device__ __inline__ short2 & operator >>= (short2 & a, const short & b)
{
    a.x >>= b;
    a.y >>= b;
    return a;
}

static __host__ __device__ __inline__ short3 operator >> (const short3 & a, const short3 & b)
{
    return make_short3(a.x>>b.x, a.y>>b.y, a.z>>b.z);
}

static __host__ __device__ __inline__ short3 operator >> (const short & a, const short3 & b)
{
    return make_short3(a>>b.x, a>>b.y, a>>b.z);
}

static __host__ __device__ __inline__ short3 operator >> (const short3 & a, const short & b)
{
    return make_short3(a.x>>b, a.y>>b, a.z>>b);
}

static __host__ __device__ __inline__ short3 & operator >>= (short3 & a, const short3 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    return a;
}

static __host__ __device__ __inline__ short3 & operator >>= (short3 & a, const short & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    return a;
}

static __host__ __device__ __inline__ short4 operator >> (const short4 & a, const short4 & b)
{
    return make_short4(a.x>>b.x, a.y>>b.y, a.z>>b.z, a.w>>b.w);
}

static __host__ __device__ __inline__ short4 operator >> (const short & a, const short4 & b)
{
    return make_short4(a>>b.x, a>>b.y, a>>b.z, a>>b.w);
}

static __host__ __device__ __inline__ short4 operator >> (const short4 & a, const short & b)
{
    return make_short4(a.x>>b, a.y>>b, a.z>>b, a.w>>b);
}

static __host__ __device__ __inline__ short4 & operator >>= (short4 & a, const short4 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    a.w >>= b.w;
    return a;
}

static __host__ __device__ __inline__ short4 & operator >>= (short4 & a, const short & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    a.w >>= b;
    return a;
}

static __host__ __device__ __inline__ ushort2 operator >> (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x>>b.x, a.y>>b.y);
}

static __host__ __device__ __inline__ ushort2 operator >> (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a>>b.x, a>>b.y);
}

static __host__ __device__ __inline__ ushort2 operator >> (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x>>b, a.y>>b);
}

static __host__ __device__ __inline__ ushort2 & operator >>= (ushort2 & a, const ushort2 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    return a;
}

static __host__ __device__ __inline__ ushort2 & operator >>= (ushort2 & a, const ushort & b)
{
    a.x >>= b;
    a.y >>= b;
    return a;
}

static __host__ __device__ __inline__ ushort3 operator >> (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x>>b.x, a.y>>b.y, a.z>>b.z);
}

static __host__ __device__ __inline__ ushort3 operator >> (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a>>b.x, a>>b.y, a>>b.z);
}

static __host__ __device__ __inline__ ushort3 operator >> (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x>>b, a.y>>b, a.z>>b);
}

static __host__ __device__ __inline__ ushort3 & operator >>= (ushort3 & a, const ushort3 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    return a;
}

static __host__ __device__ __inline__ ushort3 & operator >>= (ushort3 & a, const ushort & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    return a;
}

static __host__ __device__ __inline__ ushort4 operator >> (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x>>b.x, a.y>>b.y, a.z>>b.z, a.w>>b.w);
}

static __host__ __device__ __inline__ ushort4 operator >> (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a>>b.x, a>>b.y, a>>b.z, a>>b.w);
}

static __host__ __device__ __inline__ ushort4 operator >> (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x>>b, a.y>>b, a.z>>b, a.w>>b);
}

static __host__ __device__ __inline__ ushort4 & operator >>= (ushort4 & a, const ushort4 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    a.w >>= b.w;
    return a;
}

static __host__ __device__ __inline__ ushort4 & operator >>= (ushort4 & a, const ushort & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    a.w >>= b;
    return a;
}

static __host__ __device__ __inline__ int2 operator >> (const int2 & a, const int2 & b)
{
    return make_int2(a.x>>b.x, a.y>>b.y);
}

static __host__ __device__ __inline__ int2 operator >> (const int & a, const int2 & b)
{
    return make_int2(a>>b.x, a>>b.y);
}

static __host__ __device__ __inline__ int2 operator >> (const int2 & a, const int & b)
{
    return make_int2(a.x>>b, a.y>>b);
}

static __host__ __device__ __inline__ int2 & operator >>= (int2 & a, const int2 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    return a;
}

static __host__ __device__ __inline__ int2 & operator >>= (int2 & a, const int & b)
{
    a.x >>= b;
    a.y >>= b;
    return a;
}

static __host__ __device__ __inline__ int3 operator >> (const int3 & a, const int3 & b)
{
    return make_int3(a.x>>b.x, a.y>>b.y, a.z>>b.z);
}

static __host__ __device__ __inline__ int3 operator >> (const int & a, const int3 & b)
{
    return make_int3(a>>b.x, a>>b.y, a>>b.z);
}

static __host__ __device__ __inline__ int3 operator >> (const int3 & a, const int & b)
{
    return make_int3(a.x>>b, a.y>>b, a.z>>b);
}

static __host__ __device__ __inline__ int3 & operator >>= (int3 & a, const int3 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    return a;
}

static __host__ __device__ __inline__ int3 & operator >>= (int3 & a, const int & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    return a;
}

static __host__ __device__ __inline__ int4 operator >> (const int4 & a, const int4 & b)
{
    return make_int4(a.x>>b.x, a.y>>b.y, a.z>>b.z, a.w>>b.w);
}

static __host__ __device__ __inline__ int4 operator >> (const int & a, const int4 & b)
{
    return make_int4(a>>b.x, a>>b.y, a>>b.z, a>>b.w);
}

static __host__ __device__ __inline__ int4 operator >> (const int4 & a, const int & b)
{
    return make_int4(a.x>>b, a.y>>b, a.z>>b, a.w>>b);
}

static __host__ __device__ __inline__ int4 & operator >>= (int4 & a, const int4 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    a.w >>= b.w;
    return a;
}

static __host__ __device__ __inline__ int4 & operator >>= (int4 & a, const int & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    a.w >>= b;
    return a;
}

static __host__ __device__ __inline__ uint2 operator >> (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x>>b.x, a.y>>b.y);
}

static __host__ __device__ __inline__ uint2 operator >> (const uint & a, const uint2 & b)
{
    return make_uint2(a>>b.x, a>>b.y);
}

static __host__ __device__ __inline__ uint2 operator >> (const uint2 & a, const uint & b)
{
    return make_uint2(a.x>>b, a.y>>b);
}

static __host__ __device__ __inline__ uint2 & operator >>= (uint2 & a, const uint2 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    return a;
}

static __host__ __device__ __inline__ uint2 & operator >>= (uint2 & a, const uint & b)
{
    a.x >>= b;
    a.y >>= b;
    return a;
}

static __host__ __device__ __inline__ uint3 operator >> (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x>>b.x, a.y>>b.y, a.z>>b.z);
}

static __host__ __device__ __inline__ uint3 operator >> (const uint & a, const uint3 & b)
{
    return make_uint3(a>>b.x, a>>b.y, a>>b.z);
}

static __host__ __device__ __inline__ uint3 operator >> (const uint3 & a, const uint & b)
{
    return make_uint3(a.x>>b, a.y>>b, a.z>>b);
}

static __host__ __device__ __inline__ uint3 & operator >>= (uint3 & a, const uint3 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    return a;
}

static __host__ __device__ __inline__ uint3 & operator >>= (uint3 & a, const uint & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    return a;
}

static __host__ __device__ __inline__ uint4 operator >> (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x>>b.x, a.y>>b.y, a.z>>b.z, a.w>>b.w);
}

static __host__ __device__ __inline__ uint4 operator >> (const uint & a, const uint4 & b)
{
    return make_uint4(a>>b.x, a>>b.y, a>>b.z, a>>b.w);
}

static __host__ __device__ __inline__ uint4 operator >> (const uint4 & a, const uint & b)
{
    return make_uint4(a.x>>b, a.y>>b, a.z>>b, a.w>>b);
}

static __host__ __device__ __inline__ uint4 & operator >>= (uint4 & a, const uint4 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    a.w >>= b.w;
    return a;
}

static __host__ __device__ __inline__ uint4 & operator >>= (uint4 & a, const uint & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    a.w >>= b;
    return a;
}

static __host__ __device__ __inline__ long2 operator >> (const long2 & a, const long2 & b)
{
    return make_long2(a.x>>b.x, a.y>>b.y);
}

static __host__ __device__ __inline__ long2 operator >> (const long & a, const long2 & b)
{
    return make_long2(a>>b.x, a>>b.y);
}

static __host__ __device__ __inline__ long2 operator >> (const long2 & a, const long & b)
{
    return make_long2(a.x>>b, a.y>>b);
}

static __host__ __device__ __inline__ long2 & operator >>= (long2 & a, const long2 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    return a;
}

static __host__ __device__ __inline__ long2 & operator >>= (long2 & a, const long & b)
{
    a.x >>= b;
    a.y >>= b;
    return a;
}

static __host__ __device__ __inline__ long3 operator >> (const long3 & a, const long3 & b)
{
    return make_long3(a.x>>b.x, a.y>>b.y, a.z>>b.z);
}

static __host__ __device__ __inline__ long3 operator >> (const long & a, const long3 & b)
{
    return make_long3(a>>b.x, a>>b.y, a>>b.z);
}

static __host__ __device__ __inline__ long3 operator >> (const long3 & a, const long & b)
{
    return make_long3(a.x>>b, a.y>>b, a.z>>b);
}

static __host__ __device__ __inline__ long3 & operator >>= (long3 & a, const long3 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    return a;
}

static __host__ __device__ __inline__ long3 & operator >>= (long3 & a, const long & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    return a;
}

static __host__ __device__ __inline__ long4 operator >> (const long4 & a, const long4 & b)
{
    return make_long4(a.x>>b.x, a.y>>b.y, a.z>>b.z, a.w>>b.w);
}

static __host__ __device__ __inline__ long4 operator >> (const long & a, const long4 & b)
{
    return make_long4(a>>b.x, a>>b.y, a>>b.z, a>>b.w);
}

static __host__ __device__ __inline__ long4 operator >> (const long4 & a, const long & b)
{
    return make_long4(a.x>>b, a.y>>b, a.z>>b, a.w>>b);
}

static __host__ __device__ __inline__ long4 & operator >>= (long4 & a, const long4 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    a.w >>= b.w;
    return a;
}

static __host__ __device__ __inline__ long4 & operator >>= (long4 & a, const long & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    a.w >>= b;
    return a;
}

static __host__ __device__ __inline__ ulong2 operator >> (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x>>b.x, a.y>>b.y);
}

static __host__ __device__ __inline__ ulong2 operator >> (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a>>b.x, a>>b.y);
}

static __host__ __device__ __inline__ ulong2 operator >> (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x>>b, a.y>>b);
}

static __host__ __device__ __inline__ ulong2 & operator >>= (ulong2 & a, const ulong2 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    return a;
}

static __host__ __device__ __inline__ ulong2 & operator >>= (ulong2 & a, const ulong & b)
{
    a.x >>= b;
    a.y >>= b;
    return a;
}

static __host__ __device__ __inline__ ulong3 operator >> (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x>>b.x, a.y>>b.y, a.z>>b.z);
}

static __host__ __device__ __inline__ ulong3 operator >> (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a>>b.x, a>>b.y, a>>b.z);
}

static __host__ __device__ __inline__ ulong3 operator >> (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x>>b, a.y>>b, a.z>>b);
}

static __host__ __device__ __inline__ ulong3 & operator >>= (ulong3 & a, const ulong3 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    return a;
}

static __host__ __device__ __inline__ ulong3 & operator >>= (ulong3 & a, const ulong & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    return a;
}

static __host__ __device__ __inline__ ulong4 operator >> (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x>>b.x, a.y>>b.y, a.z>>b.z, a.w>>b.w);
}

static __host__ __device__ __inline__ ulong4 operator >> (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a>>b.x, a>>b.y, a>>b.z, a>>b.w);
}

static __host__ __device__ __inline__ ulong4 operator >> (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x>>b, a.y>>b, a.z>>b, a.w>>b);
}

static __host__ __device__ __inline__ ulong4 & operator >>= (ulong4 & a, const ulong4 & b)
{
    a.x >>= b.x;
    a.y >>= b.y;
    a.z >>= b.z;
    a.w >>= b.w;
    return a;
}

static __host__ __device__ __inline__ ulong4 & operator >>= (ulong4 & a, const ulong & b)
{
    a.x >>= b;
    a.y >>= b;
    a.z >>= b;
    a.w >>= b;
    return a;
}

static __host__ __device__ __inline__ char2 operator && (const char2 & a, const char2 & b)
{
    return make_char2(a.x&&b.x, a.y&&b.y);
}

static __host__ __device__ __inline__ char2 operator && (const char & a, const char2 & b)
{
    return make_char2(a&&b.x, a&&b.y);
}

static __host__ __device__ __inline__ char2 operator && (const char2 & a, const char & b)
{
    return make_char2(a.x&&b, a.y&&b);
}

static __host__ __device__ __inline__ char3 operator && (const char3 & a, const char3 & b)
{
    return make_char3(a.x&&b.x, a.y&&b.y, a.z&&b.z);
}

static __host__ __device__ __inline__ char3 operator && (const char & a, const char3 & b)
{
    return make_char3(a&&b.x, a&&b.y, a&&b.z);
}

static __host__ __device__ __inline__ char3 operator && (const char3 & a, const char & b)
{
    return make_char3(a.x&&b, a.y&&b, a.z&&b);
}

static __host__ __device__ __inline__ char4 operator && (const char4 & a, const char4 & b)
{
    return make_char4(a.x&&b.x, a.y&&b.y, a.z&&b.z, a.w&&b.w);
}

static __host__ __device__ __inline__ char4 operator && (const char & a, const char4 & b)
{
    return make_char4(a&&b.x, a&&b.y, a&&b.z, a&&b.w);
}

static __host__ __device__ __inline__ char4 operator && (const char4 & a, const char & b)
{
    return make_char4(a.x&&b, a.y&&b, a.z&&b, a.w&&b);
}

static __host__ __device__ __inline__ uchar2 operator && (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x&&b.x, a.y&&b.y);
}

static __host__ __device__ __inline__ uchar2 operator && (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a&&b.x, a&&b.y);
}

static __host__ __device__ __inline__ uchar2 operator && (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x&&b, a.y&&b);
}

static __host__ __device__ __inline__ uchar3 operator && (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x&&b.x, a.y&&b.y, a.z&&b.z);
}

static __host__ __device__ __inline__ uchar3 operator && (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a&&b.x, a&&b.y, a&&b.z);
}

static __host__ __device__ __inline__ uchar3 operator && (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x&&b, a.y&&b, a.z&&b);
}

static __host__ __device__ __inline__ uchar4 operator && (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x&&b.x, a.y&&b.y, a.z&&b.z, a.w&&b.w);
}

static __host__ __device__ __inline__ uchar4 operator && (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a&&b.x, a&&b.y, a&&b.z, a&&b.w);
}

static __host__ __device__ __inline__ uchar4 operator && (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x&&b, a.y&&b, a.z&&b, a.w&&b);
}

static __host__ __device__ __inline__ short2 operator && (const short2 & a, const short2 & b)
{
    return make_short2(a.x&&b.x, a.y&&b.y);
}

static __host__ __device__ __inline__ short2 operator && (const short & a, const short2 & b)
{
    return make_short2(a&&b.x, a&&b.y);
}

static __host__ __device__ __inline__ short2 operator && (const short2 & a, const short & b)
{
    return make_short2(a.x&&b, a.y&&b);
}

static __host__ __device__ __inline__ short3 operator && (const short3 & a, const short3 & b)
{
    return make_short3(a.x&&b.x, a.y&&b.y, a.z&&b.z);
}

static __host__ __device__ __inline__ short3 operator && (const short & a, const short3 & b)
{
    return make_short3(a&&b.x, a&&b.y, a&&b.z);
}

static __host__ __device__ __inline__ short3 operator && (const short3 & a, const short & b)
{
    return make_short3(a.x&&b, a.y&&b, a.z&&b);
}

static __host__ __device__ __inline__ short4 operator && (const short4 & a, const short4 & b)
{
    return make_short4(a.x&&b.x, a.y&&b.y, a.z&&b.z, a.w&&b.w);
}

static __host__ __device__ __inline__ short4 operator && (const short & a, const short4 & b)
{
    return make_short4(a&&b.x, a&&b.y, a&&b.z, a&&b.w);
}

static __host__ __device__ __inline__ short4 operator && (const short4 & a, const short & b)
{
    return make_short4(a.x&&b, a.y&&b, a.z&&b, a.w&&b);
}

static __host__ __device__ __inline__ ushort2 operator && (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x&&b.x, a.y&&b.y);
}

static __host__ __device__ __inline__ ushort2 operator && (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a&&b.x, a&&b.y);
}

static __host__ __device__ __inline__ ushort2 operator && (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x&&b, a.y&&b);
}

static __host__ __device__ __inline__ ushort3 operator && (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x&&b.x, a.y&&b.y, a.z&&b.z);
}

static __host__ __device__ __inline__ ushort3 operator && (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a&&b.x, a&&b.y, a&&b.z);
}

static __host__ __device__ __inline__ ushort3 operator && (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x&&b, a.y&&b, a.z&&b);
}

static __host__ __device__ __inline__ ushort4 operator && (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x&&b.x, a.y&&b.y, a.z&&b.z, a.w&&b.w);
}

static __host__ __device__ __inline__ ushort4 operator && (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a&&b.x, a&&b.y, a&&b.z, a&&b.w);
}

static __host__ __device__ __inline__ ushort4 operator && (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x&&b, a.y&&b, a.z&&b, a.w&&b);
}

static __host__ __device__ __inline__ int2 operator && (const int2 & a, const int2 & b)
{
    return make_int2(a.x&&b.x, a.y&&b.y);
}

static __host__ __device__ __inline__ int2 operator && (const int & a, const int2 & b)
{
    return make_int2(a&&b.x, a&&b.y);
}

static __host__ __device__ __inline__ int2 operator && (const int2 & a, const int & b)
{
    return make_int2(a.x&&b, a.y&&b);
}

static __host__ __device__ __inline__ int3 operator && (const int3 & a, const int3 & b)
{
    return make_int3(a.x&&b.x, a.y&&b.y, a.z&&b.z);
}

static __host__ __device__ __inline__ int3 operator && (const int & a, const int3 & b)
{
    return make_int3(a&&b.x, a&&b.y, a&&b.z);
}

static __host__ __device__ __inline__ int3 operator && (const int3 & a, const int & b)
{
    return make_int3(a.x&&b, a.y&&b, a.z&&b);
}

static __host__ __device__ __inline__ int4 operator && (const int4 & a, const int4 & b)
{
    return make_int4(a.x&&b.x, a.y&&b.y, a.z&&b.z, a.w&&b.w);
}

static __host__ __device__ __inline__ int4 operator && (const int & a, const int4 & b)
{
    return make_int4(a&&b.x, a&&b.y, a&&b.z, a&&b.w);
}

static __host__ __device__ __inline__ int4 operator && (const int4 & a, const int & b)
{
    return make_int4(a.x&&b, a.y&&b, a.z&&b, a.w&&b);
}

static __host__ __device__ __inline__ uint2 operator && (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x&&b.x, a.y&&b.y);
}

static __host__ __device__ __inline__ uint2 operator && (const uint & a, const uint2 & b)
{
    return make_uint2(a&&b.x, a&&b.y);
}

static __host__ __device__ __inline__ uint2 operator && (const uint2 & a, const uint & b)
{
    return make_uint2(a.x&&b, a.y&&b);
}

static __host__ __device__ __inline__ uint3 operator && (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x&&b.x, a.y&&b.y, a.z&&b.z);
}

static __host__ __device__ __inline__ uint3 operator && (const uint & a, const uint3 & b)
{
    return make_uint3(a&&b.x, a&&b.y, a&&b.z);
}

static __host__ __device__ __inline__ uint3 operator && (const uint3 & a, const uint & b)
{
    return make_uint3(a.x&&b, a.y&&b, a.z&&b);
}

static __host__ __device__ __inline__ uint4 operator && (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x&&b.x, a.y&&b.y, a.z&&b.z, a.w&&b.w);
}

static __host__ __device__ __inline__ uint4 operator && (const uint & a, const uint4 & b)
{
    return make_uint4(a&&b.x, a&&b.y, a&&b.z, a&&b.w);
}

static __host__ __device__ __inline__ uint4 operator && (const uint4 & a, const uint & b)
{
    return make_uint4(a.x&&b, a.y&&b, a.z&&b, a.w&&b);
}

static __host__ __device__ __inline__ long2 operator && (const long2 & a, const long2 & b)
{
    return make_long2(a.x&&b.x, a.y&&b.y);
}

static __host__ __device__ __inline__ long2 operator && (const long & a, const long2 & b)
{
    return make_long2(a&&b.x, a&&b.y);
}

static __host__ __device__ __inline__ long2 operator && (const long2 & a, const long & b)
{
    return make_long2(a.x&&b, a.y&&b);
}

static __host__ __device__ __inline__ long3 operator && (const long3 & a, const long3 & b)
{
    return make_long3(a.x&&b.x, a.y&&b.y, a.z&&b.z);
}

static __host__ __device__ __inline__ long3 operator && (const long & a, const long3 & b)
{
    return make_long3(a&&b.x, a&&b.y, a&&b.z);
}

static __host__ __device__ __inline__ long3 operator && (const long3 & a, const long & b)
{
    return make_long3(a.x&&b, a.y&&b, a.z&&b);
}

static __host__ __device__ __inline__ long4 operator && (const long4 & a, const long4 & b)
{
    return make_long4(a.x&&b.x, a.y&&b.y, a.z&&b.z, a.w&&b.w);
}

static __host__ __device__ __inline__ long4 operator && (const long & a, const long4 & b)
{
    return make_long4(a&&b.x, a&&b.y, a&&b.z, a&&b.w);
}

static __host__ __device__ __inline__ long4 operator && (const long4 & a, const long & b)
{
    return make_long4(a.x&&b, a.y&&b, a.z&&b, a.w&&b);
}

static __host__ __device__ __inline__ ulong2 operator && (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x&&b.x, a.y&&b.y);
}

static __host__ __device__ __inline__ ulong2 operator && (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a&&b.x, a&&b.y);
}

static __host__ __device__ __inline__ ulong2 operator && (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x&&b, a.y&&b);
}

static __host__ __device__ __inline__ ulong3 operator && (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x&&b.x, a.y&&b.y, a.z&&b.z);
}

static __host__ __device__ __inline__ ulong3 operator && (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a&&b.x, a&&b.y, a&&b.z);
}

static __host__ __device__ __inline__ ulong3 operator && (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x&&b, a.y&&b, a.z&&b);
}

static __host__ __device__ __inline__ ulong4 operator && (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x&&b.x, a.y&&b.y, a.z&&b.z, a.w&&b.w);
}

static __host__ __device__ __inline__ ulong4 operator && (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a&&b.x, a&&b.y, a&&b.z, a&&b.w);
}

static __host__ __device__ __inline__ ulong4 operator && (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x&&b, a.y&&b, a.z&&b, a.w&&b);
}

static __host__ __device__ __inline__ char2 operator || (const char2 & a, const char2 & b)
{
    return make_char2(a.x||b.x, a.y||b.y);
}

static __host__ __device__ __inline__ char2 operator || (const char & a, const char2 & b)
{
    return make_char2(a||b.x, a||b.y);
}

static __host__ __device__ __inline__ char2 operator || (const char2 & a, const char & b)
{
    return make_char2(a.x||b, a.y||b);
}

static __host__ __device__ __inline__ char3 operator || (const char3 & a, const char3 & b)
{
    return make_char3(a.x||b.x, a.y||b.y, a.z||b.z);
}

static __host__ __device__ __inline__ char3 operator || (const char & a, const char3 & b)
{
    return make_char3(a||b.x, a||b.y, a||b.z);
}

static __host__ __device__ __inline__ char3 operator || (const char3 & a, const char & b)
{
    return make_char3(a.x||b, a.y||b, a.z||b);
}

static __host__ __device__ __inline__ char4 operator || (const char4 & a, const char4 & b)
{
    return make_char4(a.x||b.x, a.y||b.y, a.z||b.z, a.w||b.w);
}

static __host__ __device__ __inline__ char4 operator || (const char & a, const char4 & b)
{
    return make_char4(a||b.x, a||b.y, a||b.z, a||b.w);
}

static __host__ __device__ __inline__ char4 operator || (const char4 & a, const char & b)
{
    return make_char4(a.x||b, a.y||b, a.z||b, a.w||b);
}

static __host__ __device__ __inline__ uchar2 operator || (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x||b.x, a.y||b.y);
}

static __host__ __device__ __inline__ uchar2 operator || (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a||b.x, a||b.y);
}

static __host__ __device__ __inline__ uchar2 operator || (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x||b, a.y||b);
}

static __host__ __device__ __inline__ uchar3 operator || (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x||b.x, a.y||b.y, a.z||b.z);
}

static __host__ __device__ __inline__ uchar3 operator || (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a||b.x, a||b.y, a||b.z);
}

static __host__ __device__ __inline__ uchar3 operator || (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x||b, a.y||b, a.z||b);
}

static __host__ __device__ __inline__ uchar4 operator || (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x||b.x, a.y||b.y, a.z||b.z, a.w||b.w);
}

static __host__ __device__ __inline__ uchar4 operator || (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a||b.x, a||b.y, a||b.z, a||b.w);
}

static __host__ __device__ __inline__ uchar4 operator || (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x||b, a.y||b, a.z||b, a.w||b);
}

static __host__ __device__ __inline__ short2 operator || (const short2 & a, const short2 & b)
{
    return make_short2(a.x||b.x, a.y||b.y);
}

static __host__ __device__ __inline__ short2 operator || (const short & a, const short2 & b)
{
    return make_short2(a||b.x, a||b.y);
}

static __host__ __device__ __inline__ short2 operator || (const short2 & a, const short & b)
{
    return make_short2(a.x||b, a.y||b);
}

static __host__ __device__ __inline__ short3 operator || (const short3 & a, const short3 & b)
{
    return make_short3(a.x||b.x, a.y||b.y, a.z||b.z);
}

static __host__ __device__ __inline__ short3 operator || (const short & a, const short3 & b)
{
    return make_short3(a||b.x, a||b.y, a||b.z);
}

static __host__ __device__ __inline__ short3 operator || (const short3 & a, const short & b)
{
    return make_short3(a.x||b, a.y||b, a.z||b);
}

static __host__ __device__ __inline__ short4 operator || (const short4 & a, const short4 & b)
{
    return make_short4(a.x||b.x, a.y||b.y, a.z||b.z, a.w||b.w);
}

static __host__ __device__ __inline__ short4 operator || (const short & a, const short4 & b)
{
    return make_short4(a||b.x, a||b.y, a||b.z, a||b.w);
}

static __host__ __device__ __inline__ short4 operator || (const short4 & a, const short & b)
{
    return make_short4(a.x||b, a.y||b, a.z||b, a.w||b);
}

static __host__ __device__ __inline__ ushort2 operator || (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x||b.x, a.y||b.y);
}

static __host__ __device__ __inline__ ushort2 operator || (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a||b.x, a||b.y);
}

static __host__ __device__ __inline__ ushort2 operator || (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x||b, a.y||b);
}

static __host__ __device__ __inline__ ushort3 operator || (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x||b.x, a.y||b.y, a.z||b.z);
}

static __host__ __device__ __inline__ ushort3 operator || (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a||b.x, a||b.y, a||b.z);
}

static __host__ __device__ __inline__ ushort3 operator || (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x||b, a.y||b, a.z||b);
}

static __host__ __device__ __inline__ ushort4 operator || (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x||b.x, a.y||b.y, a.z||b.z, a.w||b.w);
}

static __host__ __device__ __inline__ ushort4 operator || (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a||b.x, a||b.y, a||b.z, a||b.w);
}

static __host__ __device__ __inline__ ushort4 operator || (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x||b, a.y||b, a.z||b, a.w||b);
}

static __host__ __device__ __inline__ int2 operator || (const int2 & a, const int2 & b)
{
    return make_int2(a.x||b.x, a.y||b.y);
}

static __host__ __device__ __inline__ int2 operator || (const int & a, const int2 & b)
{
    return make_int2(a||b.x, a||b.y);
}

static __host__ __device__ __inline__ int2 operator || (const int2 & a, const int & b)
{
    return make_int2(a.x||b, a.y||b);
}

static __host__ __device__ __inline__ int3 operator || (const int3 & a, const int3 & b)
{
    return make_int3(a.x||b.x, a.y||b.y, a.z||b.z);
}

static __host__ __device__ __inline__ int3 operator || (const int & a, const int3 & b)
{
    return make_int3(a||b.x, a||b.y, a||b.z);
}

static __host__ __device__ __inline__ int3 operator || (const int3 & a, const int & b)
{
    return make_int3(a.x||b, a.y||b, a.z||b);
}

static __host__ __device__ __inline__ int4 operator || (const int4 & a, const int4 & b)
{
    return make_int4(a.x||b.x, a.y||b.y, a.z||b.z, a.w||b.w);
}

static __host__ __device__ __inline__ int4 operator || (const int & a, const int4 & b)
{
    return make_int4(a||b.x, a||b.y, a||b.z, a||b.w);
}

static __host__ __device__ __inline__ int4 operator || (const int4 & a, const int & b)
{
    return make_int4(a.x||b, a.y||b, a.z||b, a.w||b);
}

static __host__ __device__ __inline__ uint2 operator || (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x||b.x, a.y||b.y);
}

static __host__ __device__ __inline__ uint2 operator || (const uint & a, const uint2 & b)
{
    return make_uint2(a||b.x, a||b.y);
}

static __host__ __device__ __inline__ uint2 operator || (const uint2 & a, const uint & b)
{
    return make_uint2(a.x||b, a.y||b);
}

static __host__ __device__ __inline__ uint3 operator || (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x||b.x, a.y||b.y, a.z||b.z);
}

static __host__ __device__ __inline__ uint3 operator || (const uint & a, const uint3 & b)
{
    return make_uint3(a||b.x, a||b.y, a||b.z);
}

static __host__ __device__ __inline__ uint3 operator || (const uint3 & a, const uint & b)
{
    return make_uint3(a.x||b, a.y||b, a.z||b);
}

static __host__ __device__ __inline__ uint4 operator || (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x||b.x, a.y||b.y, a.z||b.z, a.w||b.w);
}

static __host__ __device__ __inline__ uint4 operator || (const uint & a, const uint4 & b)
{
    return make_uint4(a||b.x, a||b.y, a||b.z, a||b.w);
}

static __host__ __device__ __inline__ uint4 operator || (const uint4 & a, const uint & b)
{
    return make_uint4(a.x||b, a.y||b, a.z||b, a.w||b);
}

static __host__ __device__ __inline__ long2 operator || (const long2 & a, const long2 & b)
{
    return make_long2(a.x||b.x, a.y||b.y);
}

static __host__ __device__ __inline__ long2 operator || (const long & a, const long2 & b)
{
    return make_long2(a||b.x, a||b.y);
}

static __host__ __device__ __inline__ long2 operator || (const long2 & a, const long & b)
{
    return make_long2(a.x||b, a.y||b);
}

static __host__ __device__ __inline__ long3 operator || (const long3 & a, const long3 & b)
{
    return make_long3(a.x||b.x, a.y||b.y, a.z||b.z);
}

static __host__ __device__ __inline__ long3 operator || (const long & a, const long3 & b)
{
    return make_long3(a||b.x, a||b.y, a||b.z);
}

static __host__ __device__ __inline__ long3 operator || (const long3 & a, const long & b)
{
    return make_long3(a.x||b, a.y||b, a.z||b);
}

static __host__ __device__ __inline__ long4 operator || (const long4 & a, const long4 & b)
{
    return make_long4(a.x||b.x, a.y||b.y, a.z||b.z, a.w||b.w);
}

static __host__ __device__ __inline__ long4 operator || (const long & a, const long4 & b)
{
    return make_long4(a||b.x, a||b.y, a||b.z, a||b.w);
}

static __host__ __device__ __inline__ long4 operator || (const long4 & a, const long & b)
{
    return make_long4(a.x||b, a.y||b, a.z||b, a.w||b);
}

static __host__ __device__ __inline__ ulong2 operator || (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x||b.x, a.y||b.y);
}

static __host__ __device__ __inline__ ulong2 operator || (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a||b.x, a||b.y);
}

static __host__ __device__ __inline__ ulong2 operator || (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x||b, a.y||b);
}

static __host__ __device__ __inline__ ulong3 operator || (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x||b.x, a.y||b.y, a.z||b.z);
}

static __host__ __device__ __inline__ ulong3 operator || (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a||b.x, a||b.y, a||b.z);
}

static __host__ __device__ __inline__ ulong3 operator || (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x||b, a.y||b, a.z||b);
}

static __host__ __device__ __inline__ ulong4 operator || (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x||b.x, a.y||b.y, a.z||b.z, a.w||b.w);
}

static __host__ __device__ __inline__ ulong4 operator || (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a||b.x, a||b.y, a||b.z, a||b.w);
}

static __host__ __device__ __inline__ ulong4 operator || (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x||b, a.y||b, a.z||b, a.w||b);
}

static __host__ __device__ __inline__ char2 operator == (const char2 & a, const char2 & b)
{
    return make_char2(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator == (const char & a, const char2 & b)
{
    return make_char2(a==b.x ? -1 : 0, a==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator == (const char2 & a, const char & b)
{
    return make_char2(a.x==b ? -1 : 0, a.y==b ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator == (const char3 & a, const char3 & b)
{
    return make_char3(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator == (const char & a, const char3 & b)
{
    return make_char3(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator == (const char3 & a, const char & b)
{
    return make_char3(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator == (const char4 & a, const char4 & b)
{
    return make_char4(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0, a.w==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator == (const char & a, const char4 & b)
{
    return make_char4(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0, a==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator == (const char4 & a, const char & b)
{
    return make_char4(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0, a.w==b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator == (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator == (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a==b.x ? -1 : 0, a==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator == (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x==b ? -1 : 0, a.y==b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator == (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator == (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator == (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator == (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0, a.w==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator == (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0, a==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator == (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0, a.w==b ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator == (const short2 & a, const short2 & b)
{
    return make_short2(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator == (const short & a, const short2 & b)
{
    return make_short2(a==b.x ? -1 : 0, a==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator == (const short2 & a, const short & b)
{
    return make_short2(a.x==b ? -1 : 0, a.y==b ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator == (const short3 & a, const short3 & b)
{
    return make_short3(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator == (const short & a, const short3 & b)
{
    return make_short3(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator == (const short3 & a, const short & b)
{
    return make_short3(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator == (const short4 & a, const short4 & b)
{
    return make_short4(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0, a.w==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator == (const short & a, const short4 & b)
{
    return make_short4(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0, a==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator == (const short4 & a, const short & b)
{
    return make_short4(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0, a.w==b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator == (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator == (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a==b.x ? -1 : 0, a==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator == (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x==b ? -1 : 0, a.y==b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator == (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator == (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator == (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator == (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0, a.w==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator == (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0, a==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator == (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0, a.w==b ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator == (const int2 & a, const int2 & b)
{
    return make_int2(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator == (const int & a, const int2 & b)
{
    return make_int2(a==b.x ? -1 : 0, a==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator == (const int2 & a, const int & b)
{
    return make_int2(a.x==b ? -1 : 0, a.y==b ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator == (const int3 & a, const int3 & b)
{
    return make_int3(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator == (const int & a, const int3 & b)
{
    return make_int3(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator == (const int3 & a, const int & b)
{
    return make_int3(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator == (const int4 & a, const int4 & b)
{
    return make_int4(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0, a.w==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator == (const int & a, const int4 & b)
{
    return make_int4(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0, a==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator == (const int4 & a, const int & b)
{
    return make_int4(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0, a.w==b ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator == (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator == (const uint & a, const uint2 & b)
{
    return make_uint2(a==b.x ? -1 : 0, a==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator == (const uint2 & a, const uint & b)
{
    return make_uint2(a.x==b ? -1 : 0, a.y==b ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator == (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator == (const uint & a, const uint3 & b)
{
    return make_uint3(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator == (const uint3 & a, const uint & b)
{
    return make_uint3(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator == (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0, a.w==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator == (const uint & a, const uint4 & b)
{
    return make_uint4(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0, a==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator == (const uint4 & a, const uint & b)
{
    return make_uint4(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0, a.w==b ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator == (const long2 & a, const long2 & b)
{
    return make_long2(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator == (const long & a, const long2 & b)
{
    return make_long2(a==b.x ? -1 : 0, a==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator == (const long2 & a, const long & b)
{
    return make_long2(a.x==b ? -1 : 0, a.y==b ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator == (const long3 & a, const long3 & b)
{
    return make_long3(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator == (const long & a, const long3 & b)
{
    return make_long3(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator == (const long3 & a, const long & b)
{
    return make_long3(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator == (const long4 & a, const long4 & b)
{
    return make_long4(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0, a.w==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator == (const long & a, const long4 & b)
{
    return make_long4(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0, a==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator == (const long4 & a, const long & b)
{
    return make_long4(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0, a.w==b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator == (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator == (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a==b.x ? -1 : 0, a==b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator == (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x==b ? -1 : 0, a.y==b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator == (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator == (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator == (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator == (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x==b.x ? -1 : 0, a.y==b.y ? -1 : 0, a.z==b.z ? -1 : 0, a.w==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator == (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a==b.x ? -1 : 0, a==b.y ? -1 : 0, a==b.z ? -1 : 0, a==b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator == (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x==b ? -1 : 0, a.y==b ? -1 : 0, a.z==b ? -1 : 0, a.w==b ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator != (const char2 & a, const char2 & b)
{
    return make_char2(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator != (const char & a, const char2 & b)
{
    return make_char2(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator != (const char2 & a, const char & b)
{
    return make_char2(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator != (const char3 & a, const char3 & b)
{
    return make_char3(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator != (const char & a, const char3 & b)
{
    return make_char3(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator != (const char3 & a, const char & b)
{
    return make_char3(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator != (const char4 & a, const char4 & b)
{
    return make_char4(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0, a.w!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator != (const char & a, const char4 & b)
{
    return make_char4(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0, a!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator != (const char4 & a, const char & b)
{
    return make_char4(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0, a.w!=b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator != (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator != (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator != (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator != (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator != (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator != (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator != (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0, a.w!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator != (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0, a!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator != (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0, a.w!=b ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator != (const short2 & a, const short2 & b)
{
    return make_short2(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator != (const short & a, const short2 & b)
{
    return make_short2(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator != (const short2 & a, const short & b)
{
    return make_short2(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator != (const short3 & a, const short3 & b)
{
    return make_short3(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator != (const short & a, const short3 & b)
{
    return make_short3(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator != (const short3 & a, const short & b)
{
    return make_short3(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator != (const short4 & a, const short4 & b)
{
    return make_short4(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0, a.w!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator != (const short & a, const short4 & b)
{
    return make_short4(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0, a!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator != (const short4 & a, const short & b)
{
    return make_short4(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0, a.w!=b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator != (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator != (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator != (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator != (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator != (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator != (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator != (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0, a.w!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator != (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0, a!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator != (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0, a.w!=b ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator != (const int2 & a, const int2 & b)
{
    return make_int2(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator != (const int & a, const int2 & b)
{
    return make_int2(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator != (const int2 & a, const int & b)
{
    return make_int2(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator != (const int3 & a, const int3 & b)
{
    return make_int3(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator != (const int & a, const int3 & b)
{
    return make_int3(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator != (const int3 & a, const int & b)
{
    return make_int3(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator != (const int4 & a, const int4 & b)
{
    return make_int4(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0, a.w!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator != (const int & a, const int4 & b)
{
    return make_int4(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0, a!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator != (const int4 & a, const int & b)
{
    return make_int4(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0, a.w!=b ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator != (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator != (const uint & a, const uint2 & b)
{
    return make_uint2(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator != (const uint2 & a, const uint & b)
{
    return make_uint2(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator != (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator != (const uint & a, const uint3 & b)
{
    return make_uint3(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator != (const uint3 & a, const uint & b)
{
    return make_uint3(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator != (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0, a.w!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator != (const uint & a, const uint4 & b)
{
    return make_uint4(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0, a!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator != (const uint4 & a, const uint & b)
{
    return make_uint4(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0, a.w!=b ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator != (const long2 & a, const long2 & b)
{
    return make_long2(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator != (const long & a, const long2 & b)
{
    return make_long2(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator != (const long2 & a, const long & b)
{
    return make_long2(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator != (const long3 & a, const long3 & b)
{
    return make_long3(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator != (const long & a, const long3 & b)
{
    return make_long3(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator != (const long3 & a, const long & b)
{
    return make_long3(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator != (const long4 & a, const long4 & b)
{
    return make_long4(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0, a.w!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator != (const long & a, const long4 & b)
{
    return make_long4(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0, a!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator != (const long4 & a, const long & b)
{
    return make_long4(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0, a.w!=b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator != (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator != (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator != (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator != (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator != (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator != (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator != (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x!=b.x ? -1 : 0, a.y!=b.y ? -1 : 0, a.z!=b.z ? -1 : 0, a.w!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator != (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a!=b.x ? -1 : 0, a!=b.y ? -1 : 0, a!=b.z ? -1 : 0, a!=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator != (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x!=b ? -1 : 0, a.y!=b ? -1 : 0, a.z!=b ? -1 : 0, a.w!=b ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator > (const char2 & a, const char2 & b)
{
    return make_char2(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator > (const char & a, const char2 & b)
{
    return make_char2(a>b.x ? -1 : 0, a>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator > (const char2 & a, const char & b)
{
    return make_char2(a.x>b ? -1 : 0, a.y>b ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator > (const char3 & a, const char3 & b)
{
    return make_char3(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator > (const char & a, const char3 & b)
{
    return make_char3(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator > (const char3 & a, const char & b)
{
    return make_char3(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator > (const char4 & a, const char4 & b)
{
    return make_char4(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0, a.w>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator > (const char & a, const char4 & b)
{
    return make_char4(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0, a>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator > (const char4 & a, const char & b)
{
    return make_char4(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0, a.w>b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator > (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator > (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a>b.x ? -1 : 0, a>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator > (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x>b ? -1 : 0, a.y>b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator > (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator > (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator > (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator > (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0, a.w>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator > (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0, a>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator > (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0, a.w>b ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator > (const short2 & a, const short2 & b)
{
    return make_short2(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator > (const short & a, const short2 & b)
{
    return make_short2(a>b.x ? -1 : 0, a>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator > (const short2 & a, const short & b)
{
    return make_short2(a.x>b ? -1 : 0, a.y>b ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator > (const short3 & a, const short3 & b)
{
    return make_short3(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator > (const short & a, const short3 & b)
{
    return make_short3(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator > (const short3 & a, const short & b)
{
    return make_short3(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator > (const short4 & a, const short4 & b)
{
    return make_short4(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0, a.w>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator > (const short & a, const short4 & b)
{
    return make_short4(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0, a>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator > (const short4 & a, const short & b)
{
    return make_short4(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0, a.w>b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator > (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator > (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a>b.x ? -1 : 0, a>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator > (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x>b ? -1 : 0, a.y>b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator > (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator > (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator > (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator > (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0, a.w>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator > (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0, a>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator > (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0, a.w>b ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator > (const int2 & a, const int2 & b)
{
    return make_int2(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator > (const int & a, const int2 & b)
{
    return make_int2(a>b.x ? -1 : 0, a>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator > (const int2 & a, const int & b)
{
    return make_int2(a.x>b ? -1 : 0, a.y>b ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator > (const int3 & a, const int3 & b)
{
    return make_int3(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator > (const int & a, const int3 & b)
{
    return make_int3(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator > (const int3 & a, const int & b)
{
    return make_int3(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator > (const int4 & a, const int4 & b)
{
    return make_int4(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0, a.w>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator > (const int & a, const int4 & b)
{
    return make_int4(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0, a>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator > (const int4 & a, const int & b)
{
    return make_int4(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0, a.w>b ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator > (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator > (const uint & a, const uint2 & b)
{
    return make_uint2(a>b.x ? -1 : 0, a>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator > (const uint2 & a, const uint & b)
{
    return make_uint2(a.x>b ? -1 : 0, a.y>b ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator > (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator > (const uint & a, const uint3 & b)
{
    return make_uint3(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator > (const uint3 & a, const uint & b)
{
    return make_uint3(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator > (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0, a.w>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator > (const uint & a, const uint4 & b)
{
    return make_uint4(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0, a>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator > (const uint4 & a, const uint & b)
{
    return make_uint4(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0, a.w>b ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator > (const long2 & a, const long2 & b)
{
    return make_long2(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator > (const long & a, const long2 & b)
{
    return make_long2(a>b.x ? -1 : 0, a>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator > (const long2 & a, const long & b)
{
    return make_long2(a.x>b ? -1 : 0, a.y>b ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator > (const long3 & a, const long3 & b)
{
    return make_long3(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator > (const long & a, const long3 & b)
{
    return make_long3(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator > (const long3 & a, const long & b)
{
    return make_long3(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator > (const long4 & a, const long4 & b)
{
    return make_long4(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0, a.w>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator > (const long & a, const long4 & b)
{
    return make_long4(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0, a>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator > (const long4 & a, const long & b)
{
    return make_long4(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0, a.w>b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator > (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator > (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a>b.x ? -1 : 0, a>b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator > (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x>b ? -1 : 0, a.y>b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator > (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator > (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator > (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator > (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x>b.x ? -1 : 0, a.y>b.y ? -1 : 0, a.z>b.z ? -1 : 0, a.w>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator > (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a>b.x ? -1 : 0, a>b.y ? -1 : 0, a>b.z ? -1 : 0, a>b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator > (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x>b ? -1 : 0, a.y>b ? -1 : 0, a.z>b ? -1 : 0, a.w>b ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator < (const char2 & a, const char2 & b)
{
    return make_char2(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator < (const char & a, const char2 & b)
{
    return make_char2(a<b.x ? -1 : 0, a<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator < (const char2 & a, const char & b)
{
    return make_char2(a.x<b ? -1 : 0, a.y<b ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator < (const char3 & a, const char3 & b)
{
    return make_char3(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator < (const char & a, const char3 & b)
{
    return make_char3(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator < (const char3 & a, const char & b)
{
    return make_char3(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator < (const char4 & a, const char4 & b)
{
    return make_char4(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0, a.w<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator < (const char & a, const char4 & b)
{
    return make_char4(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0, a<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator < (const char4 & a, const char & b)
{
    return make_char4(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0, a.w<b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator < (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator < (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a<b.x ? -1 : 0, a<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator < (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x<b ? -1 : 0, a.y<b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator < (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator < (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator < (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator < (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0, a.w<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator < (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0, a<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator < (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0, a.w<b ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator < (const short2 & a, const short2 & b)
{
    return make_short2(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator < (const short & a, const short2 & b)
{
    return make_short2(a<b.x ? -1 : 0, a<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator < (const short2 & a, const short & b)
{
    return make_short2(a.x<b ? -1 : 0, a.y<b ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator < (const short3 & a, const short3 & b)
{
    return make_short3(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator < (const short & a, const short3 & b)
{
    return make_short3(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator < (const short3 & a, const short & b)
{
    return make_short3(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator < (const short4 & a, const short4 & b)
{
    return make_short4(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0, a.w<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator < (const short & a, const short4 & b)
{
    return make_short4(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0, a<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator < (const short4 & a, const short & b)
{
    return make_short4(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0, a.w<b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator < (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator < (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a<b.x ? -1 : 0, a<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator < (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x<b ? -1 : 0, a.y<b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator < (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator < (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator < (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator < (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0, a.w<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator < (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0, a<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator < (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0, a.w<b ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator < (const int2 & a, const int2 & b)
{
    return make_int2(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator < (const int & a, const int2 & b)
{
    return make_int2(a<b.x ? -1 : 0, a<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator < (const int2 & a, const int & b)
{
    return make_int2(a.x<b ? -1 : 0, a.y<b ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator < (const int3 & a, const int3 & b)
{
    return make_int3(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator < (const int & a, const int3 & b)
{
    return make_int3(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator < (const int3 & a, const int & b)
{
    return make_int3(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator < (const int4 & a, const int4 & b)
{
    return make_int4(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0, a.w<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator < (const int & a, const int4 & b)
{
    return make_int4(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0, a<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator < (const int4 & a, const int & b)
{
    return make_int4(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0, a.w<b ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator < (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator < (const uint & a, const uint2 & b)
{
    return make_uint2(a<b.x ? -1 : 0, a<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator < (const uint2 & a, const uint & b)
{
    return make_uint2(a.x<b ? -1 : 0, a.y<b ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator < (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator < (const uint & a, const uint3 & b)
{
    return make_uint3(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator < (const uint3 & a, const uint & b)
{
    return make_uint3(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator < (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0, a.w<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator < (const uint & a, const uint4 & b)
{
    return make_uint4(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0, a<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator < (const uint4 & a, const uint & b)
{
    return make_uint4(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0, a.w<b ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator < (const long2 & a, const long2 & b)
{
    return make_long2(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator < (const long & a, const long2 & b)
{
    return make_long2(a<b.x ? -1 : 0, a<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator < (const long2 & a, const long & b)
{
    return make_long2(a.x<b ? -1 : 0, a.y<b ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator < (const long3 & a, const long3 & b)
{
    return make_long3(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator < (const long & a, const long3 & b)
{
    return make_long3(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator < (const long3 & a, const long & b)
{
    return make_long3(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator < (const long4 & a, const long4 & b)
{
    return make_long4(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0, a.w<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator < (const long & a, const long4 & b)
{
    return make_long4(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0, a<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator < (const long4 & a, const long & b)
{
    return make_long4(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0, a.w<b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator < (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator < (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a<b.x ? -1 : 0, a<b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator < (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x<b ? -1 : 0, a.y<b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator < (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator < (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator < (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator < (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x<b.x ? -1 : 0, a.y<b.y ? -1 : 0, a.z<b.z ? -1 : 0, a.w<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator < (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a<b.x ? -1 : 0, a<b.y ? -1 : 0, a<b.z ? -1 : 0, a<b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator < (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x<b ? -1 : 0, a.y<b ? -1 : 0, a.z<b ? -1 : 0, a.w<b ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator >= (const char2 & a, const char2 & b)
{
    return make_char2(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator >= (const char & a, const char2 & b)
{
    return make_char2(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator >= (const char2 & a, const char & b)
{
    return make_char2(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator >= (const char3 & a, const char3 & b)
{
    return make_char3(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator >= (const char & a, const char3 & b)
{
    return make_char3(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator >= (const char3 & a, const char & b)
{
    return make_char3(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator >= (const char4 & a, const char4 & b)
{
    return make_char4(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0, a.w>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator >= (const char & a, const char4 & b)
{
    return make_char4(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0, a>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator >= (const char4 & a, const char & b)
{
    return make_char4(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0, a.w>=b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator >= (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator >= (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator >= (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator >= (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator >= (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator >= (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator >= (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0, a.w>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator >= (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0, a>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator >= (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0, a.w>=b ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator >= (const short2 & a, const short2 & b)
{
    return make_short2(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator >= (const short & a, const short2 & b)
{
    return make_short2(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator >= (const short2 & a, const short & b)
{
    return make_short2(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator >= (const short3 & a, const short3 & b)
{
    return make_short3(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator >= (const short & a, const short3 & b)
{
    return make_short3(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator >= (const short3 & a, const short & b)
{
    return make_short3(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator >= (const short4 & a, const short4 & b)
{
    return make_short4(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0, a.w>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator >= (const short & a, const short4 & b)
{
    return make_short4(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0, a>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator >= (const short4 & a, const short & b)
{
    return make_short4(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0, a.w>=b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator >= (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator >= (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator >= (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator >= (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator >= (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator >= (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator >= (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0, a.w>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator >= (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0, a>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator >= (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0, a.w>=b ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator >= (const int2 & a, const int2 & b)
{
    return make_int2(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator >= (const int & a, const int2 & b)
{
    return make_int2(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator >= (const int2 & a, const int & b)
{
    return make_int2(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator >= (const int3 & a, const int3 & b)
{
    return make_int3(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator >= (const int & a, const int3 & b)
{
    return make_int3(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator >= (const int3 & a, const int & b)
{
    return make_int3(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator >= (const int4 & a, const int4 & b)
{
    return make_int4(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0, a.w>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator >= (const int & a, const int4 & b)
{
    return make_int4(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0, a>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator >= (const int4 & a, const int & b)
{
    return make_int4(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0, a.w>=b ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator >= (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator >= (const uint & a, const uint2 & b)
{
    return make_uint2(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator >= (const uint2 & a, const uint & b)
{
    return make_uint2(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator >= (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator >= (const uint & a, const uint3 & b)
{
    return make_uint3(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator >= (const uint3 & a, const uint & b)
{
    return make_uint3(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator >= (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0, a.w>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator >= (const uint & a, const uint4 & b)
{
    return make_uint4(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0, a>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator >= (const uint4 & a, const uint & b)
{
    return make_uint4(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0, a.w>=b ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator >= (const long2 & a, const long2 & b)
{
    return make_long2(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator >= (const long & a, const long2 & b)
{
    return make_long2(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator >= (const long2 & a, const long & b)
{
    return make_long2(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator >= (const long3 & a, const long3 & b)
{
    return make_long3(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator >= (const long & a, const long3 & b)
{
    return make_long3(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator >= (const long3 & a, const long & b)
{
    return make_long3(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator >= (const long4 & a, const long4 & b)
{
    return make_long4(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0, a.w>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator >= (const long & a, const long4 & b)
{
    return make_long4(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0, a>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator >= (const long4 & a, const long & b)
{
    return make_long4(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0, a.w>=b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator >= (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator >= (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator >= (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator >= (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator >= (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator >= (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator >= (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x>=b.x ? -1 : 0, a.y>=b.y ? -1 : 0, a.z>=b.z ? -1 : 0, a.w>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator >= (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a>=b.x ? -1 : 0, a>=b.y ? -1 : 0, a>=b.z ? -1 : 0, a>=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator >= (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x>=b ? -1 : 0, a.y>=b ? -1 : 0, a.z>=b ? -1 : 0, a.w>=b ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator <= (const char2 & a, const char2 & b)
{
    return make_char2(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator <= (const char & a, const char2 & b)
{
    return make_char2(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ char2 operator <= (const char2 & a, const char & b)
{
    return make_char2(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator <= (const char3 & a, const char3 & b)
{
    return make_char3(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator <= (const char & a, const char3 & b)
{
    return make_char3(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ char3 operator <= (const char3 & a, const char & b)
{
    return make_char3(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator <= (const char4 & a, const char4 & b)
{
    return make_char4(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0, a.w<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator <= (const char & a, const char4 & b)
{
    return make_char4(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0, a<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ char4 operator <= (const char4 & a, const char & b)
{
    return make_char4(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0, a.w<=b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator <= (const uchar2 & a, const uchar2 & b)
{
    return make_uchar2(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator <= (const uchar & a, const uchar2 & b)
{
    return make_uchar2(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uchar2 operator <= (const uchar2 & a, const uchar & b)
{
    return make_uchar2(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator <= (const uchar3 & a, const uchar3 & b)
{
    return make_uchar3(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator <= (const uchar & a, const uchar3 & b)
{
    return make_uchar3(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uchar3 operator <= (const uchar3 & a, const uchar & b)
{
    return make_uchar3(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator <= (const uchar4 & a, const uchar4 & b)
{
    return make_uchar4(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0, a.w<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator <= (const uchar & a, const uchar4 & b)
{
    return make_uchar4(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0, a<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uchar4 operator <= (const uchar4 & a, const uchar & b)
{
    return make_uchar4(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0, a.w<=b ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator <= (const short2 & a, const short2 & b)
{
    return make_short2(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator <= (const short & a, const short2 & b)
{
    return make_short2(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ short2 operator <= (const short2 & a, const short & b)
{
    return make_short2(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator <= (const short3 & a, const short3 & b)
{
    return make_short3(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator <= (const short & a, const short3 & b)
{
    return make_short3(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ short3 operator <= (const short3 & a, const short & b)
{
    return make_short3(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator <= (const short4 & a, const short4 & b)
{
    return make_short4(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0, a.w<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator <= (const short & a, const short4 & b)
{
    return make_short4(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0, a<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ short4 operator <= (const short4 & a, const short & b)
{
    return make_short4(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0, a.w<=b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator <= (const ushort2 & a, const ushort2 & b)
{
    return make_ushort2(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator <= (const ushort & a, const ushort2 & b)
{
    return make_ushort2(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ushort2 operator <= (const ushort2 & a, const ushort & b)
{
    return make_ushort2(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator <= (const ushort3 & a, const ushort3 & b)
{
    return make_ushort3(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator <= (const ushort & a, const ushort3 & b)
{
    return make_ushort3(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ushort3 operator <= (const ushort3 & a, const ushort & b)
{
    return make_ushort3(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator <= (const ushort4 & a, const ushort4 & b)
{
    return make_ushort4(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0, a.w<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator <= (const ushort & a, const ushort4 & b)
{
    return make_ushort4(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0, a<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ushort4 operator <= (const ushort4 & a, const ushort & b)
{
    return make_ushort4(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0, a.w<=b ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator <= (const int2 & a, const int2 & b)
{
    return make_int2(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator <= (const int & a, const int2 & b)
{
    return make_int2(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ int2 operator <= (const int2 & a, const int & b)
{
    return make_int2(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator <= (const int3 & a, const int3 & b)
{
    return make_int3(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator <= (const int & a, const int3 & b)
{
    return make_int3(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ int3 operator <= (const int3 & a, const int & b)
{
    return make_int3(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator <= (const int4 & a, const int4 & b)
{
    return make_int4(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0, a.w<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator <= (const int & a, const int4 & b)
{
    return make_int4(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0, a<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ int4 operator <= (const int4 & a, const int & b)
{
    return make_int4(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0, a.w<=b ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator <= (const uint2 & a, const uint2 & b)
{
    return make_uint2(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator <= (const uint & a, const uint2 & b)
{
    return make_uint2(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ uint2 operator <= (const uint2 & a, const uint & b)
{
    return make_uint2(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator <= (const uint3 & a, const uint3 & b)
{
    return make_uint3(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator <= (const uint & a, const uint3 & b)
{
    return make_uint3(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ uint3 operator <= (const uint3 & a, const uint & b)
{
    return make_uint3(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator <= (const uint4 & a, const uint4 & b)
{
    return make_uint4(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0, a.w<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator <= (const uint & a, const uint4 & b)
{
    return make_uint4(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0, a<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ uint4 operator <= (const uint4 & a, const uint & b)
{
    return make_uint4(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0, a.w<=b ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator <= (const long2 & a, const long2 & b)
{
    return make_long2(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator <= (const long & a, const long2 & b)
{
    return make_long2(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ long2 operator <= (const long2 & a, const long & b)
{
    return make_long2(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator <= (const long3 & a, const long3 & b)
{
    return make_long3(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator <= (const long & a, const long3 & b)
{
    return make_long3(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ long3 operator <= (const long3 & a, const long & b)
{
    return make_long3(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator <= (const long4 & a, const long4 & b)
{
    return make_long4(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0, a.w<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator <= (const long & a, const long4 & b)
{
    return make_long4(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0, a<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ long4 operator <= (const long4 & a, const long & b)
{
    return make_long4(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0, a.w<=b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator <= (const ulong2 & a, const ulong2 & b)
{
    return make_ulong2(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator <= (const ulong & a, const ulong2 & b)
{
    return make_ulong2(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0);
}

static __host__ __device__ __inline__ ulong2 operator <= (const ulong2 & a, const ulong & b)
{
    return make_ulong2(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator <= (const ulong3 & a, const ulong3 & b)
{
    return make_ulong3(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator <= (const ulong & a, const ulong3 & b)
{
    return make_ulong3(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0);
}

static __host__ __device__ __inline__ ulong3 operator <= (const ulong3 & a, const ulong & b)
{
    return make_ulong3(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator <= (const ulong4 & a, const ulong4 & b)
{
    return make_ulong4(a.x<=b.x ? -1 : 0, a.y<=b.y ? -1 : 0, a.z<=b.z ? -1 : 0, a.w<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator <= (const ulong & a, const ulong4 & b)
{
    return make_ulong4(a<=b.x ? -1 : 0, a<=b.y ? -1 : 0, a<=b.z ? -1 : 0, a<=b.w ? -1 : 0);
}

static __host__ __device__ __inline__ ulong4 operator <= (const ulong4 & a, const ulong & b)
{
    return make_ulong4(a.x<=b ? -1 : 0, a.y<=b ? -1 : 0, a.z<=b ? -1 : 0, a.w<=b ? -1 : 0);
}

static __host__ __device__ __inline__ float2 fract(const float2 & a)
{
    return make_float2(fract(a.x), fract(a.y));
}

static __host__ __device__ __inline__ float3 fract(const float3 & a)
{
    return make_float3(fract(a.x), fract(a.y), fract(a.z));
}

static __host__ __device__ __inline__ float4 fract(const float4 & a)
{
    return make_float4(fract(a.x), fract(a.y), fract(a.z), fract(a.w));
}

static __host__ __device__ __inline__ double2 fract(const double2 & a)
{
    return make_double2(fract(a.x), fract(a.y));
}

