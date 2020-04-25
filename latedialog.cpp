#include "latedialog.h"
#include "QDebug"
#include "ui_latedialog.h"

lateDialog::lateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lateDialog)
{
    ui->setupUi(this);
}

lateDialog::~lateDialog()
{
    delete ui;
}

void lateDialog::on_buttonBox_accepted()
{
    qDebug("lateDialog accepted");
}

void lateDialog::on_buttonBox_rejected()
{
    qDebug("lateDialog rejected");
}
