cmake_minimum_required(VERSION 3.20)

set(SRC
        src/Processor.cpp)
set(API
        API/Processor.h)

add_library(SimpleLib ${SRC} ${API})

target_include_directories(SimpleLib PUBLIC API)

source_group(Src FILES ${SRC})
source_group(API FILES ${API})