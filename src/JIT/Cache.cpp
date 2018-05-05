#include "JIT/Cache.hpp"

using namespace Recompiler;

CacheChunk::CacheChunk() {
    this->m_ptr = nullptr;
    this->m_isValid = true;
}

CacheChunk::~CacheChunk() {
    delete(this->m_ptr);
}

BYTE const* CacheChunk::GetNativeCode() const {
    return (this->m_ptr);
}

void CacheChunk::SetIsValid(bool newValue) {
    this->m_isValid = newValue;
}

bool CacheChunk::IsValid() {
    return (this->m_isValid);
}

void CacheChunk::Write8(BYTE toWrite) {
    this->m_ptr[this->m_progAddr++] = toWrite;
}

CacheMap::CacheMap() {

}

CacheMap::~CacheMap() {

}

CacheChunk const& CacheMap::GetCacheChunk(DWORD addr) const {
    return (this->m_CacheMap.find(addr)->second);
}

bool CacheMap::PCIsPresentInCache(DWORD addr) {
    if (this->m_CacheMap.find(addr) != this->m_CacheMap.end()) {
        return (true);
    }
    return (false);
}