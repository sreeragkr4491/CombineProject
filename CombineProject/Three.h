#pragma once
class Three
{

	protected:
		char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
		char user = 'X';
		int n;
	public:
		void set();
		void entry();
		char iswin();
		void switchplyr();
};

