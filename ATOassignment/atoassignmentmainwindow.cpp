#include "atoassignmentmainwindow.h"
#include "ui_atoassignmentmainwindow.h"
#include "myobtoatomaindialog.h"


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
    MYOBtoATOMainDialog myobtoatomaindialog(this);

    myobtoatomaindialog.exec();

}
