/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startButton;
    QPushButton *hitButton;
    QPushButton *standButton;
    QPushButton *playerButton;
    QPushButton *playerButton_2;
    QPushButton *playerButton_3;
    QPushButton *playerButton_4;
    QPushButton *playerButton_5;
    QPushButton *playerButton_6;
    QLabel *label;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 700);
        MainWindow->setMinimumSize(QSize(900, 700));
        MainWindow->setMaximumSize(QSize(900, 700));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	width: 900px;\n"
"	height: 700px;\n"
"	background-image:url(:/image/Background.png);\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(380, 320, 141, 51));
        startButton->setVisible(false);
        startButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #660000;\n"
"	color: black;\n"
"	font-family: VP Pixel Simplified DEMO;\n"
"	font-size: 20px;\n"
"	border-color: black;\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"}\n"
""));
        startButton->setCheckable(true);
        hitButton = new QPushButton(centralwidget);
        hitButton->setObjectName("hitButton");
        hitButton->setGeometry(QRect(220, 560, 141, 51));
        hitButton->setVisible(false);
        hitButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #660000;\n"
"	color: black;\n"
"	font-family: VP Pixel Simplified DEMO;\n"
"	font-size: 20px;\n"
"	border-color: black;\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	visibility: false;\n"
"}\n"
""));
        hitButton->setCheckable(true);
        standButton = new QPushButton(centralwidget);
        standButton->setObjectName("standButton");
        standButton->setGeometry(QRect(520, 560, 141, 51));
        standButton->setVisible(false);
        standButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #660000;\n"
"	color: black;\n"
"	font-family: VP Pixel Simplified DEMO;\n"
"	font-size: 20px;\n"
"	border-color: black;\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	align: center;\n"
"}\n"
""));
        standButton->setCheckable(true);
        playerButton = new QPushButton(centralwidget);
        playerButton->setObjectName("playerButton");
        playerButton->setGeometry(QRect(180, 420, 71, 51));
        playerButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #660000;\n"
"	color: black;\n"
"	font-family: VP Pixel Simplified DEMO;\n"
"	font-size: 20px;\n"
"	border-color: black;\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	align: center;\n"
"}\n"
""));
        playerButton->setCheckable(true);
        playerButton_2 = new QPushButton(centralwidget);
        playerButton_2->setObjectName("playerButton_2");
        playerButton_2->setGeometry(QRect(270, 420, 71, 51));
        playerButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #660000;\n"
"	color: black;\n"
"	font-family: VP Pixel Simplified DEMO;\n"
"	font-size: 20px;\n"
"	border-color: black;\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	align: center;\n"
"}\n"
""));
        playerButton_2->setCheckable(true);
        playerButton_3 = new QPushButton(centralwidget);
        playerButton_3->setObjectName("playerButton_3");
        playerButton_3->setGeometry(QRect(360, 420, 71, 51));
        playerButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #660000;\n"
"	color: black;\n"
"	font-family: VP Pixel Simplified DEMO;\n"
"	font-size: 20px;\n"
"	border-color: black;\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	align: center;\n"
"}\n"
""));
        playerButton_3->setCheckable(true);
        playerButton_4 = new QPushButton(centralwidget);
        playerButton_4->setObjectName("playerButton_4");
        playerButton_4->setGeometry(QRect(450, 420, 71, 51));
        playerButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #660000;\n"
"	color: black;\n"
"	font-family: VP Pixel Simplified DEMO;\n"
"	font-size: 20px;\n"
"	border-color: black;\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	align: center;\n"
"}\n"
""));
        playerButton_4->setCheckable(true);
        playerButton_5 = new QPushButton(centralwidget);
        playerButton_5->setObjectName("playerButton_5");
        playerButton_5->setGeometry(QRect(540, 420, 71, 51));
        playerButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #660000;\n"
"	color: black;\n"
"	font-family: VP Pixel Simplified DEMO;\n"
"	font-size: 20px;\n"
"	border-color: black;\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	align: center;\n"
"}\n"
""));
        playerButton_5->setCheckable(true);
        playerButton_6 = new QPushButton(centralwidget);
        playerButton_6->setObjectName("playerButton_6");
        playerButton_6->setGeometry(QRect(630, 420, 71, 51));
        playerButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #660000;\n"
"	color: black;\n"
"	font-family: VP Pixel Simplified DEMO;\n"
"	font-size: 20px;\n"
"	border-color: black;\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	align: center;\n"
"}\n"
""));
        playerButton_6->setCheckable(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 250, 621, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #660000;\n"
"	font-family: VP Pixel Simplified DEMO;\n"
"	font-size: 40px;\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);
        QObject::connect(startButton, &QPushButton::clicked, startButton, qOverload<>(&QPushButton::hide));
        QObject::connect(startButton, &QPushButton::clicked, startButton, qOverload<>(&QPushButton::animateClick));
        QObject::connect(startButton, &QPushButton::clicked, hitButton, qOverload<>(&QPushButton::show));
        QObject::connect(startButton, &QPushButton::clicked, standButton, qOverload<>(&QPushButton::show));
        QObject::connect(playerButton, &QPushButton::clicked, playerButton_2, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton, &QPushButton::clicked, playerButton_3, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton, &QPushButton::clicked, playerButton_4, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton, &QPushButton::clicked, playerButton_5, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton, &QPushButton::clicked, playerButton_6, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton, &QPushButton::clicked, playerButton, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_2, &QPushButton::clicked, playerButton, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_2, &QPushButton::clicked, playerButton_3, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_2, &QPushButton::clicked, playerButton_4, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_2, &QPushButton::clicked, playerButton_5, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_2, &QPushButton::clicked, playerButton_6, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_2, &QPushButton::clicked, playerButton_2, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_3, &QPushButton::clicked, playerButton, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_4, &QPushButton::clicked, playerButton, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_5, &QPushButton::clicked, playerButton, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_6, &QPushButton::clicked, playerButton, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_3, &QPushButton::clicked, playerButton_2, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_3, &QPushButton::clicked, playerButton_3, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_3, &QPushButton::clicked, playerButton_4, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_3, &QPushButton::clicked, playerButton_5, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_3, &QPushButton::clicked, playerButton_6, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_4, &QPushButton::clicked, playerButton_4, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_4, &QPushButton::clicked, playerButton_2, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_4, &QPushButton::clicked, playerButton_3, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_5, &QPushButton::clicked, playerButton_5, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_4, &QPushButton::clicked, playerButton_5, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_4, &QPushButton::clicked, playerButton_6, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_5, &QPushButton::clicked, playerButton, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_5, &QPushButton::clicked, playerButton_2, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_5, &QPushButton::clicked, playerButton_3, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_5, &QPushButton::clicked, playerButton_4, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_5, &QPushButton::clicked, playerButton_6, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_6, &QPushButton::clicked, playerButton_6, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_6, &QPushButton::clicked, playerButton_5, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_6, &QPushButton::clicked, playerButton_4, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_6, &QPushButton::clicked, playerButton_3, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_6, &QPushButton::clicked, playerButton_2, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton_6, &QPushButton::clicked, playerButton, qOverload<>(&QPushButton::hide));
        QObject::connect(playerButton, &QPushButton::clicked, startButton, qOverload<>(&QPushButton::show));
        QObject::connect(playerButton_2, &QPushButton::clicked, startButton, qOverload<>(&QPushButton::show));
        QObject::connect(playerButton_3, &QPushButton::clicked, startButton, qOverload<>(&QPushButton::show));
        QObject::connect(playerButton_4, &QPushButton::clicked, startButton, qOverload<>(&QPushButton::show));
        QObject::connect(playerButton_5, &QPushButton::clicked, startButton, qOverload<>(&QPushButton::show));
        QObject::connect(playerButton_6, &QPushButton::clicked, startButton, qOverload<>(&QPushButton::show));
        QObject::connect(playerButton, &QPushButton::clicked, label, qOverload<>(&QLabel::hide));
        QObject::connect(playerButton_2, &QPushButton::clicked, label, qOverload<>(&QLabel::hide));
        QObject::connect(playerButton_3, &QPushButton::clicked, label, qOverload<>(&QLabel::hide));
        QObject::connect(playerButton_4, &QPushButton::clicked, label, qOverload<>(&QLabel::hide));
        QObject::connect(playerButton_5, &QPushButton::clicked, label, qOverload<>(&QLabel::hide));
        QObject::connect(playerButton_6, &QPushButton::clicked, label, qOverload<>(&QLabel::hide));

        startButton->setDefault(true);
        hitButton->setDefault(true);
        standButton->setDefault(true);
        playerButton->setDefault(true);
        playerButton_2->setDefault(true);
        playerButton_3->setDefault(true);
        playerButton_4->setDefault(true);
        playerButton_5->setDefault(true);
        playerButton_6->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        hitButton->setText(QCoreApplication::translate("MainWindow", "HIT", nullptr));
        standButton->setText(QCoreApplication::translate("MainWindow", "STAND", nullptr));
        playerButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        playerButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        playerButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        playerButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        playerButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        playerButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Choose the number of players:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
