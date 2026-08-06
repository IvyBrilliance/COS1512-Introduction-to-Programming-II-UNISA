cmake_minimum_required(VERSION 3.19)
project(pointersAndDynamicArrays LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(pointersAndDynamicArrays
    main.cpp
)

target_link_libraries(pointersAndDynamicArrays
    PRIVATE
        Qt::Core
)

install(TARGETS pointersAndDynamicArrays
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
