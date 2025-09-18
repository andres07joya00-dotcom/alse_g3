cmake_minimum_required(VERSION 3.10)   # versión mínima de cmake
project(MiProyecto VERSION 1.0)        # nombre y versión del proyecto
 
set(CMAKE_CXX_STANDARD 17)             # estándar de C++ (ej: 11, 14, 17, 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
 
add_executable(MiProyecto main.cpp)    # compila main.cpp en un ejecutable
