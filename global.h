#ifndef GLOBAL_H
#define GLOBAL_H
#include <QWidget>
#include<functional>
#include <QStyle>

const std::function<void(QWidget*w)> repolish=[](QWidget*w){
    w->style()->unpolish(w);
    w->style()->polish(w);

};


#endif // GLOBAL_H
