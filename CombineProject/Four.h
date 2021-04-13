#pragma once
#include<string>
using namespace std;
class Four
{
	std::string matrix2[4][4] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" ,"10","11","12","13","14","15","16" };
	char user = 'X';
public:
	void set1();
	void entry1();
	string iswin1();
	void switchplyr1();
};

