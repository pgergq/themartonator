#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "aboutwindow.h"

#include <qmessagebox.h>

using namespace martonator;

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}

void MainWindow::on_actionAbouth_The_Martonator_triggered()
{
    auto about = new AboutWindow{this};
    about->show();
}
