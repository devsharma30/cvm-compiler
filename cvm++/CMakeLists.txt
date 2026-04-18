# minimum cmake version required
cmake_minimum_required(VERSION 3.10) 
#name of project
project(DEV_Compiler)
# to force the compiler to use modern C++17 standards
set(CMAKE_CXX_STANDARD 17)

# 1.to tell the compiler where to look for your .h header files
include_directories(include)

# 2.to tell CMake exactly where your .cpp source files are located
add_executable(cvm src/main.cpp src/chunk.cpp src/vm.cpp)