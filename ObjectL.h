#pragma once
#include"Engine/GameObject.h"


class ObjectL
	:public GameObject
{
public:
	ObjectL(GameObject* parent);
	~ObjectL();
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

