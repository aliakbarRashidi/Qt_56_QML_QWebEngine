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
        //QString url = info.requestUrl().toString();
        //url.replace(QRegExp("main.css"), "main2.css");

        QUrl url = QUrl("asd:///E:/work/html/empl/styles-conference/assets/stylesheets/main2.css");
        info.redirect(QUrl(url));
    }
    if(info.resourceType() == QWebEngineUrlRequestInfo::ResourceTypeMedia)
    {
        //https://www.smigin.com/import-es/phrases/mp4/spanish_cafe/2393_a.mp4
        info.redirect(QUrl("e:/work/qt/QWebEngineTest/html/video_ger.mp4"));
    }

    return false;
}
