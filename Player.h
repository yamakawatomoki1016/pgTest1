#pragma once
#include "Object.h"
#include "bullet.h"

class Player : public Object
{
public:

	//コンストラクタ
	Player(int posX, int posY, int speedX, int speedY, int radius);

	void Update(char* keys, char* preKeys,Bullet* bullet);
	void Draw();

};

