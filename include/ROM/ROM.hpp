#pragma once

#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "TypeDef.hpp"

namespace Loader {

    class ROM {

        private:

            BYTE *m_fileContent;
            size_t m_romSize;
            RomType m_romType;

        public:

            ROM();
            ~ROM();

            void Load(std::string const&, RomType type);
            void Unload();

            BYTE const* GetROMContent() const;
            size_t GetROMSize() const;
    };
};