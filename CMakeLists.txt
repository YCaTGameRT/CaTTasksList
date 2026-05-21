cmake_minimum_required(VERSION 3.16)

project(CaTTasksList LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CaTTasksList Main.cpp
    TaskList.h TaskList.cpp
    Task.h Task.cpp
    TerminalOut.h TerminalOut.cpp
    Executable.h Executable.cpp)

include(GNUInstallDirs)
install(TARGETS CaTTasksList
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
