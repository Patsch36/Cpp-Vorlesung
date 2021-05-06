#include <iostream>
#include "Player.h"

int main() {
	Ball* ball = new Ball;
	Player* player = new Player(5, 7);

	player->pass(6, ball);
}