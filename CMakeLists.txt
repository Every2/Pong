cmake_minimum_required(VERSION 3.28)
project(pong)

set(CMAKE_C_STANDARD 99)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)

set (SOURCES
     src/main.c
     src/window.c
     include/window.h
)

add_executable(pong  ${SOURCES})
target_link_libraries(pong Vulkan::Vulkan)
target_link_libraries(pong glfw)
