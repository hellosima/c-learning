cmake_minimum_required(VERSION 3.25)
project(c_learning)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories("C Primer Plus 6")

add_executable(c_learning
        "C Primer Plus 6/02/2.11 practice.c" "C Primer Plus 6/03/practice.c")
