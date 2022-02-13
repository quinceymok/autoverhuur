cmake_minimum_required(VERSION 3.21)
project(HPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(HPP main.cpp autohuur.cpp autohuur.h auto.cpp auto.h Klant.cpp Klant.h)
