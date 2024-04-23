#pragma once
#include"Engine/GameObject.h"


class ObjectR
	:public GameObject
{
public:
	ObjectR(GameObject* parent);
	~ObjectR();
	int hModel_;

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

