#ifndef THEMARTONATOR_MAINWINDOW_H
#define THEMARTONATOR_MAINWINDOW_H

#include <qmainwindow.h>

namespace Ui
{
class MainWindow;
}

namespace martonator
{
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_actionAbouth_The_Martonator_triggered();

private:
    Ui::MainWindow* ui;
};

}   // namespace martonator

#endif   // THEMARTONATOR_MAINWINDOW_H
