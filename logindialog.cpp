#include "logindialog.h"
#include "QDebug"
#include "ui_logindialog.h"

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
}

loginDialog::~loginDialog()
{
    delete ui;
}

QString loginDialog::getUsername()
{
    return ui->txtUsername->text();
}

QString loginDialog::getPassword()
{
    return ui->txtPassword->text();
}

void loginDialog::on_buttonBox_accepted()
{
    qDebug("loginDialog accepted");
}

void loginDialog::on_buttonBox_rejected()
{
    qDebug("loginDialog rejected");
}
