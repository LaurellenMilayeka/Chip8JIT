#pragma once

#include <map>

#include "TypeDef.hpp"

namespace Recompiler {

    class CacheChunk {

        private:

            BYTE *m_ptr;

            size_t m_targetSize;
            size_t m_hostSize;
            DWORD m_progAddr;
            
            bool m_isValid;

        public:

            CacheChunk();
            CacheChunk(BYTE*);
            ~CacheChunk();

            BYTE const* GetNativeCode() const;

            void SetIsValid(bool);

            bool IsValid();

            void Write8(BYTE);
            void Write16(DWORD);
            void Write32(DWORD32);
            void Write64(DWORD64);
    };

    class CacheMap {

        private:

            std::map<DWORD, CacheChunk> m_CacheMap;

        public:

            CacheMap();
            ~CacheMap();

            CacheChunk const& GetCacheChunk(DWORD) const;
            CacheChunk& GetMostRecentCacheChunk() const;

            bool PCIsPresentInCache(DWORD);
    };
};