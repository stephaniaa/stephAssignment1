#ifndef MYOBFILECONTROLLER_H
#define MYOBFILECONTROLLER_H
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <QString>
#include <QFileDialog>
#include <QWidget>

using namespace std;

//! Open myob file.

//! Class creates pointer to ifstream object to open Myob file


class MyobFileController
{
public:
    MyobFileController();
    ifstream *OpenMyobFile();
    void setParentPtr(QWidget *parent);

private:
    ifstream *Myobfilestreamptr;
    QWidget *parentptr;

};

#endif // MYOBFILECONTROLLER_H
