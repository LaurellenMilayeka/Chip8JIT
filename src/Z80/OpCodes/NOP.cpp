#include "Z80/Z80CPU.hpp"

using namespace System;

int Z80CPU::NOP0x00(void *, bool compile, SizeType type) {
    if (compile) {
        
    }
    if (type == TARGET) {
        return (1);
    }
    return (1);
}