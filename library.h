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
#include <random>
#include <regex>

namespace EncryptionLib{
    const CryptoPP::byte* generate_strong_password();
    const CryptoPP::byte* generate_IV();
    //все ок, есть очистка памяти
    void encrypt_file(const std::string& input_file, const CryptoPP::byte* key, const CryptoPP::byte* iv);
    //все ок, есть очистка памяти
    void decrypt_file(const std::string& input_file, const CryptoPP::byte* key, const CryptoPP::byte* iv);
}

#endif //FILE_ENCRYPTION_LIBRARY_H