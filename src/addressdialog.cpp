#include "addressdialog.h"
#include "QDebug"
#include "ui_addressdialog.h"
#include "mainwindow.h"

addressDialog::addressDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addressDialog)
{
    ui->setupUi(this);
}

addressDialog::~addressDialog()
{
    delete ui;
}

QString addressDialog::getAddress()
{
    return ui->txtBbAddress->text();
}

void addressDialog::on_buttonBox_accepted()
{
    qDebug("addressDialog accepted");

    QString bb_address = ui->txtBbAddress->text();
//    MainWindow::bb_address = bb_address;
    qDebug() << bb_address;
}

void addressDialog::on_buttonBox_rejected()
{
    qDebug("addressDialog rejected");
}

void addressDialog::setAddress(QString a)
{
    ui->txtBbAddress->setText(a);
}
