#ifndef MYTABLEWIDGET_H
#define MYTABLEWIDGET_H

#include <QTableWidget>

class myTableWidget : public QTableWidget
{
    Q_OBJECT

public:
    myTableWidget(QWidget *parent = 0);
    void searchIDAndMarkPresent(QString id);
    void keyPressEvent(QKeyEvent *event);
    QString currentID;

public slots:
    void oncellSelected( int row, int column);

signals:
    void cellSelected(int row, int column);

};

#endif // MYTABLEWIDGET_H
