#include "mainwindow.h"
#include <QApplication>
#include "QDebug"
#include "QFontDatabase"
#include "QSettings"
#include "QStandardPaths"
#include "QDir"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();
    return app.exec();
}
