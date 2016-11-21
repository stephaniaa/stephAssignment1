#include "csvfilercontroller.h"

CSVFilerController::CSVFilerController()
{

}

ifstream *CSVFilerController::OpenCSVFile(){

    QString fileName = QFileDialog::getOpenFileName(parentptr);

    if(fileName.isNull()){
        return nullptr;
    }

    ifstream *fileptr = new ifstream(fileName.toLocal8Bit().constData());

    if(fileptr->fail()){
        cout << "Could not open the required CSV file" << endl;
        exit(EXIT_FAILURE);
    }


    //Store this file stream pointer in the data member
    CSVfilestreamptr = fileptr;

    return fileptr;
}

void CSVFilerController::setParentPtr(QWidget *parent){
    parentptr = parent;
}
