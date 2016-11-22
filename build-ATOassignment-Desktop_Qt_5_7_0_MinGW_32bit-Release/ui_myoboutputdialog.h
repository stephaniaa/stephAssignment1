/********************************************************************************
** Form generated from reading UI file 'myoboutputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYOBOUTPUTDIALOG_H
#define UI_MYOBOUTPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_MyobOutputDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *MyobOutputDialog)
    {
        if (MyobOutputDialog->objectName().isEmpty())
            MyobOutputDialog->setObjectName(QStringLiteral("MyobOutputDialog"));
        MyobOutputDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(MyobOutputDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(MyobOutputDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(50, 20, 256, 192));

        retranslateUi(MyobOutputDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MyobOutputDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MyobOutputDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MyobOutputDialog);
    } // setupUi

    void retranslateUi(QDialog *MyobOutputDialog)
    {
        MyobOutputDialog->setWindowTitle(QApplication::translate("MyobOutputDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class MyobOutputDialog: public Ui_MyobOutputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYOBOUTPUTDIALOG_H
