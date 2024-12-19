//
// Created by asus on 24-12-19.
//

#include "../include/MyPushButton.h"

MyPushButton::MyPushButton(QString imgPath){
    this->imgPath = imgPath;
    QPixmap pixmap;
    bool ret = pixmap.load(imgPath);
    if(!ret){
        qDebug() << "Load image failed";
        return;
    }
    pixmap = pixmap.scaled(162, 42, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    this->setFixedSize(pixmap.width(), pixmap.height());
    this->setStyleSheet("QPushButton{border:0px;}");
    this->setIcon(pixmap);
    this->setIconSize(QSize(pixmap.width(), pixmap.height()));
}
void MyPushButton::zoom1(){
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
    animation->setDuration(200);
    animation->setStartValue(QRect(this->x(), this->y(), this->width(), this->height()));
    animation->setEndValue(QRect(this->x(), this->y() + 10, this->width(), this->height()));
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->start();
}
void MyPushButton::zoom2(){
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
    animation->setDuration(200);
    animation->setStartValue(QRect(this->x(), this->y() + 10, this->width(), this->height()));
    animation->setEndValue(QRect(this->x(), this->y(), this->width(), this->height()));
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->start();
}
StartButton::StartButton(QString imgPath):MyPushButton(imgPath){
    QPixmap pixmap;
    bool ret = pixmap.load(imgPath);
    if(!ret){
        qDebug() << "Load image failed";
        return;
    }
    pixmap = pixmap.scaled(162, 42, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    this->setFixedSize(pixmap.width(), pixmap.height());
    this->setStyleSheet("QPushButton{border:0px;}");
    this->setIcon(pixmap);
    this->setIconSize(QSize(pixmap.width(), pixmap.height()));
}