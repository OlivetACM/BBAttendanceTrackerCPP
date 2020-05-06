#ifndef BLACKBOARD_H
#define BLACKBOARD_H

#include <QString>
#include <QtCore>
#include <QtNetwork>

#include <QOAuth2AuthorizationCodeFlow>


class Blackboard : public QObject
{
        Q_OBJECT
public:
    Blackboard(QObject *parent = nullptr);
    QString getToken();
    QString getUser(QString username);
    void getClasses(QString id);
    void getStudents(QString classid);

private:
    QString client_key = "629f59f5-befd-4722-8330-a434f8a41338";
    QString client_id = "32ae537f-32f9-462b-8cac-bfdce18e5cdb";
    QString client_secret = "ucdDaILNowr0IDy7PhdU1drTxQrFwOR7";

};

#endif // BLACKBOARD_H
