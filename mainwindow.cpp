#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initWidget();
}


void MainWindow::initWidget()
{

    _loginDia=new LoginDialog();
    _registerDia=new RegisterDialog();
    ui->stackedWidget->insertWidget(0,_loginDia);
    ui->stackedWidget->insertWidget(1,_registerDia);
    ui->stackedWidget->setCurrentIndex(0);
    connect(_loginDia,&LoginDialog::btnRegisterClicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(_registerDia,&RegisterDialog::btnBackUpClicked,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
    if(_loginDia!=nullptr){
        delete _loginDia;
        _loginDia=nullptr;
    }
    if(_registerDia!=nullptr){
        delete _registerDia;
        _registerDia=nullptr;
    }
}
