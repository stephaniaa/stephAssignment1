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

//! Class creates ATO output file in directory chosen by user


class AtoOutputFileController
{
public:
    AtoOutputFileController();
    QFile *AtoOutput();
    QDir *UserGetOutputDir();
    void setParentPtr(QWidget *parent);

private:
    QFile file;
    ifstream *outputdirptr;
    QWidget *parentptr;

};

#endif // ATOOUTPUTFILECONTROLLER_H
