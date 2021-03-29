/********************************************************************************
** Form generated from reading UI file 'appli.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLI_H
#define UI_APPLI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Appli
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *valeur_de_nord;
    QLabel *valeur_de_est;
    QLabel *Est;
    QLabel *Nord;
    QLabel *Valeur_de_sud;
    QLabel *Sud;
    QLabel *Ouest;
    QLabel *valeur_de_ouest;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Vpanneau;
    QLabel *Vbatterie;
    QLabel *Ipanneau;
    QLabel *Ibatterie;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLCDNumber *Volt_panneau;
    QLCDNumber *Volt_batterie;
    QLCDNumber *Ampere_panneau;
    QLCDNumber *Ampere_batterie;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QProgressBar *progressBar_Vpanneau;
    QProgressBar *progressBar_Vbatterie;
    QProgressBar *progressBar_Ipanneau;
    QProgressBar *progressBar_Ibatterie;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *Elevation;
    QLabel *Azimuth;
    QLCDNumber *valeur_elevation;
    QLCDNumber *valeur_azimuth;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *BP_Gauche;
    QPushButton *BP_Monter;
    QPushButton *BP_Descendre;
    QPushButton *BP_Parking;
    QPushButton *BP_Droite;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QRadioButton *automatique;
    QRadioButton *semi_automatique;
    QRadioButton *manuel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Appli)
    {
        if (Appli->objectName().isEmpty())
            Appli->setObjectName(QString::fromUtf8("Appli"));
        Appli->resize(600, 450);
        Appli->setBaseSize(QSize(600, 450));
        centralwidget = new QWidget(Appli);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 221, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        valeur_de_nord = new QLabel(gridLayoutWidget);
        valeur_de_nord->setObjectName(QString::fromUtf8("valeur_de_nord"));

        gridLayout->addWidget(valeur_de_nord, 1, 2, 1, 1);

        valeur_de_est = new QLabel(gridLayoutWidget);
        valeur_de_est->setObjectName(QString::fromUtf8("valeur_de_est"));

        gridLayout->addWidget(valeur_de_est, 2, 3, 1, 1);

        Est = new QLabel(gridLayoutWidget);
        Est->setObjectName(QString::fromUtf8("Est"));

        gridLayout->addWidget(Est, 2, 4, 1, 1);

        Nord = new QLabel(gridLayoutWidget);
        Nord->setObjectName(QString::fromUtf8("Nord"));
        Nord->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Nord->sizePolicy().hasHeightForWidth());
        Nord->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Nord, 0, 2, 1, 1);

        Valeur_de_sud = new QLabel(gridLayoutWidget);
        Valeur_de_sud->setObjectName(QString::fromUtf8("Valeur_de_sud"));

        gridLayout->addWidget(Valeur_de_sud, 3, 2, 1, 1);

        Sud = new QLabel(gridLayoutWidget);
        Sud->setObjectName(QString::fromUtf8("Sud"));

        gridLayout->addWidget(Sud, 4, 2, 1, 1);

        Ouest = new QLabel(gridLayoutWidget);
        Ouest->setObjectName(QString::fromUtf8("Ouest"));

        gridLayout->addWidget(Ouest, 2, 0, 1, 1);

        valeur_de_ouest = new QLabel(gridLayoutWidget);
        valeur_de_ouest->setObjectName(QString::fromUtf8("valeur_de_ouest"));

        gridLayout->addWidget(valeur_de_ouest, 2, 1, 1, 1);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 180, 281, 21));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Vpanneau = new QLabel(horizontalLayoutWidget);
        Vpanneau->setObjectName(QString::fromUtf8("Vpanneau"));

        horizontalLayout_2->addWidget(Vpanneau);

        Vbatterie = new QLabel(horizontalLayoutWidget);
        Vbatterie->setObjectName(QString::fromUtf8("Vbatterie"));

        horizontalLayout_2->addWidget(Vbatterie);

        Ipanneau = new QLabel(horizontalLayoutWidget);
        Ipanneau->setObjectName(QString::fromUtf8("Ipanneau"));

        horizontalLayout_2->addWidget(Ipanneau);

        Ibatterie = new QLabel(horizontalLayoutWidget);
        Ibatterie->setObjectName(QString::fromUtf8("Ibatterie"));

        horizontalLayout_2->addWidget(Ibatterie);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 200, 281, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Volt_panneau = new QLCDNumber(horizontalLayoutWidget_2);
        Volt_panneau->setObjectName(QString::fromUtf8("Volt_panneau"));

        horizontalLayout_3->addWidget(Volt_panneau);

        Volt_batterie = new QLCDNumber(horizontalLayoutWidget_2);
        Volt_batterie->setObjectName(QString::fromUtf8("Volt_batterie"));

        horizontalLayout_3->addWidget(Volt_batterie);

        Ampere_panneau = new QLCDNumber(horizontalLayoutWidget_2);
        Ampere_panneau->setObjectName(QString::fromUtf8("Ampere_panneau"));

        horizontalLayout_3->addWidget(Ampere_panneau);

        Ampere_batterie = new QLCDNumber(horizontalLayoutWidget_2);
        Ampere_batterie->setObjectName(QString::fromUtf8("Ampere_batterie"));

        horizontalLayout_3->addWidget(Ampere_batterie);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 230, 281, 171));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        progressBar_Vpanneau = new QProgressBar(horizontalLayoutWidget_3);
        progressBar_Vpanneau->setObjectName(QString::fromUtf8("progressBar_Vpanneau"));
        progressBar_Vpanneau->setValue(24);
        progressBar_Vpanneau->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(progressBar_Vpanneau);

        progressBar_Vbatterie = new QProgressBar(horizontalLayoutWidget_3);
        progressBar_Vbatterie->setObjectName(QString::fromUtf8("progressBar_Vbatterie"));
        progressBar_Vbatterie->setValue(24);
        progressBar_Vbatterie->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(progressBar_Vbatterie);

        progressBar_Ipanneau = new QProgressBar(horizontalLayoutWidget_3);
        progressBar_Ipanneau->setObjectName(QString::fromUtf8("progressBar_Ipanneau"));
        progressBar_Ipanneau->setValue(24);
        progressBar_Ipanneau->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(progressBar_Ipanneau);

        progressBar_Ibatterie = new QProgressBar(horizontalLayoutWidget_3);
        progressBar_Ibatterie->setObjectName(QString::fromUtf8("progressBar_Ibatterie"));
        progressBar_Ibatterie->setValue(24);
        progressBar_Ibatterie->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(progressBar_Ibatterie);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(240, 40, 141, 91));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Elevation = new QLabel(gridLayoutWidget_2);
        Elevation->setObjectName(QString::fromUtf8("Elevation"));

        gridLayout_2->addWidget(Elevation, 0, 0, 1, 1);

        Azimuth = new QLabel(gridLayoutWidget_2);
        Azimuth->setObjectName(QString::fromUtf8("Azimuth"));

        gridLayout_2->addWidget(Azimuth, 1, 0, 1, 1);

        valeur_elevation = new QLCDNumber(gridLayoutWidget_2);
        valeur_elevation->setObjectName(QString::fromUtf8("valeur_elevation"));

        gridLayout_2->addWidget(valeur_elevation, 0, 1, 1, 1);

        valeur_azimuth = new QLCDNumber(gridLayoutWidget_2);
        valeur_azimuth->setObjectName(QString::fromUtf8("valeur_azimuth"));

        gridLayout_2->addWidget(valeur_azimuth, 1, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(310, 180, 271, 221));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        BP_Gauche = new QPushButton(gridLayoutWidget_3);
        BP_Gauche->setObjectName(QString::fromUtf8("BP_Gauche"));

        gridLayout_3->addWidget(BP_Gauche, 1, 0, 1, 1);

        BP_Monter = new QPushButton(gridLayoutWidget_3);
        BP_Monter->setObjectName(QString::fromUtf8("BP_Monter"));

        gridLayout_3->addWidget(BP_Monter, 0, 1, 1, 1);

        BP_Descendre = new QPushButton(gridLayoutWidget_3);
        BP_Descendre->setObjectName(QString::fromUtf8("BP_Descendre"));

        gridLayout_3->addWidget(BP_Descendre, 2, 1, 1, 1);

        BP_Parking = new QPushButton(gridLayoutWidget_3);
        BP_Parking->setObjectName(QString::fromUtf8("BP_Parking"));

        gridLayout_3->addWidget(BP_Parking, 4, 0, 1, 3);

        BP_Droite = new QPushButton(gridLayoutWidget_3);
        BP_Droite->setObjectName(QString::fromUtf8("BP_Droite"));

        gridLayout_3->addWidget(BP_Droite, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 3, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(390, 10, 171, 121));
        automatique = new QRadioButton(groupBox);
        automatique->setObjectName(QString::fromUtf8("automatique"));
        automatique->setGeometry(QRect(20, 20, 82, 17));
        semi_automatique = new QRadioButton(groupBox);
        semi_automatique->setObjectName(QString::fromUtf8("semi_automatique"));
        semi_automatique->setGeometry(QRect(20, 50, 121, 17));
        manuel = new QRadioButton(groupBox);
        manuel->setObjectName(QString::fromUtf8("manuel"));
        manuel->setGeometry(QRect(20, 80, 82, 17));
        Appli->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Appli);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
        Appli->setMenuBar(menubar);
        statusbar = new QStatusBar(Appli);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Appli->setStatusBar(statusbar);

        retranslateUi(Appli);

        QMetaObject::connectSlotsByName(Appli);
    } // setupUi

    void retranslateUi(QMainWindow *Appli)
    {
        Appli->setWindowTitle(QApplication::translate("Appli", "Appli", nullptr));
        valeur_de_nord->setText(QApplication::translate("Appli", "0", nullptr));
        valeur_de_est->setText(QApplication::translate("Appli", "0", nullptr));
        Est->setText(QApplication::translate("Appli", "Est", nullptr));
        Nord->setText(QApplication::translate("Appli", "Nord", nullptr));
        Valeur_de_sud->setText(QApplication::translate("Appli", "0", nullptr));
        Sud->setText(QApplication::translate("Appli", "Sud", nullptr));
        Ouest->setText(QApplication::translate("Appli", "Ouest", nullptr));
        valeur_de_ouest->setText(QApplication::translate("Appli", "0", nullptr));
        Vpanneau->setText(QApplication::translate("Appli", "Vpanneau", nullptr));
        Vbatterie->setText(QApplication::translate("Appli", "Vbatterie", nullptr));
        Ipanneau->setText(QApplication::translate("Appli", "Ipanneau", nullptr));
        Ibatterie->setText(QApplication::translate("Appli", "Ibatterie", nullptr));
        Elevation->setText(QApplication::translate("Appli", "Elevation", nullptr));
        Azimuth->setText(QApplication::translate("Appli", "Azimuth", nullptr));
        BP_Gauche->setText(QApplication::translate("Appli", "Gauche", nullptr));
        BP_Monter->setText(QApplication::translate("Appli", "Monter", nullptr));
        BP_Descendre->setText(QApplication::translate("Appli", "Descendre", nullptr));
        BP_Parking->setText(QApplication::translate("Appli", "Parking", nullptr));
        BP_Droite->setText(QApplication::translate("Appli", "Droite", nullptr));
        groupBox->setTitle(QApplication::translate("Appli", "Modes:", nullptr));
        automatique->setText(QApplication::translate("Appli", "Automatique", nullptr));
        semi_automatique->setText(QApplication::translate("Appli", "Semi-automatique", nullptr));
        manuel->setText(QApplication::translate("Appli", "Manuel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Appli: public Ui_Appli {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLI_H
