cmake_minimum_required(VERSION 3.5)

project(tehtava2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tehtava2 main.cpp
    game.h
    game.h game.cpp)

include(GNUInstallDirs)
install(TARGETS tehtava2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
