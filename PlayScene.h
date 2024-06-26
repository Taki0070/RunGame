#pragma once
#include"Engine/GameObject.h"
#include"Object.h"

class PlayScene
	:public GameObject
{
public:
	
	PlayScene(GameObject* parent);
	int ObjectNum{ 20 };

		//初期化
		void Initialize() override;

		//更新
		void Update() override;

		//描画
		void Draw() override;

		//開放
		void Release() override;

		void DescObject();//{ ObjectNum--; }
		bool IsObjectLeft(); //{ return ObjectNum>0; }
		int GetObjectNum();///{ return objectNum; }
};

