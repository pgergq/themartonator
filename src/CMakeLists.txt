#####################
# ProjectMartonator #
#####################
cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(ProjectMartonator VERSION 0.0.1 LANGUAGES CXX)

# nlohmann-json
find_package(nlohmann_json 3.4.0 REQUIRED)

# boost
find_package(Boost REQUIRED)
add_library(boost INTERFACE IMPORTED)
set_property(TARGET boost PROPERTY
    INTERFACE_INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR})

# Qt-related settings
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets CONFIG REQUIRED)

add_subdirectory(libmartonator)
add_subdirectory(themartonator)