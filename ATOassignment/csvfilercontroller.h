#ifndef CSVFILERCONTROLLER_H
#define CSVFILERCONTROLLER_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <QString>
#include <QFileDialog>
#include <QWidget>

using namespace std;

//! Open CSV file.

//! Class creates pointer to ifstream object to open CSV file


class CSVFilerController
{
public:
    CSVFilerController();
    ifstream *OpenCSVFile();
    void setParentPtr(QWidget *parent);

private:
    ifstream *CSVfilestreamptr;
    QWidget *parentptr;
};

#endif // CSVFILERCONTROLLER_H

