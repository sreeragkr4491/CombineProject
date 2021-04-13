#include "Three.h"
#include<iostream>
using namespace std;

void Three::set()
{
	//system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void Three::entry()
{
	int n;
	cout << "\nIt's " << user << "Turn";
	cout << "\nPress the number of field:";
	cin >> n;
	if (n == 1)
	{
		if (matrix[0][0] == '1')
			matrix[0][0] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry();
		}
	}

	else if (n == 2)
	{
		if (matrix[0][1] == '2')
			matrix[0][1] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry();
		}
	}
	else if (n == 3)
	{
		if (matrix[0][2] == '3')
			matrix[0][2] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry();
		}
	}
	else if (n == 4)
	{
		if (matrix[1][0] == '4')
			matrix[1][0] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry();
		}
	}
	else if (n == 5)
	{
		if (matrix[1][1] == '5')
			matrix[1][1] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry();
		}
	}
	else if (n == 6)
	{
		if (matrix[1][2] == '6')
			matrix[1][2] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry();
		}
	}
	else if (n == 7)
	{
		if (matrix[2][0] == '7')
			matrix[2][0] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry();
		}
	}
	else if (n == 8)
	{
		if (matrix[2][1] == '8')
			matrix[2][1] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry();
		}
	}
	else if (n == 9)
	{
		if (matrix[2][2] == '9')
			matrix[2][2] = user;
		else
		{
			cout << "field is already in use try again! " << endl;
			entry();
		}
	}
}

char Three::iswin()
{
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][0] == '0' && matrix[1][1] == '0' && matrix[2][2] == '0')
		return '0';
	return '/';
}

void Three::switchplyr()
{
	if (user == 'X')
		user = 'O';
	else
		user = 'X';
}

