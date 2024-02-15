cmake_minimum_required(VERSION 3.5)

project(tehtava5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tehtava5 main.cpp)

include(GNUInstallDirs)
install(TARGETS tehtava5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
