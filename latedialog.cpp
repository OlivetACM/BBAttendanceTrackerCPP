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

int lateDialog::getLateInterval()
{
    return ui->txtLateThreshold->text().toInt();
}

void lateDialog::on_buttonBox_accepted()
{
    qDebug("lateDialog accepted");
}

void lateDialog::on_buttonBox_rejected()
{
    qDebug("lateDialog rejected");
}

void lateDialog::setLateInterval(int n)
{
    ui->txtLateThreshold->setText(QString::number(n));
}
