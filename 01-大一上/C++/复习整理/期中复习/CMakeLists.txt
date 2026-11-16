cmake_minimum_required(VERSION 4.4)
project(midterm_revison)

set(CMAKE_CXX_STANDARD 20)
# 找到项目根目录下的所有 .cpp 文件
file(GLOB cpp_files CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# 为每个 .cpp 文件创建一个独立的可执行目标
foreach(cpp_file IN LISTS cpp_files)
    get_filename_component(target_name "${cpp_file}" NAME_WLE)
    add_executable("${target_name}" "${cpp_file}")
endforeach()
