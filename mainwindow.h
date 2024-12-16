//
// Created by asus on 24-12-16.
//

#ifndef ARKNIGHTS_MAINWINDOW_H
#define ARKNIGHTS_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};


#endif //ARKNIGHTS_MAINWINDOW_H
