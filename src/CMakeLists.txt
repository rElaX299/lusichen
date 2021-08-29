# 指定库文件输出位置
add_library(HELLO SHARED hello.c)

# 指定头文件目录
target_include_directories(HELLO PRIVATE ${CMAKE_SOURCE_DIR}/include)
