#include "JIT/x86Emitter.hpp"

using namespace Recompiler;

void x86Emitter::RET() {
    JIT::Write8(0xC3);
}

BYTE x86Emitter::WriteModRegRM(BYTE mod, x86Register reg, x86Register rm) {
    return ((mod << 6) | ((BYTE)reg << 3) | (BYTE)rm);
}