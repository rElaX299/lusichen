# 指定库文件输出位置
add_library(HELLO SHARED hello.c)

# 指定头文件目录
target_include_directories(HELLO PRIVATE ${CMAKE_SOURCE_DIR}/include)

# 指定可执行文件输出
add_executable(main.app main.c)

# 指定头文件目录
target_include_directories(main.app PUBLIC ${CMAKE_SOURCE_DIR}/include)

# 指定库文件
target_link_libraries(main.app HELLO)