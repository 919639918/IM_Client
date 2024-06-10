#include "registerdialog.h"
#include "ui_registerdialog.h"
#include <QRegularExpression>

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    ui->err_tip->setProperty("state",QString("normal"));
    repolish(ui->err_tip);
    connect(ui->btn_backup,&QPushButton::clicked,[=](){
        emit btnBackUpClicked();
    });
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::showTip(const QString& text, const QString& sta)
{

    ui->err_tip->setText(text);
    ui->err_tip->setProperty("state",sta);
    repolish(ui->err_tip);
}



void RegisterDialog::on_btn_getKey_clicked()
{
    //判断邮箱是否格式是否正确
    auto email=ui->email_lineEdit->text();
    QRegularExpression regex("[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9-]+(?:\.[a-zA-Z0-9-]+)*$");
    bool match=regex.match(email).hasMatch();
    if(match){
        //发送验证码
        showTip("请输入验证码!","normal");

    }
    else {
        showTip("邮箱格式不正确!","error");
    }

}


