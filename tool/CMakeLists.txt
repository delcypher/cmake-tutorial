# Create executable with target name "myfirst_tool"
add_executable(myfirst_tool main.cpp)

# Link "myfirst_tool" target with our library target
# "myfirstlib"
target_link_libraries(myfirst_tool myfirstlib "${Boost_LIBRARIES}")
