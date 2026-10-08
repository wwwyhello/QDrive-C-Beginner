cmake_minimum_required(VERSION 3.10)
project(QDrive-C-Beginner C)

set(CMAKE_C_STANDARD 99)

include_directories(include)

file(GLOB SRC_FILES src/*.c)

add_executable(main ${SRC_FILES})