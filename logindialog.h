#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
/***********************************************
 *
 * @file            logindialog.h
 * @brief           登录页面
 *
 * @author          syh
 * @data            2024/06/11
 * @history
 * ********************************************/
#include <QDialog>
#include <QEvent>
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private:
    Ui::LoginDialog *ui;


signals:
    void btnRegisterClicked();

};

#endif // LOGINDIALOG_H
