cmake_minimum_required(VERSION 3.0)

project(polis)

add_executable(polis main.cpp)
target_link_libraries(polis libraylib.a)

install(TARGETS polis RUNTIME DESTINATION bin)
