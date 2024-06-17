# 生成库
add_library(number001 number001.cc)
add_library(number002 number002.cc)

# 包含目录
target_include_directories(number001 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(number002 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
