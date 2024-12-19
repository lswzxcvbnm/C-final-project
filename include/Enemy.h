//
// Created by asus on 24-12-16.
//

#ifndef ARKNIGHTS_ENEMY_H
#define ARKNIGHTS_ENEMY_H
#include "Figure.h"

enum EnemyType{
    Bug_Type,
    Soldier_Type
};
enum EnemyStatus{
    MOVE,
    ATTACK
};

class Enemy :public Figure{
protected:
    float moveSpeed;
    EnemyStatus status = MOVE;
public:
    Enemy(int x, int y, int atk, int def, int hp, float moveSpeed);
    virtual void advance();
};
class Bug: public Enemy{
private:
    EnemyType type = Bug_Type;
public:
    Bug(int x, int y, int atk, int def, int hp, float moveSpeed);
    void advance() override;
};
class Soldier: public Enemy{
private:
    EnemyType type = Soldier_Type;
public:
    Soldier(int x, int y, int atk, int def, int hp, float moveSpeed);
    void advance() override;
};


#endif //ARKNIGHTS_ENEMY_H
