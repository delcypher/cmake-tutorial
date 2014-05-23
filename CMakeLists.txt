project(myfirstlib)
cmake_minimum_required(VERSION 2.8.8)

include_directories("include")

# Recurse into sub directories
add_subdirectory(lib)
add_subdirectory(tool)
