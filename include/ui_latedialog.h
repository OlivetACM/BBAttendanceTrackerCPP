/********************************************************************************
** Form generated from reading UI file 'latedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LATEDIALOG_H
#define UI_LATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_lateDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *txtLateThreshold;

    void setupUi(QDialog *lateDialog)
    {
        if (lateDialog->objectName().isEmpty())
            lateDialog->setObjectName(QString::fromUtf8("lateDialog"));
        lateDialog->resize(400, 116);
        buttonBox = new QDialogButtonBox(lateDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 70, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        txtLateThreshold = new QLineEdit(lateDialog);
        txtLateThreshold->setObjectName(QString::fromUtf8("txtLateThreshold"));
        txtLateThreshold->setGeometry(QRect(30, 20, 341, 31));

        retranslateUi(lateDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), lateDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), lateDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(lateDialog);
    } // setupUi

    void retranslateUi(QDialog *lateDialog)
    {
        lateDialog->setWindowTitle(QCoreApplication::translate("lateDialog", "Late Threshold Dialog", nullptr));
        txtLateThreshold->setPlaceholderText(QCoreApplication::translate("lateDialog", "10 minutes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lateDialog: public Ui_lateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LATEDIALOG_H
