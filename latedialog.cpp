#include "latedialog.h"
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

}

void lateDialog::on_buttonBox_rejected()
{

}
