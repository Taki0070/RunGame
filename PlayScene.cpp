#include "PlayScene.h"
#include"Player.h"
#include "Object.h"
#include"ObjectR.h"
#include"ObjectL.h"
#include"Flag.h"
#include"Stage.h"
//�R���X�g���N�^

PlayScene::PlayScene(GameObject* parent)
	: GameObject(parent, "PlayScene")
{
}

//������
void PlayScene::Initialize()
{
	Instantiate<Stage>(this);
	for (int i = 0; i < ObjectNum; i++)
	{
		Instantiate<Object>(this);
		Instantiate<ObjectR>(this);
		Instantiate<ObjectL>(this);
	}

	Instantiate<Flag>(this);
	Instantiate<Player>(this);

}

//�X�V
void PlayScene::Update()
{
}

//�`��
void PlayScene::Draw()
{
}

//�J��
void PlayScene::Release()
{
}

void PlayScene::DescObject()
{
	ObjectNum--;
}

bool PlayScene::IsObjectLeft()
{
	return ObjectNum > 0;
}

int PlayScene::GetObjectNum()
{
	return ObjectNum;
}


