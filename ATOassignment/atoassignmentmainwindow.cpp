#include "atoassignmentmainwindow.h"
#include "ui_atoassignmentmainwindow.h"

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
