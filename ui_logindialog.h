/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *txtUsername;
    QLineEdit *txtPassword;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QString::fromUtf8("loginDialog"));
        loginDialog->resize(400, 166);
        buttonBox = new QDialogButtonBox(loginDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 120, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        txtUsername = new QLineEdit(loginDialog);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setGeometry(QRect(20, 20, 361, 31));
        txtPassword = new QLineEdit(loginDialog);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(20, 60, 361, 31));
        txtPassword->setEchoMode(QLineEdit::Password);

        retranslateUi(loginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), loginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), loginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QCoreApplication::translate("loginDialog", "Login Dialog", nullptr));
        txtUsername->setPlaceholderText(QCoreApplication::translate("loginDialog", "User Name", nullptr));
        txtPassword->setPlaceholderText(QCoreApplication::translate("loginDialog", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
