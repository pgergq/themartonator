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
    src/aboutwindow.cpp
    src/aboutwindow.h
    src/aboutwindow.ui
    ${QRCS}
)

# Qt post-install copying
# Retrieve the absolute path to qmake and then use that path to find the binaries
get_target_property(_qmake_executable Qt5::qmake IMPORTED_LOCATION)
get_filename_component(_qt_bin_dir "${_qmake_executable}" DIRECTORY)
find_program(WINDEPLOYQT_EXECUTABLE windeployqt HINTS "${_qt_bin_dir}")

add_custom_command(TARGET themartonator POST_BUILD
    COMMAND "${CMAKE_COMMAND}" -E
        env PATH="${_qt_bin_dir}" "${WINDEPLOYQT_EXECUTABLE}"
            "$<TARGET_FILE:themartonator>"
    COMMENT "Running windeployqt for themartonator..."
)

target_link_libraries(themartonator libmartonator Qt5::Widgets)