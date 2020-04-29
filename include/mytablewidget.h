#ifndef MYTABLEWIDGET_H
#define MYTABLEWIDGET_H

#include <QTableWidget>

class myTableWidget : public QTableWidget
{
public:
    myTableWidget(QWidget *parent = 0);
    void searchIDAndMarkPresent(QString id);
    void keyPressEvent(QKeyEvent *event);
    QString currentID;

public slots:

};

#endif // MYTABLEWIDGET_H
