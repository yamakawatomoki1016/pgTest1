#pragma once
#include "Object.h"
#include "bullet.h"
#include"Enemy.h"
class Player : public Object
{
public:
	Enemy* enemy;

	//コンストラクタ
	Player(int posX, int posY, int speedX, int speedY, int radius);
	int GetPosX() { return posX_; }
	int GetPosY() { return posY_; }

	void Update(char* keys, char* preKeys, Bullet* bullet);
	void Draw();

};