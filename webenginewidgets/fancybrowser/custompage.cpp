#include "custompage.h"
#include <QDebug>

CustomPage::CustomPage(QWebEngineProfile *profile, QObject *parent) : QWebEnginePage(profile, parent)
{
    qDebug() << "****** CustomPage::CustomPage *****";
    //connect(this, &QWebEnginePage::authenticationRequired, this, &CustomPage::myAuthenticationRequired);
    connect(this, &QWebEnginePage::loadStarted, [](){qDebug()<<"loadStarted()";});
    connect(this, &QWebEnginePage::loadFinished, [](bool ok){qDebug()<<"loadFinished ok = "<< ok; });
    connect(this, &QWebEnginePage::urlChanged, [](QUrl url){qDebug()<<"urlChanged url = "<< url; });
    connect(this, &QWebEnginePage::iconUrlChanged, [](QUrl url){qDebug()<<"iconUrlChanged url = "<< url; });

}


/*void CustomPage::myAuthenticationRequired(const QUrl & requestUrl, QAuthenticator * authenticator)
{
    qDebug() << "AuthenticationRequired url = " << requestUrl.toString();
}*/


bool CustomPage::acceptNavigationRequest(const QUrl & url, NavigationType type, bool isMainFrame)
{
    qDebug() << "acceptNavigationRequest url = " << url
             << ";  NavigationType = " << type
             << "; isMainFrame = " << isMainFrame;



    return QWebEnginePage::acceptNavigationRequest(url, type, isMainFrame);
    //return false;
}


