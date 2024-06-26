#pragma once
#include"Engine/GameObject.h"


class ObjectL
	:public GameObject
{
public:
	ObjectL(GameObject* parent);
	~ObjectL();
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

