#include "myoboutputdialog.h"
#include "ui_myoboutputdialog.h"

MyobOutputDialog::MyobOutputDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyobOutputDialog)
{
    ui->setupUi(this);
}

MyobOutputDialog::~MyobOutputDialog()
{
    delete ui;
}

void MyobOutputDialog::setFilePtr(ifstream *fileptr){
    myobfileptr = fileptr;

}

void MyobOutputDialog::displayText(){
    char myobtext[1024];
    myobfileptr->getline(myobtext,1023);
    ui->textBrowser->setText(QString::fromUtf8(myobtext));
}
