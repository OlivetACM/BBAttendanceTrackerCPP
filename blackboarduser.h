#ifndef BLACKBOARDUSER_H
#define BLACKBOARDUSER_H

#include <QObject>

class blackboardUser : public QObject
{
    Q_OBJECT
public:
    explicit blackboardUser(QObject *parent = nullptr);

signals:

};

#endif // BLACKBOARDUSER_H
