cmake_minimum_required(VERSION 3.26)
project(file_encryption)
#/opt/homebrew/Cellar/cryptopp/8.9.0

# Настройка пути к заголовочным файлам Crypto++
include_directories(/opt/homebrew/Cellar/cryptopp/8.9.0/include)

# Настройка пути к библиотекам Crypto++
link_directories(/opt/homebrew/Cellar/cryptopp/8.9.0/lib)

set(CMAKE_CXX_STANDARD 14)

add_executable(file_encryption library.cpp
        example.cpp)

# Связывание исполняемого файла с библиотекой Crypto++
target_link_libraries(file_encryption cryptopp)