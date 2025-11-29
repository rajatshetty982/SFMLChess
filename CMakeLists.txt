cmake_minimum_required(VERSION 3.16)
project(SFMLChess)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Source files
file(GLOB_RECURSE SOURCES
    source/*.cpp
    source/*.hpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

# search for sfml first on the users system, if not found, use the submodule in
# external folder to compile
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

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Asset copy
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/assets $<TARGET_FILE_DIR:${PROJECT_NAME}>/assets
)
