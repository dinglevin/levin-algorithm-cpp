# Enable testing
enable_testing()

# 查找GTest库
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# 添加测试可执行文件
add_executable(number001Test test_number001.cc ../test_main.cc)
add_executable(number002Test test_number002.cc ../test_main.cc)

# 链接GTest和项目的库
target_link_libraries(number001Test ${GTEST_LIBRARIES} pthread number002)
target_link_libraries(number002Test ${GTEST_LIBRARIES} pthread number002)

# Add test
add_test(NAME Number001Test COMMAND number001Test)
add_test(NAME Number002Test COMMAND number002Test)