#include "TestScene.h"
#include"Engine/Image.h"
#include"Engine/Input.h"
#include"Engine/SceneManager.h"

//�R���X�g���N�^
TestScene::TestScene(GameObject * parent)
	: GameObject(parent, "TestScene"), hPict_(-1),hPict2(-1)
{
}

//������
void TestScene::Initialize()
{

	//hPict_ = Image::Load("Image\\Back.jpg");
	//assert(hPict_ >= 0);	
	hPict_ = Image::Load("Image\\STN.png");
	assert(hPict_ >= 0);

	transform_.scale_ = { 6,5,5 };
}

//�X�V
void TestScene::Update()
{
	if (Input::IsKey(DIK_SPACE))
	{
		SceneManager* pS = (SceneManager*)FindObject("SceneManager");
		pS->ChangeScene(SCENE_ID_PLAY);
	}
}

//�`��
void TestScene::Draw()
{

	Image::SetTransform(hPict_, transform_);
	Image::Draw(hPict_);
}

//�J��
void TestScene::Release()
{
}
