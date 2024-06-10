#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H
/***********************************************
 *
 * @file            registerdialog.h
 * @brief           注册页面
 *
 * @author          syh
 * @data            2024/06/11
 * @history
 * ********************************************/
#include <QDialog>
#include "global.h"

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();

private:
    bool _haveRegisterState{false};
private:
    Ui::RegisterDialog *ui;
    void showTip(const QString& text,const QString& sta);
signals:
    void btnBackUpClicked();
private slots:
    void on_btn_getKey_clicked();
};

#endif // REGISTERDIALOG_H
