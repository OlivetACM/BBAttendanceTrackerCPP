#include "Ui_MainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow *mainWin = new QMainWindow;
    Ui::MainWindow ui;
    ui.setupUi(mainWin);
    mainWin->show();
    return a.exec();
}
