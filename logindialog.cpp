#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    connect(ui->btn_register,&QPushButton::clicked,[=](){
        emit btnRegisterClicked();
    });
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

