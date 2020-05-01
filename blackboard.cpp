#include "blackboard.h"



blackboard::blackboard(QObject *parent) : QObject(parent)
{

    QString application_id = "32ae537f-32f9-462b-8cac-bfdce18e5cdb";
    QString application_key = "629f59f5-befd-4722-8330-a434f8a41338";
    QString application_secret = "ucdDaILNowr0IDy7PhdU1drTxQrFwOR7";

    QString urlCourseMembers = "/learn/api/public/v1/courses/{courseId}/users";


    // Get course meetings
    //    get /learn/api/public/v1/courses/{courseId}/meetings
    // Get meeting users by ID
    //    get /learn/api/public/v1/courses/{courseId}/meetings/{meetingId}/users
    // Get user
    //    get /learn/api/public/v1/users/{userId}
    // Update bulk attendance
    //    post /learn/api/public/v1/courses/{courseId}/meetings/{meetingId}/users/bulk

}

QString blackboard::getToken()
{
    return "token";
}
