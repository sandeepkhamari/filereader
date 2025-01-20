cmake_minimum_required(VERSION 3.28.3)
project(filereader)
add_library(${PROJECT_NAME} src/reader/reader.cpp)
install(TARGETS ${PROJECT_NAME})

