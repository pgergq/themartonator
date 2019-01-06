#################
# TheMartonator #
#################
project(TheMartonator VERSION 0.0.1 LANGUAGES CXX)

add_executable(themartonator_SRCS WIN32
    src/main.cpp
)

target_link_libraries(themartonator_SRCS libmartonator Qt5::Widgets)