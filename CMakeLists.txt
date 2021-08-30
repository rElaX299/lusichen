cmake_minimum_required(VERSION 3.16)
project(TEST C)

# 设置全局属性
set(CMAKE_C_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

# 指定可执行文件输出
add_executable(main.app main.c)

# 指定头文件目录
target_include_directories(main.app PUBLIC ${CMAKE_SOURCE_DIR}/include)

# 指定源文件目录
add_subdirectory(src)

# 指定库文件
target_link_libraries(main.app HELLO)
