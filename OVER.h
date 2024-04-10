#pragma once
#include"Engine/GameObject.h"
class OVER
	:public GameObject
{
private:
	int hPict_;

public:
	OVER(GameObject* parent);

	//‰Šú‰»
	void Initialize() override;

	//XV
	void Update() override;

	//•`‰æ
	void Draw() override;

	//ŠJ•ú
	void Release() override;
};

