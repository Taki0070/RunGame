#pragma once
#include"Engine/GameObject.h"
class Player
	:public GameObject
{
private:
	int hModel_;
	float speed_;
	


public:
	Player(GameObject* parent);

	//‰Šú‰»
	void Initialize() override;

	//XV
	void Update() override;

	//•`‰æ
	void Draw() override;

	//ŠJ•ú
	void Release() override;

	void OnCollision(GameObject* pTarget) override;

};

