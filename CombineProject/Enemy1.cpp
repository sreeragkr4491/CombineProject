#include "Enemy1.h"
using namespace std;


void Enemy1::genEnemy(int index)
{
	enemyX[index] = 3 + rand() % (WIN_WIDTH - 10);

}

void Enemy1::drawEnemy(int index)
{
	if (enemyFlag[index] == true) {
		getPosi(enemyX[index], enemyY[index]);   cout << ".&&.";
		getPosi(enemyX[index], enemyY[index] + 1); cout << "9999";
		getPosi(enemyX[index], enemyY[index] + 2); cout << "****";
		getPosi(enemyX[index], enemyY[index] + 3); cout << ".&&.";

	}

}

void Enemy1::eraseEnemy(int index)
{
	if (enemyFlag[index] == true) {
		getPosi(enemyX[index], enemyY[index]);   cout << "    ";
		getPosi(enemyX[index], enemyY[index] + 1); cout << "    ";
		getPosi(enemyX[index], enemyY[index] + 2); cout << "    ";
		getPosi(enemyX[index], enemyY[index] + 3); cout << "    ";

	}
}

void Enemy1::resetEnemy(int index)
{
	eraseEnemy(index);
	enemyY[index] = 4;
	genEnemy(index);
}
