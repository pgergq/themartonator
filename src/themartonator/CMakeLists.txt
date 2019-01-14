#################
# TheMartonator #
#################
project(TheMartonator VERSION 0.0.1 LANGUAGES CXX)

# Qt resources
qt5_add_resources(QRCS src/application.qrc)

add_executable(themartonator WIN32
    src/main.cpp
    src/mainwindow.cpp
    src/mainwindow.h
    src/mainwindow.ui
    ${QRCS}
)

target_link_libraries(themartonator libmartonator Qt5::Widgets)