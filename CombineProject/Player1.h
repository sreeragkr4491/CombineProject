#include"Draw1.h"
#pragma once

class Player1 : public Draw1
{
public:
	char player[3][5] = { ' ',' ','8',' ',' ',
						'|','8','8','8','|',
						'#','#','#','#','#' };
	static int playerPos;

	void drawPlayer();
	void erasePlayer();
};
