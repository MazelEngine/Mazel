#pragma once

#ifdef MZ_PLATFORM_MACOS
    #ifdef MZ_BUILD_DYLIB
        #define MAZEL_API __attribute__((visibility("default")))
    #endif
#else
    #error Mazel currently only supports MacOS
#endif
