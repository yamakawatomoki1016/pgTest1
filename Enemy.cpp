#include "Enemy.h"
#include <Novice.h>

Enemy::Enemy(int posX, int posY, int speedX, int radius,int hp)
{
	posX_ = posX;
	posY_ = posY;
	speedX_ = speedX;
	radius_ = radius;
	hp_ = hp;
}

void Enemy::Update()
{
	posX_ -= speedX_;

	if (posX_ >= 1280 || posX_ <= 0) {
		speedX_ *= -1;
	}
}

void Enemy::Draw()
{
	Novice::DrawBox(posX_, posY_, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
}
