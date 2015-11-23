#include "customurlrequestjob.h"
#include <QDebug>


void CustomUrlRequestJob::fail(Error r)
{
    qDebug() << "CustomUrlRequestJob::fail";
    QWebEngineUrlRequestJob::fail(r);
}

void CustomUrlRequestJob::redirect(const QUrl &url)
{
    qDebug() << "CustomUrlRequestJob::redirect";
    QWebEngineUrlRequestJob::redirect(url);
}

void CustomUrlRequestJob::reply(const QByteArray &contentType, QIODevice *device)
{
    qDebug() << "CustomUrlRequestJob::reply";
    QWebEngineUrlRequestJob::reply(contentType,device);
}


