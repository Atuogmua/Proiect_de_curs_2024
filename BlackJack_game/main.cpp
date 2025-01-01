#include <QApplication>
#include <QLabel>
#include "mainwindow.h"




int main(int argc, char* argv[]){
    QApplication game(argc, argv);
    MainWindow w;
    w.show();
    return game.exec();
}
