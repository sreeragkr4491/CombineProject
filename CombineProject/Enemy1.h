#include"Bullet1.h"
#pragma once
class Enemy1 : public Bullet1
{
public:
	int enemyY[4];
	int enemyX[4];
	int enemyFlag[4];

	void genEnemy(int index);
	void drawEnemy(int index);
	void eraseEnemy(int index);
	void resetEnemy(int index);

};

