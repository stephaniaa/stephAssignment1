#ifndef MYOBFILECONTROLLER_H
#define MYOBFILECONTROLLER_H
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <QString>
#include <QFileDialog>

using namespace std;

class MyobFileController
{
public:
    MyobFileController();
    ifstream *OpenMyobFile();

private:
    ifstream *Myobfilestreamptr;

};

#endif // MYOBFILECONTROLLER_H
