cmake_minimum_required(VERSION 3.5)

project(tehtava4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tehtava4 main.cpp
    katutaso.h katutaso.cpp
    kerros.h
    kerrostalo.h kerrostalo.cpp
    asunto.h asunto.cpp)

include(GNUInstallDirs)
install(TARGETS tehtava4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
