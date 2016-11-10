#ifndef MYOBOUTPUTDIALOG_H
#define MYOBOUTPUTDIALOG_H

#include <QDialog>
#include <fstream>
#include <iostream>

using namespace std;

namespace Ui {
class MyobOutputDialog;
}

class MyobOutputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyobOutputDialog(QWidget *parent = 0);
    ~MyobOutputDialog();
    void setFilePtr(ifstream *fileptr);
    void displayText();

private:
    Ui::MyobOutputDialog *ui;
    ifstream *myobfileptr;
};

#endif // MYOBOUTPUTDIALOG_H
