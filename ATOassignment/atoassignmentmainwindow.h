#ifndef ATOASSIGNMENTMAINWINDOW_H
#define ATOASSIGNMENTMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class ATOassignmentMainWindow;
}

class ATOassignmentMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ATOassignmentMainWindow(QWidget *parent = 0);
    ~ATOassignmentMainWindow();

private:
    Ui::ATOassignmentMainWindow *ui;
};

#endif // ATOASSIGNMENTMAINWINDOW_H
