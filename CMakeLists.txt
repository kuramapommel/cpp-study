cmake_minimum_required(VERSION 3.6)
project(study)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        src/CSample.cpp
        src/CCar.cpp
        src/CAmbulance.cpp
        src/CLambdaExcutor.cpp)

add_executable(study ${SOURCE_FILES})