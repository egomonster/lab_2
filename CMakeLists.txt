cmake_minimum_required(VERSION 3.5)

project(lab_2 LANGUAGES C)

add_executable(lab_2 main.c)

install(TARGETS lab_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
