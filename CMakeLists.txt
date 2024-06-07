cmake_minimum_required(VERSION 3.22)

set(NameProject Sound)
set(BIN_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

project(${NameProject})

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE INCLUDE
        src/*.h,
        src/*.hpp
)

file(GLOB_RECURSE SOURCE
        src/*.c,
        src/*.cpp
)

add_executable(${NameProject} src/main.cpp)

set_target_properties(${NameProject}
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${BIN_DIRECTORY}
)

# miniaudio
target_include_directories(${NameProject} PUBLIC vendor/miniaudio)

