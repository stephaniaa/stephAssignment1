#include "myobfilecontroller.h"

MyobFileController::MyobFileController()
{

}

ifstream *MyobFileController::OpenMyobFile(){

   // QString dialogName = "Open EMPDUPE file";
   QString fileName = QFileDialog::getOpenFileName(parentptr);

    if(fileName.isNull()){
        return nullptr;
    }

    ifstream *fileptr = new ifstream(fileName.toLocal8Bit().constData());

    if(fileptr->fail()){
        cout << "Could not open the required EMPDUPE file" << endl;
        exit(EXIT_FAILURE);
    }


    //Store this file stream pointer in the data member
    Myobfilestreamptr = fileptr;

    return fileptr;
}

void MyobFileController::setParentPtr(QWidget *parent){
    parentptr = parent;
}
