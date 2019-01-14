#include "mainwindow.h"

#include <qapplication.h>

#include <array>
#include <iostream>

using namespace martonator;

int main(int argc, char** argv)
{
    Q_INIT_RESOURCE(application);

    QApplication app(argc, argv);
    QCoreApplication::setOrganizationName("pgq");
    QCoreApplication::setApplicationName("The Martonator");
    QCoreApplication::setApplicationVersion(MARTONATOR_VERSION);

    MainWindow w;
    w.show();

    return app.exec();
}