#ifndef THEMARTONATOR_MAINWINDOW_H
#define THEMARTONATOR_MAINWINDOW_H

#include <qmainwindow.h>

namespace martonator
{
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:

private:
};
}   // namespace martonator

#endif   // THEMARTONATOR_MAINWINDOW_H
