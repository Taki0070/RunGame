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

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//開放
	void Release() override;

	void OnCollision(GameObject* pTarget) override;

};

