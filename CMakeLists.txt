cmake_minimum_required(VERSION 3.14)
project(SchoolExe)

set(CMAKE_CXX_STANDARD 98)

add_executable(SchoolExe main.cpp person.cpp person.h student.h teacher.h school.cpp school.h test.cpp test.h String.cpp String.h)