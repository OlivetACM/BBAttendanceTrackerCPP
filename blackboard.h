#ifndef BLACKBOARD_H
#define BLACKBOARD_H

#include <QObject>

class blackboard : public QObject
{
    Q_OBJECT
public:
    explicit blackboard(QObject *parent = nullptr);

signals:

};

#endif // BLACKBOARD_H
