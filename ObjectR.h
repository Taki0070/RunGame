#pragma once
#include"Engine/GameObject.h"


class ObjectR
	:public GameObject
{
public:
	ObjectR(GameObject* parent);
	~ObjectR();
	int hModel_;

	//������
	void Initialize() override;

	//�X�V
	void Update() override;

	//�`��
	void Draw() override;

	//�J��
	void Release() override;

	void OnCollision(GameObject* pTarget) override;

};

