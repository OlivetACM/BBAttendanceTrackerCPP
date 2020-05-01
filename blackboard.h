#ifndef BLACKBOARD_H
#define BLACKBOARD_H

#include <QObject>

#include <QNetworkAccessManager>
#include <QNetworkReply>

class blackboard : public QObject
{
    Q_OBJECT
public:
    explicit blackboard(QObject *parent = nullptr);
    QNetworkReply getUser(QString username);
    QNetworkReply getClasses(QString username);
    QNetworkReply postUser();
    QString getToken();

signals:

};

#endif // BLACKBOARD_H
