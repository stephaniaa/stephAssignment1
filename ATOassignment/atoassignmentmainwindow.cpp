#include "atoassignmentmainwindow.h"
#include "ui_atoassignmentmainwindow.h"
#include "myobfilecontroller.h"
#include "myoboutputdialog.h"

ATOassignmentMainWindow::ATOassignmentMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ATOassignmentMainWindow)
{
    ui->setupUi(this);
}

ATOassignmentMainWindow::~ATOassignmentMainWindow()
{
    delete ui;
}

void ATOassignmentMainWindow::on_MYOBfilebutton_clicked()
{
    MyobFileController myobfilecontroller;
    ifstream *myobfileptr = myobfilecontroller.OpenMyobFile();
    MyobOutputDialog myoboutputdialog(this);

    myoboutputdialog.setFilePtr(myobfileptr);
    myoboutputdialog.displayText();
    myoboutputdialog.exec();

}
