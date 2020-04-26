/********************************************************************************
** Form generated from reading UI file 'addressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSDIALOG_H
#define UI_ADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_addressDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *txtBbAddress;

    void setupUi(QDialog *addressDialog)
    {
        if (addressDialog->objectName().isEmpty())
            addressDialog->setObjectName(QString::fromUtf8("addressDialog"));
        addressDialog->resize(400, 106);
        buttonBox = new QDialogButtonBox(addressDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 60, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        txtBbAddress = new QLineEdit(addressDialog);
        txtBbAddress->setObjectName(QString::fromUtf8("txtBbAddress"));
        txtBbAddress->setGeometry(QRect(30, 20, 341, 31));

        retranslateUi(addressDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), addressDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addressDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(addressDialog);
    } // setupUi

    void retranslateUi(QDialog *addressDialog)
    {
        addressDialog->setWindowTitle(QCoreApplication::translate("addressDialog", "Blackboard Address Dialog", nullptr));
        txtBbAddress->setPlaceholderText(QCoreApplication::translate("addressDialog", "https://blackboard.olivetcollege.edu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addressDialog: public Ui_addressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSDIALOG_H
