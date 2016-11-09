#include "atoassignmentmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ATOassignmentMainWindow w;
    w.show();

    return a.exec();
}
