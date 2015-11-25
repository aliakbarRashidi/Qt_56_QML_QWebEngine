#include "customurlschemehandler.h"
#include <QDebug>
#include <QMimeDatabase>
#include "customdevicereply.h"

CustomUrlSchemeHandler::CustomUrlSchemeHandler(QObject *parent) : QWebEngineUrlSchemeHandler(parent)
{

}

void CustomUrlSchemeHandler::requestStarted(QWebEngineUrlRequestJob *request)
{
    qDebug() << "CustomUrlSchemeHandler::requestStarted -->>> " << request->requestUrl();

    QMimeDatabase HelpViewer;
    QMimeType mt = HelpViewer.mimeTypeForUrl(request->requestUrl());
    const QString mimeType = mt.name();
    qDebug() << "CustomUrlSchemeHandler::requestStarted -->>> mimeType= " << mimeType;
    QIODevice *reply = new CustomDeviceReply();
    request->reply(mimeType.toLatin1(), reply);

    return;
}

