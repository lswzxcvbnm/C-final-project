//
// Created by asus on 24-12-16.
//

#include "../include/Figure.h"
Figure::Figure(QString name, int maxHealth, int damage, int defense, int x, int y) {
    this->name = name;
    this->maxHealth = maxHealth;
    this->currentHealth = maxHealth;
    this->damage = damage;
    this->defense = defense;
    this->x = x;
    this->y = y;
}
int Figure::getHp() {
    return currentHealth;
}
void Figure::modifyHp(int val) {
    currentHealth += val;
}
bool Figure::injured() {
    return currentHealth < maxHealth;
}
int Figure::getx() {
    return x;
}
int Figure::gety() {
    return y;
}
