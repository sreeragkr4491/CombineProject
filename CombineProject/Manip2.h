#include"Enemy1.h"
#pragma once
class Manip2 :public Enemy1
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

