#pragma once
#include "Object.h"
#include "Enemy.h"

class Bullet : public Object
{
public:
	Bullet(int posX,int posY,int speedY,int radius);

	void Update();
	void Draw();
	void SetIsShot(bool isShot) { isShot_ = isShot; }
	bool GetIsShot() { return isShot_; }
	int GetPosY() { return posY_; }
	int GetPosX() { return posX_; }
	int GetSpeedY() { return speedY_; }
	void SetPosY(int posY) { posY_ = posY; }

	Enemy* enemy;
private:
	bool isShot_ = false;
};

