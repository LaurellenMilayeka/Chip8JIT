#include "Z80/Z80CPU.hpp"

using namespace System;

Z80CPU::Z80CPU() {
    this->m_opCodes.insert(std::pair<BYTE, OpCodeFunction>(0x00, &Z80CPU::NOP0x00));
}

Z80CPU::~Z80CPU() {

}