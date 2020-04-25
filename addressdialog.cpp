#include "addressdialog.h"
#include "QDebug"
#include "ui_addressdialog.h"

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

void addressDialog::on_buttonBox_accepted()
{
    qDebug("addressDialog accepted");
}

void addressDialog::on_buttonBox_rejected()
{
    qDebug("addressDialog rejected");
}
