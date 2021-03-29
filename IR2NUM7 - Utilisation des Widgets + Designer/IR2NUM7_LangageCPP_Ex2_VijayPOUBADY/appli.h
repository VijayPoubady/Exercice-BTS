#ifndef APPLI_H
#define APPLI_H
#include <QTimer>
#include <QPushButton>
#include <QtSerialPort>
#include <QMessageBox>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Appli; }
QT_END_NAMESPACE

class Appli : public QMainWindow
{
    Q_OBJECT

public:
    Appli(QWidget *parent = nullptr);
    ~Appli();

public slots:
    void Envoyer1();
    void Envoyer2();

private:
    Ui::Appli *ui;
    QTimer *timer;
    QSerialPort *serie;
    QMessageBox msg;
    const char car='0x52';
    const char car2='0x0D';
    QSerialPort *port;

};
#endif // APPLI_H
