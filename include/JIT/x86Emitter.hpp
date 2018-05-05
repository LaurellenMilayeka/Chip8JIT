#pragma once

#include "TypeDef.hpp"
#include "JIT/Cache.hpp"
#include "JIT/JIT.hpp"


namespace Recompiler {

#define MODREGRM_DISP32 5
#define MODREGRM_SIB 4

    typedef enum {
        al = 0, ax = 0, eax = 0,
        cl = 1, cx = 1, ecx = 1,
        dl = 2, dx = 2, edx = 2,
        bl = 3, bx = 3, ebx = 3,
        ah = 4, sp = 4, esp = 4,
        ch = 5, bp = 5, ebp = 5,
        dh = 6, si = 6, esi = 6,
        bh = 7, di = 7, edi = 7
    } x86Register;

    class x86Emitter {

        private:

        public:

            static void RET();
            

            static BYTE WriteModRegRM(BYTE, x86Register, x86Register);
    };
};