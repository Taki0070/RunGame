#pragma once
#include"Engine/GameObject.h"

class life
	:public GameObject
{
private:
	int hModel_;
	int Li{ 3 };
public:
	life(GameObject* parent);
    void Initialize() override;
	void Update();
	void Draw();
	void Release() override;
	void OnCollision(GameObject* pTarget) override;
};

