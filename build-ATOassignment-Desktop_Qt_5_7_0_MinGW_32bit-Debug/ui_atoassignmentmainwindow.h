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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ATOassignmentMainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QCheckBox *checkBox;
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
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 40, 75, 23));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(120, 40, 25, 19));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(70, 120, 81, 20));
        ATOassignmentMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ATOassignmentMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
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
        pushButton->setText(QApplication::translate("ATOassignmentMainWindow", "PushButton", 0));
        toolButton->setText(QApplication::translate("ATOassignmentMainWindow", "...", 0));
        checkBox->setText(QApplication::translate("ATOassignmentMainWindow", "CheckBox", 0));
    } // retranslateUi

};

namespace Ui {
    class ATOassignmentMainWindow: public Ui_ATOassignmentMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATOASSIGNMENTMAINWINDOW_H
