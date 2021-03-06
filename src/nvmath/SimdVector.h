// This code is in the public domain -- Ignacio Casta�o <castano@gmail.com>
#pragma once

#include "nvmath.h"
#include "Vector.h" // Vector3, Vector4

#if NV_USE_ALTIVEC
#   include "SimdVector_VE.h"
#endif

#if NV_USE_SSE
#   include "SimdVector_SSE.h"
#endif
