#pragma once

#include <map>

#include "CPU.hpp"
#include "TypeDef.hpp"

namespace System {

    class Chip8CPU : public CPU {

        typedef int (Chip8CPU::*OpCodeFunction)(void *, bool, SizeType);
        
        private:

            std::map<DWORD, OpCodeFunction> m_opCodes;

        public:

            Chip8CPU();
            virtual ~Chip8CPU();

            int CLS0x00E0(void *, bool, SizeType);
            int RET0x00EE(void *, bool, SizeType);
            int SYS0x0000(void *, bool, SizeType);
            int JP0x1000(void *, bool, SizeType);
            int CALL0x2000(void *, bool, SizeType);
            int SE0x3000(void *, bool, SizeType);
            int SNE0x4000(void *, bool, SizeType);
            int SE0x5000(void *, bool, SizeType);
            int LD0x6000(void *, bool, SizeType);
            int ADD0x7000(void *, bool, SizeType);
            int LD0x8000(void *, bool, SizeType);
            int OR0x8001(void *, bool, SizeType);
            int AND0x8002(void *, bool, SizeType);
            int XOR0x8003(void *, bool, SizeType);
            int ADD0x8004(void *, bool, SizeType);
            int SUB0x8005(void *, bool, SizeType);
            int SHR0x8006(void *, bool, SizeType);
            int SUBN0x8007(void *, bool, SizeType);
            int SHL0x800E(void *, bool, SizeType);
            int SNE0x9000(void *, bool, SizeType);
            int LD0xA000(void *, bool, SizeType);
            int JP0xB000(void *, bool, SizeType);
            int RND0xC000(void *, bool, SizeType);
            int DRW0xD000(void *, bool, SizeType);
            int SKP0xE09E(void *, bool, SizeType);
            int SKNP0xE0A1(void *, bool, SizeType);
            int LD0xF007(void *, bool, SizeType);
            int LD0xF00A(void *, bool, SizeType);
            int LD0xF015(void *, bool, SizeType);
            int LD0xF018(void *, bool, SizeType);
            int ADD0xF01E(void *, bool, SizeType);
            int LD0xF029(void *, bool, SizeType);
            int LD0xF033(void *, bool, SizeType);
            int LD0xF055(void *, bool, SizeType);
            int LD0xD065(void *, bool, SizeType);

            int SCD0x00C0(void *, bool, SizeType);
            int SCR0x00FB(void *, bool, SizeType);
            int SCL0x00FC(void *, bool, SizeType);
            int EXIT0x00FD(void *, bool, SizeType);
            int LOW0x0x00FE(void *, bool, SizeType);
            int HIGH0x00FF(void *, bool, SizeType);
            //int DRW0xD000(void *, bool, SizeType);
            int LD0xF030(void *, bool, SizeType);
            int LD0xF075(void *, bool, SizeType);
            int LD0xF085(void *, bool, SizeType);

    };
};