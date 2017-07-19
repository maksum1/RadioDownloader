#include "dowloadstream.h"

DowloadStream::DowloadStream(QString addres)
{

_pSocket =new QTcpSocket(this);
connect( _pSocket, SIGNAL(readyRead()), SLOT(TcpReadData()) );
}

 DowloadStream::~DowloadStream()
{
delete _pSocket;
delete _pData;
}
void DowloadStream::tcpConnect()
{
    _pSocket->connectToHost("178.136.237.243",8000);
}

void DowloadStream::tcpReadData()
{

    _pData=new QByteArray(_pSocket->read(1024));

    _pSocket->close();
}

bool DowloadStream::isRun()
{
return _pSocket->isValid();
}

QByteArray* DowloadStream::getData()
{
    return _pData;
}
