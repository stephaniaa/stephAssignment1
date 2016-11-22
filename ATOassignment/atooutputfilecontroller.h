#ifndef ATOOUTPUTFILECONTROLLER_H
#define ATOOUTPUTFILECONTROLLER_H
#include <QFile>
#include <QIODevice>
#include <QDir>
#include <QTextStream>
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;


class AtoOutputFileController
{
public:
    AtoOutputFileController();
    QFile *AtoOutput();

private:
    QFile file;

};

#endif // ATOOUTPUTFILECONTROLLER_H
