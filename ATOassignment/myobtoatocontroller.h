#ifndef MYOBTOATOCONTROLLER_H
#define MYOBTOATOCONTROLLER_H

#include "myobfilecontroller.h"
#include "myoboutputdialog.h"
#include <iostream>
#include <fstream>
#include <QWidget>

//! Control opening and output of files by/for user.

//! Class controls opening of MYOB & ATO files and generation of output
//! file

class MYOBtoATOcontroller
{
public:
    explicit MYOBtoATOcontroller();
    void setParentPtr(QWidget *parent);
    void getMyobFile();
    void getAtoFormatFile();
    void getUserInput();
    void writeOutputFile();

private:
    ifstream *myobinputfileptr;
    ifstream *formatinputfileptr;
    ofstream *atooutputfileptr;
    QWidget *parentptr;
};

#endif // MYOBTOATOCONTROLLER_H
