//
// Created by Shuai Liu on 3/17/24.
//

#ifndef CORE_H
#define CORE_H

#define BS_ENABLE_ASSERTS

#ifdef BS_ENABLE_ASSERTS
    #define BS_ASSERT(x, ...) { if(!(x)){ BS_ERROR("Assertion Failed: {0}", __VA_ARGS__); __builtin_trap(); } }
    #define BS_CORE_ASSERT(x, ...) { if(!(x)) { BS_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __builtin_trap(); } }
#else
    #define BS_ASSERT(x, ...)
    #define BS_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#endif //CORE_H