cmake_minimum_required(VERSION 3.5)

project(list LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(list main.cpp
    listnode.h
)

include(GNUInstallDirs)
install(TARGETS list
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

add_subdirectory(../Catch2 Catch2-build)
add_executable(list_test main_test.cpp
    listnode.h
    testing_task_1.h
    testing_task_2.h)
target_link_libraries(list_test PRIVATE Catch2::Catch2)
