#ifndef CUSTOMDEVICEREPLY_H
#define CUSTOMDEVICEREPLY_H

#include <QIODevice>


class CustomDeviceReply : public QIODevice
{
public:
    CustomDeviceReply();

    virtual qint64 bytesAvailable() const Q_DECL_OVERRIDE;

    virtual void close() Q_DECL_OVERRIDE
        { QIODevice::close(); deleteLater(); }

protected:
    virtual qint64 readData(char *data, qint64 maxlen) Q_DECL_OVERRIDE;
    virtual qint64 writeData(const char *data, qint64 maxlen) Q_DECL_OVERRIDE;

private:
    QByteArray data;
    //const qint64 origLen;

};

#endif // CUSTOMDEVICEREPLY_H
