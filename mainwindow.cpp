#include "addressdialog.h"
#include "latedialog.h"
#include "logindialog.h"
#include "mainwindow.h"
#include "QDebug"
#include "QDir"
#include "QFontDialog"
#include "QFontDatabase"
#include "QSettings"

#include "ui_mainwindow.h"

void MainWindow::readSettings()
{
    QSettings *settings = new QSettings(QDir::currentPath() + "/my_config_file.ini", QSettings::IniFormat);
    font = QFont(settings->value("reader.font", QString()).toString());
    QString fontFamily = settings->value("reader.font.family", QString()).toString();
    if (fontFamily == "") {
        qApp->setFont(QFontDatabase::systemFont(QFontDatabase::FixedFont));
    } else {
        qApp->setFont(font);
    }
    bb_address = settings->value("reader.bb_address").toString();
    late_threshold = settings->value("reader.late_threshold").toInt();
}

void MainWindow::writeSettings()
{
    QSettings *settings = new QSettings(QDir::currentPath() + "/my_config_file.ini", QSettings::IniFormat);
    settings->setValue("reader.bb_address", bb_address);
    settings->setValue("reader.late_threshold", late_threshold);
    settings->setValue("reader.font", font.toString());
    settings->setValue("reader.font.family", font.family());
    settings->sync();
}

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
    qDebug("btnLogin clicked");
    loginDialog *ld = new loginDialog();
    ld->exec();
    qDebug() << ld->getUsername() << "," << ld->getPassword();
}

void MainWindow::on_comboClasses_currentIndexChanged(const QString &arg1)
{
    qDebug("comboClass changed to %s", arg1.toStdString().c_str());
}

void MainWindow::on_btnSubmit_clicked()
{
    qDebug("btnSubmit clicked");
}

void MainWindow::on_btnLogout_clicked()
{
    qDebug("btnLogout clicked");
}


void MainWindow::on_actionQuit_triggered()
{
    qDebug("actionQuit triggered");
    writeSettings();
    exit(0);
}

void MainWindow::on_actionChange_Font_triggered()
{
    qDebug("fontDialog triggered");
    qDebug() << this->font.toString();
    bool ok;
    this->font = QFontDialog::getFont(&ok, this->font);
    qDebug() << this->font.toString();
    settings.setValue("reader.font", this->font.toString());
    qApp->setFont(this->font);
}

void MainWindow::on_actionBlackboard_Address_triggered()
{
    qDebug("loginDialog triggered");
    addressDialog *ad = new addressDialog();
    ad->setAddress(this->bb_address);
    ad->exec();
    this->bb_address = ad->getAddress();
}

void MainWindow::on_actionLate_Threshold_triggered()
{
    qDebug("lateDialog triggered");
    lateDialog *ld = new lateDialog();
    ld->setLateInterval(this->late_threshold);
    ld->exec();
    this->late_threshold = ld->getLateInterval();
}
