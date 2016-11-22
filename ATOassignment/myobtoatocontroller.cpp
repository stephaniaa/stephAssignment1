#include "myobtoatocontroller.h"

MYOBtoATOcontroller::MYOBtoATOcontroller()
{


}

void MYOBtoATOcontroller::setParentPtr(QWidget *parent){
    parentptr = parent;
}

void MYOBtoATOcontroller::getMyobFile(){

    MyobFileController myobfilecontroller;
    myobfilecontroller.setParentPtr(parentptr);
    myobinputfileptr = myobfilecontroller.OpenMyobFile();

}

void MYOBtoATOcontroller::getCSVFile(){

    CSVFilerController csvfilecontroller;
    csvfilecontroller.setParentPtr(parentptr);
    csvfileptr = csvfilecontroller.OpenCSVFile();

}

void MYOBtoATOcontroller::getUserInput(){
    MyobOutputDialog myoboutputdialog(parentptr);
    myoboutputdialog.setFilePtr(myobinputfileptr);
    myoboutputdialog.displayText();
    myoboutputdialog.exec();
}

void MYOBtoATOcontroller::writeOutputFile(){

    AtoOutputFileController atooutputfilecontroller;
    atooutputfilecontroller.setParentPtr(parentptr);
    atooutputfilecontroller.AtoOutput();
}
