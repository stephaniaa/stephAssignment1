#ifndef ATOASSIGNMENTMAINWINDOW_H
#define ATOASSIGNMENTMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class ATOassignmentMainWindow;
}

//! Main window.

//! Class creates window on start of program and get user to click button
//! to start


class ATOassignmentMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ATOassignmentMainWindow(QWidget *parent = 0);
    ~ATOassignmentMainWindow();

private slots:
    void on_MYOBfilebutton_clicked();

private:
    Ui::ATOassignmentMainWindow *ui;
};

#endif // ATOASSIGNMENTMAINWINDOW_H
