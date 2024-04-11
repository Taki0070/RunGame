#include "ClearScene.h"
#include"Engine/Image.h"

ClearScene::ClearScene(GameObject* parent)
	:GameObject(parent,"ClearScene"), hPict_(-1)
{
}

void ClearScene::Initialize()
{
	hPict_ = Image::Load("Image\\clear.png");
	assert(hPict_ >= 0);
	transform_.scale_ = { 4,10,5, };

}

void ClearScene::Update()
{
}

void ClearScene::Draw()
{
	Image::SetTransform(hPict_, transform_);
	Image::Draw(hPict_);
}

void ClearScene::Release()
{
}
