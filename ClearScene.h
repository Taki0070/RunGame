#pragma once
#include"Engine/GameObject.h"
class ClearScene
	:public GameObject
{
private:
	int hPict_;

public:
	ClearScene(GameObject* parent);

	//������
	void Initialize() override;

	//�X�V
	void Update() override;

	//�`��
	void Draw() override;

	//�J��
	void Release() override;
};
