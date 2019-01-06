#################
# LibMartonator #
#################
project(LibMartonator VERSION 0.0.1 LANGUAGES CXX)

file(GLOB SOURCES "src/*.cpp")
add_library(libmartonator ${SOURCES})

target_include_directories(libmartonator PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE src)

target_link_libraries(libmartonator
    nlohmann_json
    boost)
