#ifndef FILE_ENCRYPTION_LIBRARY_H
#define FILE_ENCRYPTION_LIBRARY_H

#include <iostream>
#include <fstream>
#include <cryptopp/osrng.h>
#include <cryptopp/aes.h>
#include <cryptopp/modes.h>
#include <cryptopp/filters.h>
#include <cryptopp/files.h>
#include <string>

namespace EncryptionLib{
    const CryptoPP::byte* generate_IV();
    //нет очистки памяти
    void encrypt_file(const std::string& input_file, const std::string& output_file, const CryptoPP::byte* key, const CryptoPP::byte* iv);
    //нет очистки памяти
    void decrypt_file(const std::string& input_file, const std::string& output_file, const CryptoPP::byte* key, const CryptoPP::byte* iv);
}

#endif //FILE_ENCRYPTION_LIBRARY_H
