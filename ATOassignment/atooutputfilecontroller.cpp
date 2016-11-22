#include "atooutputfilecontroller.h"

AtoOutputFileController::AtoOutputFileController()
{

}

QFile *AtoOutputFileController::AtoOutput(){
    QFile ATOfile;
    //QString dir = QFileDialog::getExistingDirectory(parentptr, "Select directory to save ATO output",
                                                     "/home",
                                                    // QFileDialog::ShowDirsOnly);
   // QDir::setCurrent(dir);


    ATOfile.setFileName(QFileDialog::getSaveFileName(parentptr, "Select directory and name file", "/", "Text (*.txt)"));
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

//QDir *AtoOutputFileController::UserGetOutputDir(){
  //  return QDir::setCurrent(QFileDialog::getExistingDirectory(parentptr));

//}



void AtoOutputFileController::setParentPtr(QWidget *parent){
    parentptr = parent;
}
