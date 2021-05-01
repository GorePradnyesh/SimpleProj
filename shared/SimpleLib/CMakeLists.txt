cmake_minimum_required(VERSION 3.20)

set(SRC
        src/Processor.cpp)
set(API
        API/Processor.h)
set(INC
        Inc/InternalProcessor.h)

add_library(SimpleLib ${SRC} ${API} ${INC})

target_include_directories(SimpleLib PUBLIC API)
target_include_directories(SimpleLib PRIVATE Inc)

source_group(Src FILES ${SRC})
source_group(API FILES ${API})
source_group(Inc FILES ${INC})