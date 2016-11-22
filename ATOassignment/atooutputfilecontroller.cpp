#include "atooutputfilecontroller.h"

AtoOutputFileController::AtoOutputFileController()
{

}

// Create ATO file, get user input for directory & name of file

QFile *AtoOutputFileController::AtoOutput(){
    QFile ATOfile;
    ATOfile.setFileName(QFileDialog::getSaveFileName(parentptr,
                                                     "Select directory and name file",
                                                     "/", "Text (*.txt)"));
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


void AtoOutputFileController::setParentPtr(QWidget *parent){
    parentptr = parent;
}
