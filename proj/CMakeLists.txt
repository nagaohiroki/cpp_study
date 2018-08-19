cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(proj)
add_executable(proj 
	src/main.cpp
	src/functest.cpp
	)
