#pragma once

#include <string>
#include <fstream>

#include "CPU.hpp"
#include "ROM/ROM.hpp"
#include "JIT/Cache.hpp"
#include "TypeDef.hpp"

namespace Recompiler {

    class JIT {

        private:

            System::CPU *m_CPU;
            Loader::ROM m_rom;
            static DWORD m_progAddr;
            static CacheMap m_cacheMap;

            size_t GetHostSize();
            size_t GetTargetSize();

            void CheckInvalidatedBlock();

        public:

            JIT(Loader::ROM const&);
            ~JIT();

            void Compile();
            void Execute();

            static void Write8(BYTE);
            static void Write16(DWORD);
            static void Write32(DWORD32);
            static void Write64(DWORD64);

    };
};