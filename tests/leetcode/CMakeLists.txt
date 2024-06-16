# 查找GTest库
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# 添加测试可执行文件
add_executable(runTests test_math_operations.cc test_main.cc)

# 链接GTest和项目的库
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread math_operations)
