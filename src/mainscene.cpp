//
// Created by asus on 24-12-17.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainSence.h" resolved

#include "../include/mainscene.h"
#include "../ui_mainscene.h"




MainScene::MainScene(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainScene) {
    ui->setupUi(this);

    setFixedSize(1280, 720);


    setWindowTitle("Arknights");

    setWindowIcon(QIcon(":/Amy.png"));

    connect(ui->actionquit, &QAction::triggered, [=](){
        this->close();
    });

    StartButton *startBtn = new StartButton(":/start_hover.png");
    startBtn->setParent(this);
    startBtn->move(this->width() * 0.5 - startBtn->width() * 0.5, this->height() * 0.8);
    connect(startBtn, &MyPushButton::clicked,[=](){
        startBtn->zoom1();
        startBtn->zoom2();
    });


}

void MainScene::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/Start.jpg");
    painter.drawPixmap(0, 0, this->width(), this->height(), pix);
}
MainScene::~MainScene() {
    delete ui;
}
