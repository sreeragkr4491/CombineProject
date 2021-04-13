#include"Draw.h"
#pragma once

class Player : public Draw
{
public:
	char player[3][5] = { ' ',' ','8',' ',' ',
						'|','8','8','8','|',
						'#','#','#','#','#' };
	static int playerPos;

	void drawPlayer();
	void erasePlayer();
};

