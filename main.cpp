#include "library.h"

int main(){
    //std::string path_to_notcrypt = "/Users/danast/Desktop/encryption/notcrypt.jpg";
    std::string path_to_notcrypt;
    std::cout << "Enter path to not crypt file: "; std::cin >> path_to_notcrypt;

    //std::string path_to_Encr = "/Users/danast/Desktop/encryption/notcrypt_encrypted.jpg";
    std::string path_to_encr;
    std::cout << "Enter path to crypt file: "; std::cin >> path_to_encr;

    //для простоты, ключ и IV будут одинаковыми
    const CryptoPP::byte* IV = EncryptionLib::generate_IV();
    const CryptoPP::byte* KEY = EncryptionLib::generate_strong_password();

    std::cout << "Сгенерированный IV: ";
    for (size_t i = 0; i < CryptoPP::AES::BLOCKSIZE; ++i) {
        std::cout << std::hex << static_cast<int>(IV[i]);
    }
    std::cout << std::endl;
    std::cout << "Сгенерированный KEY: ";
    for (size_t i = 0; i < CryptoPP::AES::BLOCKSIZE; ++i) {
        std::cout << std::hex << static_cast<int>(KEY[i]);
    }
    std::cout << std::endl;

    EncryptionLib::encrypt_file(path_to_notcrypt, KEY, IV);

    EncryptionLib::decrypt_file(path_to_encr, KEY, IV);
    return 0;
}