#include "ROM/ROM.hpp"

using namespace Loader;

ROM::ROM() {

}

ROM::~ROM() {
    this->m_fileContent = nullptr;
}

void ROM::Load(std::string const& filePath, RomType type) {
    int fd = 0;
    int byteRead = 0;
    struct stat st;

    if (stat(filePath.c_str(), &st) != 0) {
        perror("[ERROR] : Could not retrieve file stats.");
        exit(EXIT_FAILURE);
    }
    if ((fd = open(filePath.c_str(), O_RDONLY)) == -1) {
        perror("[ERROR] : Could not open file.");
        exit(EXIT_FAILURE);
    }
    if ((this->m_fileContent = (BYTE*)malloc(sizeof(BYTE) * st.st_size)) == nullptr) {
        std::cerr << "[ERROR] : Could not allocate buffer." << std::endl;
        close(fd);
    }
    if ((byteRead = read(fd, this->m_fileContent, st.st_size)) != st.st_size) {
        std::cerr << "[ERROR] : Read incomplete. " << byteRead << " bytes read instead of " << st.st_size << "bytes total." << std::endl;
        free(this->m_fileContent);
        close(fd);
        exit(EXIT_FAILURE);
    }
    this->m_romSize = st.st_size;
    this->m_romType = type;
    close(fd);
}

void ROM::Unload() {
    free(this->m_fileContent);
}

BYTE const* ROM::GetROMContent() const {
    return (this->m_fileContent);
}

size_t ROM::GetROMSize() const {
    return (this->m_romSize);
}