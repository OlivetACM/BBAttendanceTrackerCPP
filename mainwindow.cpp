#include "mainwindow.h"
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
    printf("btnLogin clicked\n");
}

void MainWindow::on_comboClasses_currentIndexChanged(const QString &arg1)
{
    printf("comboClass changed %s\n", arg1.toStdString().c_str());
}

void MainWindow::on_btnSubmit_clicked()
{
    printf("btnSubmit clicked\n");
}

void MainWindow::on_btnLogout_clicked()
{
    printf("btnLogout clicked\n");
}


void MainWindow::on_actionQuit_triggered()
{
    printf("actionQuit triggered\n");
    exit(0);
}

void MainWindow::on_actionChange_Font_triggered()
{
    printf("fontDialog triggered\n");
}

void MainWindow::on_actionBlackboard_Address_triggered()
{
    printf("loginDialog triggered\n");
}

void MainWindow::on_actionLate_Threshold_triggered()
{
    printf("lateDialog triggered\n");
}
