cmake_minimum_required(VERSION 3.30)
project(cpp_modules_test)

set(CMAKE_CXX_STANDARD 23)

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ensure compiler extensions are disabled (use -std=c++20 instead of -std=gnu++20)
set(CMAKE_CXX_EXTENSIONS OFF)

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_compile_options(-fexperimental-library)
endif()

if(MSVC)
    add_compile_options(/experimental:module)
endif()

add_subdirectory(core-lib)
add_subdirectory(program)
