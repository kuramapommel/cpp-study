cmake_minimum_required(VERSION 3.6)
project(study)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        src/sample.cpp
        src/car.cpp
        src/CAmbulance.cpp
        )

add_executable(study ${SOURCE_FILES})