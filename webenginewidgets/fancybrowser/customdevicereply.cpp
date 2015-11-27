#include "customdevicereply.h"
#include <QDebug>
#include <QTimer>


CustomDeviceReply::CustomDeviceReply(QByteArray &fileData)
    : data(fileData), origLen(fileData.length())
{
    qDebug() << "CustomDeviceReply::CustomDeviceReply() ";
    setOpenMode(QIODevice::ReadOnly | QIODevice::Unbuffered);
    //setOpenMode(QIODevice::Text);

    //data = QString::fromStdString("div,html{background-color:red;}").toUtf8();

    //emit readyRead();

    QTimer::singleShot(0, this, &QIODevice::readyRead);
    QTimer::singleShot(0, this, &QIODevice::readChannelFinished);
}
CustomDeviceReply::~CustomDeviceReply()
{
    qDebug() << "CustomDeviceReply::~CustomDeviceReply()";
}

void CustomDeviceReply::close()
{
    qDebug() << "CustomDeviceReply::close()";
    QIODevice::close(); deleteLater();
}


qint64 CustomDeviceReply::bytesAvailable() const
{
    qDebug() << "CustomDeviceReply::bytesAvailable() = ";// << data.length() + QIODevice::bytesAvailable();
    return data.length() + QIODevice::bytesAvailable();
}

qint64 CustomDeviceReply::readData(char *buffer, qint64 maxlen)
{
    qDebug() << "CustomDeviceReply::readData ";
    qint64 len = qMin(qint64(data.length()), maxlen);
    if (len) {
        memcpy(buffer, data.constData(), len);
        //data.remove(0, len);
    }
    return len;
}

qint64 CustomDeviceReply::writeData(const char *data, qint64 maxlen)
{
    qDebug() << "CustomDeviceReply::writeData" ;
    return 0;

}
