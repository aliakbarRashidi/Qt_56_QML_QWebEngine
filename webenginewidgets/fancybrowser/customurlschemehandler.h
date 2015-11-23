#ifndef CUSTOMURLSCHEMEHANDLER_H
#define CUSTOMURLSCHEMEHANDLER_H

#include <QWebEnginePage>
#include <QWebEngineUrlSchemeHandler>
#include <QWebEngineUrlRequestJob>

class CustomUrlSchemeHandler : public QWebEngineUrlSchemeHandler
{
public:
    CustomUrlSchemeHandler(QObject *parent = 0);

    void requestStarted(QWebEngineUrlRequestJob *request) override;
};

#endif // CUSTOMURLSCHEMEHANDLER_H
