#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QSlider"
#include "QLayout"
#include "QLCDNumber"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)) , this , SLOT(affiche(int)));
    connect(this, SIGNAL(Envoyer2LCD(int)) , this , SLOT(changer_LCD(int)));

//    connect(ui->horizontalSlider, QOverload<int>::of(&QhorizontalSlider::ValueChanged), this ,& );
//    connect(this, QOverload<int>::of(this::Envoyer2LCD), this , &QLCDNumber(changer_LCD(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::affiche(int A)
{
    emit Envoyer2LCD(A);
}

void MainWindow::changer_LCD(int B)
{
    ui->lcdNumber->display(B);
}
