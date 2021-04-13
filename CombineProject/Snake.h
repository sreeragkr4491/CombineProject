#pragma once
#include<iostream>
#include<conio.h>
#include <windows.h>
class Snake
{
public:
	bool gameover;
	const int length = 80;
	const int height = 40;
	int snakex, snakey, applex, appley;
	int stailx[50], staily[50], ltail, score;

	enum dir { IDLE = 0, LEFT, RIGHT, UP, DOWN };


	COORD coord = { 0, 0 };

	dir d;

	void configure();
	void set();
	void key();
	void mechanics();
	void swap();
	void level2();
};

