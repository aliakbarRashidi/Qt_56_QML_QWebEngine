#ifndef CUSTOMURLREQUESTJOB_H
#define CUSTOMURLREQUESTJOB_H

#include "QWebEngineUrlRequestJob"

class CustomUrlRequestJob : public QWebEngineUrlRequestJob
{
public:
    //CustomUrlRequestJob();

    void fail(Error r);
    void redirect(const QUrl &url);
    void reply(const QByteArray &contentType, QIODevice *device);

};

#endif // CUSTOMURLREQUESTJOB_H
