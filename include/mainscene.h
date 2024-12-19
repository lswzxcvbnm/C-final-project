//
// Created by asus on 24-12-17.
//

#ifndef ARKNIGHTS_MAINSCENE_H
#define ARKNIGHTS_MAINSCENE_H

#include <QMainWindow>
#include <Qpainter>
#include "MyPushButton.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainScene; }
QT_END_NAMESPACE

class MainScene : public QMainWindow {
Q_OBJECT

public:
    explicit MainScene(QWidget *parent = nullptr);

    ~MainScene() override;

    void paintEvent(QPaintEvent *event);

private:
    Ui::MainScene *ui;
};


#endif //ARKNIGHTS_MAINSCENE_H
