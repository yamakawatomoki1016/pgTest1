#pragma once
#include "Object.h"

class Enemy : public Object
{
public:
	Enemy(int posX,int posY,int speedX,int radius,int hp);
	void Update();
	void Draw();

	int GetPosX() { return posX_; }
	int GetPosY() { return posY_; }
	int GetRadius() { return radius_; };
	void SetHp(int Hp) { hp_ = Hp; };
};

