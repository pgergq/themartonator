#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <qmessagebox.h>

using namespace martonator;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
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

void martonator::MainWindow::on_actionAbouth_The_Martonator_triggered()
{
    QMessageBox::information(this, "About The Martonator...", "The Martonator v" MARTONATOR_VERSION);
}
