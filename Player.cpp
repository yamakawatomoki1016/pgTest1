#include "Player.h"
#include <Novice.h>

Player::Player(int posX, int posY, int speedX, int speedY, int radius)
{

	posX_ = posX;
	posY_ = posY;
	speedX_ = speedX;
	speedY_ = speedY;
	radius_ = radius;

}

void Player::Update(char* keys,char* preKeys,Bullet* bullet)
{
	//移動
	if (keys[DIK_W]) {
		posY_ -= speedX_;
	}
	if (keys[DIK_S]) {
		posY_ += speedX_;
	}
	if (keys[DIK_A]) {
		posX_ -= speedY_;
	}
	if (keys[DIK_D]) {
		posX_ += speedY_;
	}

	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0) {
		bullet->SetIsShot(true);
	}
	if (bullet->GetIsShot() == true) {
		
		bullet->Update();

	}


}

void Player::Draw()
{

	Novice::DrawBox(posX_, posY_, radius_, radius_, 0.0f, WHITE, kFillModeSolid);

}
