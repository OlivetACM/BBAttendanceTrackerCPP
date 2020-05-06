#include <QDebug>
#include <QObject>
#include <QOAuthHttpServerReplyHandler>
#include <QDesktopServices>

#include "blackboard.h"
#include "mainwindow.h"

Blackboard::Blackboard(QObject *parent) : QObject(parent)
{
    QOAuth2AuthorizationCodeFlow oauth2;
    auto replyHandler = new QOAuthHttpServerReplyHandler(1337, this);
    oauth2.setReplyHandler(replyHandler);
    oauth2.setAuthorizationUrl(QUrl("https://blackboard.olivetcollege.edu/learn/api/public/v1/oauth2/authorizationcode"));
    oauth2.setAccessTokenUrl(QUrl("https://olivetcollege-test.blackboard.com/learn/api/public/v1/oauth2/token"));
    oauth2.setScope("identity read");

    connect(&oauth2, &QOAuth2AuthorizationCodeFlow::statusChanged, [=](
            QAbstractOAuth::Status status) {
        if (status == QAbstractOAuth::Status::Granted)
            qDebug() << "authenticated";
            //emit authenticated();
    });
//    oauth2.setModifyParametersFunction([&](QAbstractOAuth::Stage stage, QVariantMap *parameters) {
//        if (stage == QAbstractOAuth::Stage::RequestingAuthorization)
//            parameters->insert("duration", "permanent");
//    });
    connect(&oauth2, &QOAuth2AuthorizationCodeFlow::authorizeWithBrowser, &QDesktopServices::openUrl);
    qDebug() << "reached end of constructor";
}

QString Blackboard::getToken()
{
    return "token";
}

QString Blackboard::getUser(QString username)
{
    return username;
}

void Blackboard::getClasses(QString id)
{
    qDebug() << id;
}

void Blackboard::getStudents(QString classid)
{
    qDebug() << classid;
}
