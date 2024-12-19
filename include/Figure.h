//
// Created by asus on 24-12-16.
//
#include <bits/stdc++.h>
#include <QString>
using namespace std;

#ifndef ARKNIGHTS_FIGURE_H
#define ARKNIGHTS_FIGURE_H


class Figure {
protected:
    QString name;
    int maxHealth;
    int currentHealth;
    int damage;
    int defense;
    int x;
    int y;
public:
    Figure(QString name, int maxHealth, int damage, int defense, int x, int y);
    int getHp();
    void modifyHp(int val);
    bool injured();
    int getx();
    int gety();
};


#endif //ARKNIGHTS_FIGURE_H
