#include "JIT/JIT.hpp"

using namespace Recompiler;
using namespace Loader;

CacheMap JIT::m_cacheMap;
DWORD JIT::m_progAddr = 0x0000;

JIT::JIT(ROM const&) {
    
}

JIT::~JIT() {

}

void JIT::Write8(BYTE toWrite) {
    JIT::m_cacheMap.GetMostRecentCacheChunk().Write8(toWrite);
}

void JIT::Write16(DWORD toWrite) {
    JIT::m_cacheMap.GetMostRecentCacheChunk().Write16(toWrite);
}

void JIT::Write32(DWORD32 toWrite) {
    JIT::m_cacheMap.GetMostRecentCacheChunk().Write32(toWrite);
}

void JIT::Write64(DWORD64 toWrite) {
    JIT::m_cacheMap.GetMostRecentCacheChunk().Write64(toWrite);
}

size_t JIT::GetHostSize() {
    return (0);
}

size_t JIT::GetTargetSize() {
    return (0);
}

void JIT::CheckInvalidatedBlock() {

}

void JIT::Compile() {

}

void JIT::Execute() {
    
}