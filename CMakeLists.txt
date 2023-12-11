cmake_minimum_required(VERSION 3.16)

project(paruqetwriter)

set(CMAKE_CXX_STANDARD 17)

add_executable(writer src/main.cpp src/parquet_writer.h src/parquet_writer.cc)
target_link_libraries(writer PRIVATE arrow parquet)



