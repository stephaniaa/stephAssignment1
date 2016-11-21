#include "myobtoatomaindialog.h"
#include "ui_myobtoatomaindialog.h"


MYOBtoATOMainDialog::MYOBtoATOMainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MYOBtoATOMainDialog)
{
    ui->setupUi(this);
    myobtoatocontroller.setParentPtr(this);
}

MYOBtoATOMainDialog::~MYOBtoATOMainDialog()
{
    delete ui;
}

void MYOBtoATOMainDialog::on_getMyobFileButton_clicked()
{
    myobtoatocontroller.getMyobFile();
}

void MYOBtoATOMainDialog::on_getAtoFileButton_clicked()
{
    myobtoatocontroller.getCSVFile();
}

void MYOBtoATOMainDialog::on_getUserInputButton_clicked()
{
    myobtoatocontroller.getUserInput();
}

void MYOBtoATOMainDialog::on_writeOutputFileButton_clicked()
{
    myobtoatocontroller.writeOutputFile();
}
