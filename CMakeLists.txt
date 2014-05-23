project(myfirstlib)
cmake_minimum_required(VERSION 2.8.8)

# Find Boost
find_package(Boost REQUIRED program_options)

include_directories("include" "${Boost_INCLUDE_DIRS}")

option(ENABLE_DOCS "Enables building doxygen docs" ON)

# Recurse into sub directories
if (ENABLE_DOCS)
    add_subdirectory(doc)
    message("Hey you're building doxygen stuff!")
endif()

add_subdirectory("include")
add_subdirectory(lib)
add_subdirectory(tool)
