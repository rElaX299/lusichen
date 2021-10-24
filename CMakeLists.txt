cmake_minimum_required(VERSION 3.16)
project(my_project)

# 设置全局属性
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

# 指定源文件目录
add_subdirectory(src)
add_subdirectory(test)

enable_testing()