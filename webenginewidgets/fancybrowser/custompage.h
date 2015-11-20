#ifndef CUSTOMPAGE_H
#define CUSTOMPAGE_H

#include <QWebEnginePage>
#include <QNetworkReply>
#include <QAuthenticator>

class CustomPage : public QWebEnginePage
{
    Q_OBJECT
public:
    CustomPage();
    ~CustomPage(){}

public:
    void myAuthenticationRequired(const QUrl & requestUrl, QAuthenticator * authenticator);

protected:
    bool acceptNavigationRequest(const QUrl & url, NavigationType type, bool isMainFrame) override;


};

#endif // CUSTOMPAGE_H
