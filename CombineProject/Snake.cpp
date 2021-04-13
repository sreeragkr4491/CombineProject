#include<iostream>
#include<Windows.h>
#include "Snake.h"
using namespace std;

void Snake::configure()
{
	gameover = false;
	d = IDLE;
	snakex = length / 2;
	snakey = height / 2;
	applex = rand() % length;
	appley = rand() % height;
	score = 0;
}

void Snake::set()
{
	const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, coord);


	for (int i = 0; i < length + 1; i++)
	{
		cout << "#";
	}
	cout << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (j == 0)
				cout << "#";
			else if (i == snakey && j == snakex)
				cout << "@";
			else if (i == appley && j == applex)
				cout << "S";
			else
			{
				bool flag = false;
				for (int k = 0; k < ltail; k++)
				{
					if (stailx[k] == j && staily[k] == i)
					{
						cout << "O";
						flag = true;
					}
				}
				if (!flag)
					cout << " ";
			}

			if (j == length - 1)
				cout << "#";
		}
		cout << endl;
	}
	for (int i = 0; i < length + 1; i++)
		cout << "#";
}

void Snake::key()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			d = LEFT;
			break;
		case 's':
			d = DOWN;
			break;
		case 'd':
			d = RIGHT;
			break;
		case 'w':
			d = UP;
			break;
		case 'x':
			gameover = true;
			break;
		default:
			cout << "Invalid Input";
		}
	}
}

void Snake::mechanics()
{

	stailx[0] = snakex;
	staily[0] = snakey;

	swap();

	switch (d)
	{
	case LEFT:
		snakex = snakex - 1;
		break;
	case RIGHT:
		snakex = snakex + 1;
		break;
	case UP:
		snakey = snakey - 1;
		break;
	case DOWN:
		snakey = snakey + 1;
		break;
	default:
		break;
	}
	if (snakex >= length)
		snakex = 0;
	else if (snakex < 0)
		snakex = length - 1;
	if (snakey >= height)
		snakey = 0;
	else if (snakey < 0)
		snakey = height - 1;
	for (int i = 0; i < ltail; i++)
	{
		if (stailx[i] == snakex && staily[i] == snakey)
			gameover = true;
	}
	if (snakex == applex && snakey == appley)
	{
		score = score + 5;
		applex = rand() % length;
		appley = rand() % height;
		ltail++;
	}
	if (score == 20)
	{
		level2();
	}
}

void Snake::swap()
{
	int prevx = stailx[0];
	int prevy = staily[0];
	int prev2x, prev2y;
	for (int i = 1; i < ltail; i++)
	{
		prev2x = stailx[i];
		prev2y = staily[i];
		stailx[i] = prevx;
		staily[i] = prevy;
		prevx = prev2x;
		prevy = prev2y;
	}
}

void Snake::level2()
{

	cout << endl << endl << "here is the level 2" << endl << endl;
	configure();
	while (!gameover)
	{
		set();
		cout << endl;
		cout << "SCORE = " << score + 20 << endl;
		key();
		mechanics();
		Sleep(25);

	}

}

