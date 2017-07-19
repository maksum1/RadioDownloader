#ifndef DOWLOADSTREAM_H
#define DOWLOADSTREAM_H

#include <QByteArray>
#include <QTcpSocket>
class DowloadStream:QTcpSocket
{
public:
    DowloadStream(QString addres);
    ~DowloadStream();
    void tcpConnect();



    bool isRun();

    QByteArray* getData();
private slots:
    void tcpReadData();
private:
    QTcpSocket *_pSocket;
    QByteArray *_pData;
};

#endif // DOWLOADSTREAM_H
