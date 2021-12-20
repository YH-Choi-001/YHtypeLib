#ifndef YHTYPELIB_H
#define YHTYPELIB_H __DATE__ ", " __TIME__

#if defined(ARDUINO)
#include <stdint-gcc.h>
#else // #if !defined(ARDUINO)
#include <stdint.h>
#endif // #if !defined(ARDUINO)

// Since Arduino compiler does not support longed types: long double, long long, unsigned long long.
// Therefore macros are used to switch between C++ standard usage and Arduino usage of this library.
#if defined(ARDUINO)
// this header file is being used in arduino software
#define LARGEST_FLOAT double
#define LARGEST_INT long
#define LARGEST_UINT unsigned long
#define SMALLEST_FLOAT float
#define SMALLEST_INT char
#define SMALLEST_UINT unsigned char
#else // #if !defined(ARDUINO)
// this header file is being used in standard C++ computer software
#define LARGEST_FLOAT long double
#define LARGEST_INT long long
#define LARGEST_UINT unsigned long long
#define SMALLEST_FLOAT float
#define SMALLEST_INT char
#define SMALLEST_UINT unsigned char
#endif // #if !defined(ARDUINO)
namespace YH {
    namespace Lib {
        namespace types {
            typedef LARGEST_FLOAT largest_float;
            typedef LARGEST_INT largest_int;
            typedef LARGEST_UINT largest_uint;
            typedef SMALLEST_FLOAT smallest_float;
            typedef SMALLEST_INT smallest_int;
            typedef SMALLEST_UINT smallest_uint;
        }
    }
}

#endif // #ifndef YHTYPELIB_H