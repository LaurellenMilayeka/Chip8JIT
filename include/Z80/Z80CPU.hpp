#pragma once

#include <map>

#include "CPU.hpp"
#include "TypeDef.hpp"

namespace System {

    class Z80CPU : public CPU {

        typedef int (Z80CPU::*OpCodeFunction)(void *, bool, SizeType);

        private:

            std::map<BYTE, OpCodeFunction> m_opCodes;

        public:

            Z80CPU();
            virtual ~Z80CPU();

            int NOP0x00(void *, bool, SizeType);
            int LD0x01(void *, bool, SizeType);
            int LD0x02(void *, bool, SizeType);
            int INC0x03(void *, bool, SizeType);
            int INC0x04(void *, bool, SizeType);
            int DEC0x05(void *, bool, SizeType);
            int LD0x06(void *, bool, SizeType);
            int RLCA0x07(void *, bool, SizeType);
            int LD0x08(void *, bool, SizeType);
            int ADD0x09(void *, bool, SizeType);
            int LD0x0A(void *, bool, SizeType);
            int DEC0x0B(void *, bool, SizeType);
            int INC0x0C(void *, bool, SizeType);
            int DEC0x0D(void *, bool, SizeType);
            int LD0x0E(void *, bool, SizeType);
            int RRCA(void *, bool, SizeType);

            int STOP0x10(void *, bool, SizeType);
            int LD0x11(void *, bool, SizeType);
            int LD0x12(void *, bool, SizeType);
            int INC0x13(void *, bool, SizeType);
            int INC0x14(void *, bool, SizeType);
            int DEC0x15(void *, bool, SizeType);
            int LD0x16(void *, bool, SizeType);
            int RLA0x17(void *, bool, SizeType);
            int JR0x18(void *, bool, SizeType);
            int ADD0x19(void *, bool, SizeType);
            int LD0x1A(void *, bool, SizeType);
            int DEC0x1B(void *, bool, SizeType);
            int INC0x1C(void *, bool, SizeType);
            int DEC0x1D(void *, bool, SizeType);
            int LD0x1E(void *, bool, SizeType);
            int RRA0x1F(void *, bool, SizeType);

            int JR0x20(void *, bool, SizeType);
            int LD0x21(void *, bool, SizeType);
            int LD0x22(void *, bool, SizeType);
            int INC0x23(void *, bool, SizeType);
            int INC0x24(void *, bool, SizeType);
            int DEC0x25(void *, bool, SizeType);
            int LD0x26(void *, bool, SizeType);
            int DAA0x27(void *, bool, SizeType);
            int JR0x28(void *, bool, SizeType);
            int ADD0x29(void *, bool, SizeType);
            int LD0x2A(void *, bool, SizeType);
            int DEC0x2B(void *, bool, SizeType);
            int INC0x2C(void *, bool, SizeType);
            int DEC0x2D(void *, bool, SizeType);
            int LD0x2E(void *, bool, SizeType);
            int CPL0x2F(void *, bool, SizeType);

            int JR0x30(void *, bool, SizeType);
            int LD0x31(void *, bool, SizeType);
            int LD0x32(void *, bool, SizeType);
            int INC0x33(void *, bool, SizeType);
            int INC0x34(void *, bool, SizeType);
            int DEC0x35(void *, bool, SizeType);
            int LD0x36(void *, bool, SizeType);
            int SCF0x37(void *, bool, SizeType);
            int JR0x38(void *, bool, SizeType);
            int ADD0x39(void *, bool, SizeType);
            int LD0x3A(void *, bool, SizeType);
            int DEC0x3B(void *, bool, SizeType);
            int INC0x3C(void *, bool, SizeType);
            int DEC0x3D(void *, bool, SizeType);
            int LD0x3E(void *, bool, SizeType);
            int CCF0x3F(void *, bool, SizeType);

            int LD0x40(void *, bool, SizeType);
            int LD0x41(void *, bool, SizeType);
            int LD0x42(void *, bool, SizeType);
            int LD0x43(void *, bool, SizeType);
            int LD0x44(void *, bool, SizeType);
            int LD0x45(void *, bool, SizeType);
            int LD0x46(void *, bool, SizeType);
            int LD0x47(void *, bool, SizeType);
            int LD0x48(void *, bool, SizeType);
            int LD0x49(void *, bool, SizeType);
            int LD0x4A(void *, bool, SizeType);
            int LD0x4B(void *, bool, SizeType);
            int LD0x4C(void *, bool, SizeType);
            int LD0x4D(void *, bool, SizeType);
            int LD0x4E(void *, bool, SizeType);
            int LD0x4F(void *, bool, SizeType);

            int LD0x50(void *, bool, SizeType);
            int LD0x51(void *, bool, SizeType);
            int LD0x52(void *, bool, SizeType);
            int LD0x53(void *, bool, SizeType);
            int LD0x54(void *, bool, SizeType);
            int LD0x55(void *, bool, SizeType);
            int LD0x56(void *, bool, SizeType);
            int LD0x57(void *, bool, SizeType);
            int LD0x58(void *, bool, SizeType);
            int LD0x59(void *, bool, SizeType);
            int LD0x5A(void *, bool, SizeType);
            int LD0x5B(void *, bool, SizeType);
            int LD0x5C(void *, bool, SizeType);
            int LD0x5D(void *, bool, SizeType);
            int LD0x5E(void *, bool, SizeType);
            int LD0x5F(void *, bool, SizeType);

            int LD0x60(void *, bool, SizeType);
            int LD0x61(void *, bool, SizeType);
            int LD0x62(void *, bool, SizeType);
            int LD0x63(void *, bool, SizeType);
            int LD0x64(void *, bool, SizeType);
            int LD0x65(void *, bool, SizeType);
            int LD0x66(void *, bool, SizeType);
            int LD0x67(void *, bool, SizeType);
            int LD0x68(void *, bool, SizeType);
            int LD0x69(void *, bool, SizeType);
            int LD0x6A(void *, bool, SizeType);
            int LD0x6B(void *, bool, SizeType);
            int LD0x6C(void *, bool, SizeType);
            int LD0x6D(void *, bool, SizeType);
            int LD0x6E(void *, bool, SizeType);
            int LD0x6F(void *, bool, SizeType);

            int LD0x70(void *, bool, SizeType);
            int LD0x71(void *, bool, SizeType);
            int LD0x72(void *, bool, SizeType);
            int LD0x73(void *, bool, SizeType);
            int LD0x74(void *, bool, SizeType);
            int LD0x75(void *, bool, SizeType);
            int HALT0x76(void *, bool, SizeType);
            int LD0x77(void *, bool, SizeType);
            int LD0x78(void *, bool, SizeType);
            int LD0x79(void *, bool, SizeType);
            int LD0x7A(void *, bool, SizeType);
            int LD0x7B(void *, bool, SizeType);
            int LD0x7C(void *, bool, SizeType);
            int LD0x7D(void *, bool, SizeType);
            int LD0x7E(void *, bool, SizeType);
            int LD0x7F(void *, bool, SizeType);

            int ADD0x80(void *, bool, SizeType);
            int ADD0x81(void *, bool, SizeType);
            int ADD0x82(void *, bool, SizeType);
            int ADD0x83(void *, bool, SizeType);
            int ADD0x84(void *, bool, SizeType);
            int ADD0x85(void *, bool, SizeType);
            int ADD0x86(void *, bool, SizeType);
            int ADD0x87(void *, bool, SizeType);
            int ADC0x88(void *, bool, SizeType);
            int ADC0x89(void *, bool, SizeType);
            int ADC0x8A(void *, bool, SizeType);
            int ADC0x8B(void *, bool, SizeType);
            int ADC0x8C(void *, bool, SizeType);
            int ADC0x8D(void *, bool, SizeType);
            int ADC0x8E(void *, bool, SizeType);
            int ADC0x8F(void *, bool, SizeType);

            int SUB0x90(void *, bool, SizeType);
            int SUB0x91(void *, bool, SizeType);
            int SUB0x92(void *, bool, SizeType);
            int SUB0x93(void *, bool, SizeType);
            int SUB0x94(void *, bool, SizeType);
            int SUB0x95(void *, bool, SizeType);
            int SUB0x96(void *, bool, SizeType);
            int SUB0x97(void *, bool, SizeType);
            int SBC0x98(void *, bool, SizeType);
            int SBC0x99(void *, bool, SizeType);
            int SBC0x9A(void *, bool, SizeType);
            int SBC0x9B(void *, bool, SizeType);
            int SBC0x9C(void *, bool, SizeType);
            int SBC0x9D(void *, bool, SizeType);
            int SBC0x9E(void *, bool, SizeType);
            int SBC0x9F(void *, bool, SizeType);

            int AND0xA0(void *, bool, SizeType);
            int AND0xA1(void *, bool, SizeType);
            int AND0xA2(void *, bool, SizeType);
            int AND0xA3(void *, bool, SizeType);
            int AND0xA4(void *, bool, SizeType);
            int AND0xA5(void *, bool, SizeType);
            int AND0xA6(void *, bool, SizeType);
            int AND0xA7(void *, bool, SizeType);
            int XOR0xA8(void *, bool, SizeType);
            int XOR0xA9(void *, bool, SizeType);
            int XOR0xAA(void *, bool, SizeType);
            int XOR0xAB(void *, bool, SizeType);
            int XOR0xAC(void *, bool, SizeType);
            int XOR0xAD(void *, bool, SizeType);
            int XOR0xAE(void *, bool, SizeType);
            int XOR0xAF(void *, bool, SizeType);

            int OR0xB0(void *, bool, SizeType);
            int OR0xB1(void *, bool, SizeType);
            int OR0xB2(void *, bool, SizeType);
            int OR0xB3(void *, bool, SizeType);
            int OR0xB4(void *, bool, SizeType);
            int OR0xB5(void *, bool, SizeType);
            int OR0xB6(void *, bool, SizeType);
            int OR0xB7(void *, bool, SizeType);
            int CP0xB8(void *, bool, SizeType);
            int CP0xB9(void *, bool, SizeType);
            int CP0xBA(void *, bool, SizeType);
            int CP0xBB(void *, bool, SizeType);
            int CP0xBC(void *, bool, SizeType);
            int CP0xBD(void *, bool, SizeType);
            int CP0xBE(void *, bool, SizeType);
            int CP0xBF(void *, bool, SizeType);

            int RET0xC0(void *, bool, SizeType);
            int POP0xC1(void *, bool, SizeType);
            int JP0xC2(void *, bool, SizeType);
            int JP0xC3(void *, bool, SizeType);
            int CALL0xC4(void *, bool, SizeType);
            int PUSH0xC5(void *, bool, SizeType);
            int ADD0xC6(void *, bool, SizeType);
            int RST0xC7(void *, bool, SizeType);
            int RET0xC8(void *, bool, SizeType);
            int RET0xC9(void *, bool, SizeType);
            int JP0xCA(void *, bool, SizeType);
            int PREFIX0xCB(void *, bool, SizeType);
            int CALL0xCC(void *, bool, SizeType);
            int CALL0xCD(void *, bool, SizeType);
            int ADC0xCE(void *, bool, SizeType);
            int RST0xCF(void *, bool, SizeType);

            int RET0xD0(void *, bool, SizeType);
            int POP0xD1(void *, bool, SizeType);
            int JP0xD2(void *, bool, SizeType);
            int NONE0xD3(void *, bool, SizeType);
            int CALL0xD4(void *, bool, SizeType);
            int PUSH0xD5(void *, bool, SizeType);
            int SUB0xD6(void *, bool, SizeType);
            int RST0xD7(void *, bool, SizeType);
            int RET0xD8(void *, bool, SizeType);
            int RETI0xD9(void *, bool, SizeType);
            int JP0xDA(void *, bool, SizeType);
            int NONE0xDB(void *, bool, SizeType);
            int CALL0xDC(void *, bool, SizeType);
            int NONE0xDD(void *, bool, SizeType);
            int SBC0xDE(void *, bool, SizeType);
            int RST0xDF(void *, bool, SizeType);

            int LDH0xE0(void *, bool, SizeType);
            int POP0xE1(void *, bool, SizeType);
            int LD0xE2(void *, bool, SizeType);
            int NONE0xE3(void *, bool, SizeType);
            int NONE0xE4(void *, bool, SizeType);
            int PUSH0xE5(void *, bool, SizeType);
            int AND0xE6(void *, bool, SizeType);
            int RST0xE7(void *, bool, SizeType);
            int ADD0xE8(void *, bool, SizeType);
            int JP0xE9(void *, bool, SizeType);
            int LD0xEA(void *, bool, SizeType);
            int NONE0xEB(void *, bool, SizeType);
            int NONE0xEC(void *, bool, SizeType);
            int NONE0xED(void *, bool, SizeType);
            int XOR0xEE(void *, bool, SizeType);
            int RST0xEF(void *, bool, SizeType);

            int LDH0xF0(void *, bool, SizeType);
            int POP0xF1(void *, bool, SizeType);
            int LD0xF2(void *, bool, SizeType);
            int DI0xF3(void *, bool, SizeType);
            int NONE0xF4(void *, bool, SizeType);
            int PUSH0xF5(void *, bool, SizeType);
            int OR0xF6(void *, bool, SizeType);
            int RST0xF7(void *, bool, SizeType);
            int LD0xF8(void *, bool, SizeType);
            int LD0xF9(void *, bool, SizeType);
            int LD0xFA(void *, bool, SizeType);
            int EI0xFB(void *, bool, SizeType);
            int NONE0xFC(void *, bool, SizeType);
            int NONE0xFD(void *, bool, SizeType);
            int CP0xFE(void *, bool, SizeType);
            int RST0xFF(void *, bool, SizeType);

    };
};