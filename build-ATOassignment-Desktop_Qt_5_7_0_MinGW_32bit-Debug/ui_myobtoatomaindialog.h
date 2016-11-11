/********************************************************************************
** Form generated from reading UI file 'myobtoatomaindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYOBTOATOMAINDIALOG_H
#define UI_MYOBTOATOMAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MYOBtoATOMainDialog
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *getMyobFileButton;
    QPushButton *getAtoFileButton;
    QPushButton *getUserInputButton;
    QPushButton *writeOutputFileButton;

    void setupUi(QDialog *MYOBtoATOMainDialog)
    {
        if (MYOBtoATOMainDialog->objectName().isEmpty())
            MYOBtoATOMainDialog->setObjectName(QStringLiteral("MYOBtoATOMainDialog"));
        MYOBtoATOMainDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(MYOBtoATOMainDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        getMyobFileButton = new QPushButton(MYOBtoATOMainDialog);
        getMyobFileButton->setObjectName(QStringLiteral("getMyobFileButton"));
        getMyobFileButton->setGeometry(QRect(174, 20, 81, 21));
        getAtoFileButton = new QPushButton(MYOBtoATOMainDialog);
        getAtoFileButton->setObjectName(QStringLiteral("getAtoFileButton"));
        getAtoFileButton->setGeometry(QRect(180, 50, 75, 23));
        getUserInputButton = new QPushButton(MYOBtoATOMainDialog);
        getUserInputButton->setObjectName(QStringLiteral("getUserInputButton"));
        getUserInputButton->setGeometry(QRect(174, 80, 81, 21));
        writeOutputFileButton = new QPushButton(MYOBtoATOMainDialog);
        writeOutputFileButton->setObjectName(QStringLiteral("writeOutputFileButton"));
        writeOutputFileButton->setGeometry(QRect(164, 120, 91, 21));

        retranslateUi(MYOBtoATOMainDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MYOBtoATOMainDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MYOBtoATOMainDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MYOBtoATOMainDialog);
    } // setupUi

    void retranslateUi(QDialog *MYOBtoATOMainDialog)
    {
        MYOBtoATOMainDialog->setWindowTitle(QApplication::translate("MYOBtoATOMainDialog", "Dialog", 0));
        getMyobFileButton->setText(QApplication::translate("MYOBtoATOMainDialog", "Get MYOB file", 0));
        getAtoFileButton->setText(QApplication::translate("MYOBtoATOMainDialog", "Get ATO file", 0));
        getUserInputButton->setText(QApplication::translate("MYOBtoATOMainDialog", "Get user input", 0));
        writeOutputFileButton->setText(QApplication::translate("MYOBtoATOMainDialog", "Write output file", 0));
    } // retranslateUi

};

namespace Ui {
    class MYOBtoATOMainDialog: public Ui_MYOBtoATOMainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYOBTOATOMAINDIALOG_H
