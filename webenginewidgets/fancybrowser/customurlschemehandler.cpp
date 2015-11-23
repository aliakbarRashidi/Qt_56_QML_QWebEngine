#include "customurlschemehandler.h"
#include <QDebug>

CustomUrlSchemeHandler::CustomUrlSchemeHandler(QObject *parent) : QWebEngineUrlSchemeHandler(parent)
{

}

void CustomUrlSchemeHandler::requestStarted(QWebEngineUrlRequestJob *request)
{
    qDebug() << "CustomUrlSchemeHandler::requestStarted -->>> " << request->requestUrl();
    return;
}

