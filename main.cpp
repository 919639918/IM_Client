#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle("fusion");
    QFile qss(":/Style/style.qss");
    if(qss.open(QFile::ReadOnly)){
        QString style=QLatin1String(qss.readAll());
        a.setStyleSheet(style);
        qDebug()<<"qss文件加载成功!";
        qss.close();
    }
    else{
        qDebug()<<"qss文件加载失败!";
    }

    MainWindow w;
    w.show();
    return a.exec();
}
