#include <iostream>

#include <cryptopp/osrng.h>

using namespace CryptoPP;

int main() {
    // Инициализация генератора псевдослучайных чисел
    AutoSeededRandomPool rng;

    // Генерация 128-битного ключа
    byte key[16]; // 16 байтов = 128 бит
    rng.GenerateBlock(key, sizeof(key));

    //
    // Вывод сгенерированного ключа в шестнадцатеричном формате
    std::cout << "Сгенерированный ключ: ";
    for (size_t i = 0; i < sizeof(key); ++i) {
        std::cout << std::hex << (int)key[i];
    }
    std::cout << std::endl;

    return 0;
}