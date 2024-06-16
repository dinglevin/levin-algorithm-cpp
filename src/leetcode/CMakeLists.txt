# 生成库
add_library(math_operations math_operations.cc)
add_library(number001 number001.cc)

# 包含目录
target_include_directories(math_operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(number001 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
