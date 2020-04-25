#include "addressdialog.h"
#include "latedialog.h"
#include "logindialog.h"
#include "mainwindow.h"
#include "QDebug"
#include "QFontDialog"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnLogin_clicked()
{
    loginDialog *ld = new loginDialog();
    ld->exec();
    qDebug("btnLogin clicked\n");
}

void MainWindow::on_comboClasses_currentIndexChanged(const QString &arg1)
{
    qDebug("comboClass changed %s\n", arg1.toStdString().c_str());
}

void MainWindow::on_btnSubmit_clicked()
{
    qDebug("btnSubmit clicked\n");
}

void MainWindow::on_btnLogout_clicked()
{
    qDebug("btnLogout clicked\n");
}


void MainWindow::on_actionQuit_triggered()
{
    qDebug("actionQuit triggered\n");
    exit(0);
}

void MainWindow::on_actionChange_Font_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok);
    qApp->setFont(font);
    qDebug("fontDialog triggered\n");
}

void MainWindow::on_actionBlackboard_Address_triggered()
{
    addressDialog *ad = new addressDialog();
    ad->exec();
    qDebug("loginDialog triggered\n");
}

void MainWindow::on_actionLate_Threshold_triggered()
{
    lateDialog *ld = new lateDialog();
    ld->exec();
    qDebug("lateDialog triggered\n");
}
