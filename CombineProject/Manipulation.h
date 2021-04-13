#include"Enemy.h"
#pragma once
class Manipulation :public Enemy
{

public:
	int score = 0;
	int collision();
	void play();
	void gameOver();
	void updateScore();
	void instructions();
	int hitBullet();
	void lvl2();
};

