cmake_minimum_required(VERSION 3.20)

set(SRC
        main.cpp)

add_executable(SimpleProj ${SRC})

source_group(Src FILES ${SRC})

target_link_libraries(SimpleProj SimpleLib)