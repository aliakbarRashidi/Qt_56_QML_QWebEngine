#include "customurlrequestinterceptor.h"
#include <QDebug>


CustomUrlRequestInterceptor::CustomUrlRequestInterceptor()
{

}


bool CustomUrlRequestInterceptor::interceptRequest(QWebEngineUrlRequestInfo &info)
{
    qDebug() << "CustomUrlRequestInterceptor::interceptRequest --> " << info.requestUrl()
             << "; resourceType() = " << info.resourceType()
             << "; navigationType()" << info.navigationType();

    if(info.resourceType() == QWebEngineUrlRequestInfo::ResourceTypeStylesheet)
    {
        QString url = info.requestUrl().toString();
        url.replace(QRegExp("main.css"), "main2.css");
        info.redirect(QUrl(url));
    }

    return true;
}
