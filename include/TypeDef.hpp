#pragma once

#include <stdint.h>

typedef uint8_t BYTE;
typedef uint16_t DWORD;
typedef uint32_t DWORD32;
typedef uint64_t DWORD64;

typedef enum {
    Z80,
    CHIP8
} RomType;

typedef enum {
    TARGET,
    HOST
} SizeType;