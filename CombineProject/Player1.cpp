#include "Player1.h"
using namespace std;

int Player1::playerPos = WIN_WIDTH / 3;

void Player1::drawPlayer()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			getPosi(j + playerPos, i + 43); cout << player[i][j];
		}
	}
}

void Player1::erasePlayer()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			getPosi(j + playerPos, i + 43); cout << " ";
		}
	}

}