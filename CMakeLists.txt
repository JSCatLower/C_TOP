cmake_minimum_required(VERSION 4.1.1)
project(C_TOP C)
set(SOURCES 
	src/main.c)

add_executable(c_top ${SOURCES})

set(CMAKE_C_FLAGS_RELEASE "-O2 -DNDEBUG")

if(CMAKE_C_COMPILER_ID MATCHES "Clang")
    set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fsanitize=undefined -fsanitize=address -fno-omit-frame-pointer")
endif()
