#pragma once
#include"Engine/GameObject.h"
#include"Object.h"

class PlayScene
	:public GameObject
{
public:
	
	PlayScene(GameObject* parent);
	int ObjectNum{ 20 };

		//������
		void Initialize() override;

		//�X�V
		void Update() override;

		//�`��
		void Draw() override;

		//�J��
		void Release() override;

		void DescObject();//{ ObjectNum--; }
		bool IsObjectLeft(); //{ return ObjectNum>0; }
		int GetObjectNum();///{ return objectNum; }
};

