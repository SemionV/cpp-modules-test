cmake_minimum_required(VERSION 3.29.0 FATAL_ERROR)

# Enables the Standard module support. This needs to be done
# before selecting the languages.
#set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "0e5b6991-d74f-4b3d-a41c-cf096e0b2508")
#set(CMAKE_CXX_MODULE_STD ON)

project(cpp_modules_test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ensure compiler extensions are disabled (use -std=c++20 instead of -std=gnu++20)
set(CMAKE_CXX_EXTENSIONS OFF)

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_compile_options(-fexperimental-library)
    add_compile_options(-stdlib=libc++)
    #add_compile_options(-fmodules-ts)
    #add_compile_options(-fprebuilt-module-path="~/cpp_modules.cache")
    #add_compile_options(-I /usr/include/c++/v1)
endif()

if(MSVC)
    add_compile_options(/experimental:module)
endif()

include(FetchContent)
FetchContent_Declare(
        std
        URL "file://${LIBCXX_BUILD}/modules/c++/v1/"
        DOWNLOAD_EXTRACT_TIMESTAMP TRUE
        SYSTEM
)
FetchContent_MakeAvailable(std)

add_subdirectory(core-lib)
add_subdirectory(program)
#add_subdirectory(stl)
