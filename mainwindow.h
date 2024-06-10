#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/***********************************************
 *
 * @file            mainwindow.h
 * @brief           主窗口
 *
 * @author          syh
 * @data            2024/06/10
 * @history
 * ********************************************/
#include <QMainWindow>
#include "logindialog.h"
#include "registerdialog.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    LoginDialog *_loginDia;
    RegisterDialog*_registerDia;

private:
    void initWidget();
};
#endif // MAINWINDOW_H
