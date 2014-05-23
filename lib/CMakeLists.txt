add_library(myfirstlib random.cpp)

install(TARGETS myfirstlib
                DESTINATION "${CMAKE_INSTALL_PREFIX}/lib"
       )

