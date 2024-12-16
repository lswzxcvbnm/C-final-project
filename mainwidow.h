//
// Created by asus on 24-12-16.
//

#ifndef ARKNIGHTS_MAINWIDOW_H
#define ARKNIGHTS_MAINWIDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class mainwidow; }
QT_END_NAMESPACE

class mainwidow : public QMainWindow {
Q_OBJECT

public:
    explicit mainwidow(QWidget *parent = nullptr);

    ~mainwidow() override;

private:
    Ui::mainwidow *ui;
};


#endif //ARKNIGHTS_MAINWIDOW_H
