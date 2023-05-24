#include "Bullet.h"
#include <Novice.h>


Bullet::Bullet(int posX, int posY, int speedY, int radius)
{
	posX_ = posX;
	posY_ = posY;
	speedY_ = speedY;
	radius_ = radius;
}

void Bullet::Update()
{
	if (posX_ <= enemy->GetPosX() + enemy->GetRadius() &&
		enemy->GetPosX() <= posX_ + radius_ &&
		posY_ <= enemy->GetPosY() + enemy->GetRadius() &&
		enemy->GetPosY() <= posY_ + radius_) {
		
		enemy->SetHp(-1);

	}
	if (isShot_ == true) {
		posY_ -= speedY_;
	}
	if (posY_ <= -10) {
		isShot_ = false;
	}
}

void Bullet::Draw()
{
	Novice::DrawBox(posX_, posY_, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
}
