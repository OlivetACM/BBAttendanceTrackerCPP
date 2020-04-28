#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void readSettings();
    void writeSettings();
    QSettings settings;
    QFont font;
    QString bb_address;
    int late_threshold;

private slots:
    void on_btnLogin_clicked();

    void on_comboClasses_currentIndexChanged(const QString &arg1);

    void on_btnSubmit_clicked();

    void on_btnLogout_clicked();

    void on_actionQuit_triggered();

    void on_actionChange_Font_triggered();

    void on_actionBlackboard_Address_triggered();

    void on_actionLate_Threshold_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
