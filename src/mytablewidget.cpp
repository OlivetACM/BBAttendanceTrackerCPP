#include "mytablewidget.h"
#include <QList>
#include <QDateTime>
#include <QDebug>
#include <QKeyEvent>


myTableWidget::myTableWidget(QWidget *parent)
    : QTableWidget(parent)
{
    setSelectionBehavior(QAbstractItemView::SelectRows);
}

void myTableWidget::searchIDAndMarkPresent(QString id) {
    foreach(QTableWidgetItem *i, this->findItems(id, 0)) {
        //qDebug() << i->text();
        this->selectRow(i->row());
        const QDateTime date = QDateTime::currentDateTime();
        this->item(i->row(), 3)->setText(date.toString("h:mm a"));
    }
}

void myTableWidget::keyPressEvent(QKeyEvent *event) {
    // this now receives all keypresses.
    qDebug() << event->text();
}
