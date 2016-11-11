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
