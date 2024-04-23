#pragma once
#include"Engine/GameObject.h"


class ObjectL
	:public GameObject
{
public:
	ObjectL(GameObject* parent);
	~ObjectL();
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

