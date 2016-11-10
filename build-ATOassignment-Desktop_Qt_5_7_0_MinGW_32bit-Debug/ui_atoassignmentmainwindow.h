/********************************************************************************
** Form generated from reading UI file 'atoassignmentmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATOASSIGNMENTMAINWINDOW_H
#define UI_ATOASSIGNMENTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ATOassignmentMainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *MYOBfilebutton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ATOassignmentMainWindow)
    {
        if (ATOassignmentMainWindow->objectName().isEmpty())
            ATOassignmentMainWindow->setObjectName(QStringLiteral("ATOassignmentMainWindow"));
        ATOassignmentMainWindow->resize(400, 300);
        centralWidget = new QWidget(ATOassignmentMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MYOBfilebutton = new QPushButton(centralWidget);
        MYOBfilebutton->setObjectName(QStringLiteral("MYOBfilebutton"));
        MYOBfilebutton->setGeometry(QRect(284, 30, 91, 21));
        ATOassignmentMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ATOassignmentMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        ATOassignmentMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ATOassignmentMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ATOassignmentMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ATOassignmentMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ATOassignmentMainWindow->setStatusBar(statusBar);

        retranslateUi(ATOassignmentMainWindow);

        QMetaObject::connectSlotsByName(ATOassignmentMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ATOassignmentMainWindow)
    {
        ATOassignmentMainWindow->setWindowTitle(QApplication::translate("ATOassignmentMainWindow", "ATOassignmentMainWindow", 0));
        MYOBfilebutton->setText(QApplication::translate("ATOassignmentMainWindow", "Open MYOB file", 0));
    } // retranslateUi

};

namespace Ui {
    class ATOassignmentMainWindow: public Ui_ATOassignmentMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATOASSIGNMENTMAINWINDOW_H
