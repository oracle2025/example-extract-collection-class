cmake_minimum_required(VERSION 3.23)
project(example_extract_collection_class)

set(CMAKE_CXX_STANDARD 17)

add_executable(example_extract_collection_class src/main.cpp src/LargeTangledClass.cpp src/LargeTangledClass.hpp src/DataBase.cpp src/DataBase.hpp)
target_include_directories(example_extract_collection_class PUBLIC include)