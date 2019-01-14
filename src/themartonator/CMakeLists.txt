#################
# TheMartonator #
#################
project(TheMartonator VERSION 0.0.1 LANGUAGES CXX)

add_executable(themartonator WIN32
    src/main.cpp
)

target_link_libraries(themartonator libmartonator Qt5::Widgets)