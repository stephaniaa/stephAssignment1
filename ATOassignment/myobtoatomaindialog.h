#ifndef MYOBTOATOMAINDIALOG_H
#define MYOBTOATOMAINDIALOG_H

#include <QDialog>
#include "myobtoatocontroller.h"

namespace Ui {
class MYOBtoATOMainDialog;
}

class MYOBtoATOMainDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MYOBtoATOMainDialog(QWidget *parent = 0);
    ~MYOBtoATOMainDialog();

private slots:
    void on_getMyobFileButton_clicked();

    void on_getAtoFileButton_clicked();

    void on_getUserInputButton_clicked();

    void on_writeOutputFileButton_clicked();

private:
    Ui::MYOBtoATOMainDialog *ui;
    MYOBtoATOcontroller myobtoatocontroller;
};

#endif // MYOBTOATOMAINDIALOG_H
