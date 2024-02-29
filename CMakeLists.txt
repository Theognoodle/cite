cmake_minimum_required(VERSION 3.27)
project(KiSH)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        KiSH internal/main.cpp
        internal/KiSHLib.h
        internal/Tutorial.cpp
        internal/Tutorial.h
)
