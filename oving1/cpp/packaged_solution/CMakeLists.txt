cmake_minimum_required(VERSION 3.20)
project(cpp-exercise-1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Werror -Wall -Wextra")

add_executable(cpp-solution-1 src/solution1.cpp)
add_executable(cpp-solution-2 src/solution2.cpp)

