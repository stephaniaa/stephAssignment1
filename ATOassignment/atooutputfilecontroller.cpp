#include "atooutputfilecontroller.h"

AtoOutputFileController::AtoOutputFileController()
{

}

QFile *AtoOutputFileController::AtoOutput(){
    QFile ATOfile;
    QDir::setCurrent(" ");
    ATOfile.setFileName("ATOoutput.txt");
    ATOfile.open(QIODevice::WriteOnly);
    if(!ATOfile.isOpen()){
        cout << "Could not open ATO output file" << endl;
        exit(EXIT_FAILURE);
    }

    QTextStream out(&ATOfile);
    out << "This is the ATO output file" << endl;
    file.close();

    return &ATOfile;

}
