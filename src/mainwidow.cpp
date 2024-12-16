//
// Created by asus on 24-12-16.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainwidow.h" resolved

#include "../include/mainwidow.h"
#include "../include/ui_mainwidow.h"


mainwidow::mainwidow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::mainwidow) {
    ui->setupUi(this);
}

mainwidow::~mainwidow() {
    delete ui;
}
