#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <QDialog>

namespace Ui
{
class AboutWindow;
}

namespace martonator
{
class AboutWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AboutWindow(QWidget* parent = nullptr);
    ~AboutWindow();

private:
    Ui::AboutWindow* ui;
};
}   // namespace martonator

#endif   // ABOUTWINDOW_H
