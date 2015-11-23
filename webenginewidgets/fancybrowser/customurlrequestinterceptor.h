#ifndef CUSTOMURLREQUESTINTERCEPTOR_H
#define CUSTOMURLREQUESTINTERCEPTOR_H

#include <QWebEnginePage>
#include <QWebEngineUrlRequestInterceptor>



class CustomUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor
{
public:
    CustomUrlRequestInterceptor();

    bool interceptRequest(QWebEngineUrlRequestInfo &info) override;
};

#endif // CUSTOMURLREQUESTINTERCEPTOR_H
