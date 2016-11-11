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

void MYOBtoATOcontroller::getAtoFormatFile(){

}

void MYOBtoATOcontroller::getUserInput(){
    MyobOutputDialog myoboutputdialog(parentptr);
    myoboutputdialog.setFilePtr(myobinputfileptr);
    myoboutputdialog.displayText();
    myoboutputdialog.exec();
}

void MYOBtoATOcontroller::writeOutputFile(){

}
