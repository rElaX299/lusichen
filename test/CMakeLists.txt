set(EXECUTABLE_OUTPUT_PATH ../build/bin)

include_directories(
        ./googletest/googletest/include
        ./googletest/googlemock/include
        ${PROJECT_SOURCE_DIR}/include
)

add_subdirectory(googletest)

add_executable(hello_test main.cpp test1.cpp)
target_link_libraries(hello_test gtest gtest_main )
