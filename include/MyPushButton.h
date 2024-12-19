//
// Created by asus on 24-12-19.
//

#ifndef ARKNIGHTS_MYPUSHBUTTON_H
#define ARKNIGHTS_MYPUSHBUTTON_H
#include <QPushButton>
#include <QPropertyAnimation>

class MyPushButton: public QPushButton{
    Q_OBJECT

protected:
    QString imgPath;
public:
    MyPushButton(QString imgPath);
    void zoom1();
    void zoom2();
   
};
class StartButton: public MyPushButton{
    Q_OBJECT
public:
    StartButton(QString imgPath);
};

#endif //ARKNIGHTS_MYPUSHBUTTON_H
