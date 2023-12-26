cmake_minimum_required(VERSION 3.0)

project(polis)

find_package(raylib 5.0 REQUIRED) # Requires at least version 3.0

add_executable(polis main.cpp)
target_link_libraries(polis raylib)

install(TARGETS polis RUNTIME DESTINATION bin)
