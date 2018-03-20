cmake_minimum_required(VERSION 3.2)

project(project1)

set(CMAKE_CXX_STANDARD 14)
set(EIGEN_DIR lib/eigen-git-mirror)
set(CMAKE_CXX_FLAGS "-O3")
include_directories(SYSTEM
	${EIGEN_DIR})
include_directories(
	${PROJECT_SOURCE_DIR}/src)

set(SOURCES
  ${PROJECT_SOURCE_DIR}/src/test_matrix.cpp
  ${PROJECT_SOURCE_DIR}/src/test_vector.cpp)

set(HEADERS
  ${PROJECT_SOURCE_DIR}/src/random_matrix.h
  ${PROJECT_SOURCE_DIR}/src/random_vector.h)

add_executable(project1 ${PROJECT_SOURCE_DIR}/src/main.cpp ${SOURCES})
