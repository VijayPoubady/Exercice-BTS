#include "appli.h"
#include "ui_appli.h"
#include <QSerialPort>
#define PortCom "COM4"
#include <QMessageBox>



Appli::Appli(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Appli)
{
    timer = new QTimer;
    connect(timer, SIGNAL(Timeout),this,SLOT(Envoyer1));
    connect(timer, SIGNAL(Timeout),this,SLOT(Envoyer2));
    timer->start(2000);

    ui->setupUi(this);
    port = new QSerialPort();
    port->setPortName(PortCom);
    port->setBaudRate(QSerialPort::Baud9600);
    port->setDataBits(QSerialPort::Data8);
    port->setParity(QSerialPort::NoParity);
    port->setFlowControl(QSerialPort::NoFlowControl);
    port->setStopBits(QSerialPort::OneStop);

//    if(!port->open(QIODevice::ReadWrite))
//    {
//        QMessageBox msg;
//        msg.setText("Erreur à l'ouverture du PortCom");
//        msg.exec();
//    }
    bool testPort = port->open(QIODevice::ReadWrite);
    if(testPort == false)
    {
        qDebug("Erreur ouverture de port");
    }
    else
    {
        qDebug("Pas d'erreur");
    }
    qint64 read(char * data, qint64 maxSize);
    QByteArray read(qint64 maxSize);
    QByteArray readAll();
    qint64 readLine(char * data, qint64 maxSize);
    QByteArray readLine(qint64 maxSize = 0);

}
void Appli::Envoyer1()
{
    qint64 nbrSend = port->write(&car);
}
void Appli::Envoyer2()
{
    qint64 nbrSend = port->write(&car2);
}

Appli::~Appli()
{
    delete ui;
}

