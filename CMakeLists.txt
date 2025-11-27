cmake_minimum_required(VERSION 3.16)
project(SFMLChess)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Source files
file(GLOB_RECURSE SOURCES
    source/*.cpp
)

add_executable(SFMLChess ${SOURCES})

find_package(SFML 2.5 COMPONENTS system window graphics QUIET)

if(SFML_FOUND)
    message(STATUS "Using system SFML")
    target_link_libraries(SFMLChess PRIVATE sfml-graphics sfml-window sfml-system)

else()
    message(STATUS "SFML not found on system — using bundled external/SFML")
    add_subdirectory(external/SFML)

    target_link_libraries(SFMLChess PRIVATE
        sfml-graphics
        sfml-window
        sfml-system
    )
endif()

target_include_directories(SFMLChess PRIVATE
    include
    source
    source/Engine
    source/States
    source/Game
    source/UI
)
