#include<iostream>
#include"Guess.h"

//#include"Draw.h"
#include"Manipulation.h"

//#include"Draw1.h"
#include"Manip2.h"

#include"Snake.h"

#include"Three.h"
#include "Four.h"
using namespace std;
int ch;

void main()
{
loop:system("cls");
	cout << "-----------------------------------------------------------\n" << endl;
	cout << "***************WELCOME TO THE FLASH GAMES******************\n" << endl;
	cout << "-----------------------------------------------------------\n" << endl;
	cout << "1. Guess the Word Game" << endl;
	cout << "2. Shooting Game" << endl;
	cout << "3. Car Racing Game" << endl;
	cout << "4. Snake Game" << endl;
	cout << "5. Tic-Tac-Toe Game\n" << endl;
	cout << "Choose the game:" << endl;
	cin >> ch;
	switch (ch)
	{
	case 1:
	{
		Guess g;

		cout << "Press 1. Start 2.Instruction 3.Go Back" << endl;
		cin >> g.ch;
		if (g.ch == 1)
		{
			cout << "***************WELCOME TO GUESS THE WORD GAME******************" << endl;
			cout << "\n\nEach letter is represented by a star.";
			cout << "\n\nEvery word contains 5 letters.";
			cout << "\n\nYou have only one try and guess the word.";
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "\nYou can quit anytime by entering : q \n\n";
			g.check();
		}
		else if (g.ch == 2)
		{
			cout << "This is a c++ word guessing game. In this game a 5 digit random word and a question will be displayed to the screen. Two positions will be kept blank & Then user will guesses that word. If he/she guesses the correct word then he/she will get a 10 point." << endl;
			cout << endl;

			cout << "***************WELCOME TO GUESS THE WORD GAME******************" << endl;
			cout << "\n\nEach letter is represented by a star.";
			cout << "\n\nEvery word contains 5 letters.";
			cout << "\n\nYou have only one try and guess the word.";
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "\nYou can quit anytime by entering : q \n\n";
			g.check();
		}
		else if (g.ch == 3)
		{
			cout << "Your score=" << g.score << endl;
			goto loop;
		}
		//return 0;

	}
	case 2:
	{
		//Draw p;
		Manipulation m;
		do {//10. do
			system("cls");// 11.
			m.getPosi(10, 5); cout << " -------------------------- ";//12
			m.getPosi(10, 6); cout << " |      Shooting Game      | ";
			m.getPosi(10, 7); cout << " --------------------------";
			m.getPosi(10, 9); cout << "1. Start Game";
			m.getPosi(10, 10); cout << "2. Read  Instructions";
			m.getPosi(10, 11); cout << "3. Back to Main Menu";
			m.getPosi(10, 13); cout << "Select option: ";
			char op = _getch();

			if (op == '1') m.play();
			else if (op == '2') m.instructions();
			else if (op == '3') goto loop;

		} while (1);

		_getch();

	}
	case 3:
	{
		//Draw1 p1;
		Manip2 m1;
		do {//10. do
			system("cls");// 11.
			m1.getPosi(10, 5); cout << " ----------------------------- ";//12
			m1.getPosi(10, 6); cout << " |      Car Racing Game      | ";
			m1.getPosi(10, 7); cout << " ----------------------------- ";
			m1.getPosi(10, 9); cout << "1. Start Game";
			m1.getPosi(10, 10); cout << "2. Read  Instructions";
			m1.getPosi(10, 11); cout << "3. Back to Main Menu";
			m1.getPosi(10, 13); cout << "Select option: ";
			char op = _getch();

			if (op == '1') m1.play();
			else if (op == '2') m1.instructions();
			else if (op == '3') goto loop;

		} while (1);

		_getch();

	}
	case 4:
	{
		Snake s;
		int choice;
		cout << "\nInput \n1 - START, 2 - Next Level, 3 - Go Back.\nSelect any one" << endl;
		cin >> choice;
		if (choice == 1)
		{
			s.configure();
			while (!(s.gameover))
			{
				s.set();
				cout << endl;
				cout << "SCORE = " << s.score << endl;
				s.key();
				s.mechanics();
				Sleep(40);

			}
		}
		else if (choice == 2)
		{
			s.level2();

		}

		else if (choice == 3)
		{
			goto loop;
		}

		else
			cout << "wrong input" << endl;
		//return 0;
	}

	case 5:
	{
		int choice;
		int n;
		Three t;
		Four f;
		cout << "************WELCOME TIC TOC TOE GAME*************\n\n\n";
		n = 0;
		cout << "Press 1.3X3 2.4X4 3.Go Back" << endl;
		cin >> choice;
		if (choice == 1)
		{
			t.set();
			while (1)
			{
				n++;
				t.entry();
				t.set();
				if (t.iswin() == 'X')
				{
					cout << "X WINS !!!!" << endl;
					break;
				}
				else if (t.iswin() == 'O')
				{
					cout << "O WINS !!!!" << endl;
					break;
				}
				else if (t.iswin() == '/' && n == 9)
				{
					cout << " DRAW !!!!" << endl;
					break;
				}
				t.switchplyr();
			}
			system("pause");
		}
		if (choice == 2)
		{

			f.set1();
			while (1)
			{
				n++;
				f.entry1();
				f.set1();
				if (f.iswin1() == "X")
				{
					cout << "X WINS !!!!" << endl;
					break;
				}
				else if (f.iswin1() == "O")
				{
					cout << "O WINS !!!!" << endl;
					break;
				}
				else if (f.iswin1() == "/" && n == 16)
				{
					cout << " IT'S A DRAW !!!!" << endl;
					break;
				}
				f.switchplyr1();
			}
			system("pause");
		}
		if (choice == 3)
		{
			goto loop;
		}
		//return 0;

	}
	default:
		cout << "\nINVALID CHOICE!!!!!!!!\n\n";
	}


}