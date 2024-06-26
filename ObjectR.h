#pragma once
#include"Engine/GameObject.h"


class ObjectR
	:public GameObject
{
public:
	ObjectR(GameObject* parent);
	~ObjectR();
	int hModel_;

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

