cmake_minimum_required(VERSION 3.26)
project(file_encryption)

set(CMAKE_CXX_STANDARD 17)

target_link_libraries(main.cpp cryptopp)
add_library(file_encryption library.cpp
        main.cpp)
