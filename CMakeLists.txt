project(myfirstlib)
cmake_minimum_required(VERSION 2.8.8)

# Find Boost
find_package(Boost REQUIRED program_options)

include_directories("include" "${Boost_INCLUDE_DIRS}")

# Recurse into sub directories
add_subdirectory(doc)
add_subdirectory("include")
add_subdirectory(lib)
add_subdirectory(tool)
