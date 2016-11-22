#ifndef ATOOUTPUTFILECONTROLLER_H
#define ATOOUTPUTFILECONTROLLER_H
#include <QFile>
#include <QIODevice>
#include <QDir>
#include <QTextStream>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <QDialog>
#include <QFileDialog>
#include <QString>

using namespace std;

//! Create ATO output file

//! Class creates ATO output file as directed by user


class AtoOutputFileController
{
public:
    AtoOutputFileController();
    QFile *AtoOutput();
    void setParentPtr(QWidget *parent);

private:
    QFile file;
    QWidget *parentptr;

};

#endif // ATOOUTPUTFILECONTROLLER_H
