#include<iostream>
#include<conio.h>

#include "Four.h"
using namespace std;

void Four::set1()
{
	//system("cls");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
}

void Four::entry1()
{
	int n;
	cout << endl;
	cout << "It's " << user << "Turn";
	cout << "\nPress the number of field:";
	cin >> n;
	if (n == 1)
	{
		if (matrix2[0][0] == "1")
			matrix2[0][0] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}

	else if (n == 2)
	{
		if (matrix2[0][1] == "2")
			matrix2[0][1] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 3)
	{
		if (matrix2[0][2] == "3")
			matrix2[0][2] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 4)
	{
		if (matrix2[0][3] == "4")
			matrix2[0][3] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 5)
	{
		if (matrix2[1][0] == "5")
			matrix2[1][0] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 6)
	{
		if (matrix2[1][1] == "6")
			matrix2[1][1] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 7)
	{
		if (matrix2[1][2] == "7")
			matrix2[1][2] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 8)
	{
		if (matrix2[1][3] == "8")
			matrix2[1][3] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 9)
	{
		if (matrix2[2][0] == "9")
			matrix2[2][0] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 10)
	{
		if (matrix2[2][1] == "10")
			matrix2[2][1] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 11)
	{
		if (matrix2[2][2] == "11")
			matrix2[2][2] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 12)
	{
		if (matrix2[2][3] == "12")
			matrix2[2][3] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 13)
	{
		if (matrix2[3][0] == "13")
			matrix2[3][0] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 14)
	{
		if (matrix2[3][1] == "14")
			matrix2[3][1] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 15)
	{
		if (matrix2[3][2] == "15")
			matrix2[3][2] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
	else if (n == 16)
	{
		if (matrix2[3][3] == "16")
			matrix2[3][3] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry1();
		}
	}
}

string Four::iswin1()
{
	if (matrix2[0][0] == "X" && matrix2[0][1] == "X" && matrix2[0][2] == "X" && matrix2[0][3] == "X")
		return "X";
	if (matrix2[1][0] == "X" && matrix2[1][1] == "X" && matrix2[1][2] == "X" && matrix2[1][3] == "X")
		return "X";
	if (matrix2[2][0] == "X" && matrix2[2][1] == "X" && matrix2[2][2] == "X" && matrix2[2][3] == "X")
		return "X";
	if (matrix2[0][0] == "X" && matrix2[1][0] == "X" && matrix2[2][0] == "X" && matrix2[3][0] == "X")
		return "X";
	if (matrix2[0][1] == "X" && matrix2[1][1] == "X" && matrix2[2][1] == "X" && matrix2[3][1] == "X")
		return "X";
	if (matrix2[0][2] == "X" && matrix2[1][2] == "X" && matrix2[2][2] == "X" && matrix2[3][2] == "X")
		return "X";
	if (matrix2[0][3] == "X" && matrix2[1][2] == "X" && matrix2[2][1] == "X" && matrix2[3][0] == "X")  //cross diagonal
		return "X";
	if (matrix2[0][0] == "X" && matrix2[1][1] == "X" && matrix2[2][2] == "X" && matrix2[3][3] == "X")  //diagonal
		return "X";

	if (matrix2[0][0] == "O" && matrix2[0][1] == "O" && matrix2[0][2] == "O" && matrix2[0][3] == "O")
		return "O";
	if (matrix2[1][0] == "O" && matrix2[1][1] == "O" && matrix2[1][2] == "O" && matrix2[1][3] == "O")
		return "O";
	if (matrix2[2][0] == "O" && matrix2[2][1] == "O" && matrix2[2][2] == "O" && matrix2[2][3] == "O")
		return "O";
	if (matrix2[0][0] == "O" && matrix2[1][0] == "O" && matrix2[2][0] == "O" && matrix2[3][0] == "O")
		return "O";
	if (matrix2[0][1] == "O" && matrix2[1][1] == "O" && matrix2[2][1] == "O" && matrix2[3][1] == "O")
		return "O";
	if (matrix2[0][2] == "O" && matrix2[1][2] == "O" && matrix2[2][2] == "O" && matrix2[3][2] == "O")
		return "O";
	if (matrix2[0][3] == "O" && matrix2[1][2] == "O" && matrix2[2][1] == "O" && matrix2[3][0] == "O") //cross diagonal
		return "O";
	if (matrix2[0][0] == "0" && matrix2[1][1] == "0" && matrix2[2][2] == "0" && matrix2[3][3] == "0") //diagonal
		return "0";
	return "/";
}

void Four::switchplyr1()
{
	if (user == 'X')
		user = 'O';
	else
		user = 'X';
}