cmake_minimum_required(VERSION 3.6)
project(study)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        src/CAmbulance.cpp
        src/CAmbulance.h
        src/CCar.cpp
        src/CCar.h
        src/CLambdaExcutor.cpp
        src/CLambdaExcutor.h
        src/CSample.cpp
        src/CSample.h
        main.cpp)

add_executable(study ${SOURCE_FILES})