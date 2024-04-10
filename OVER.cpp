#include "OVER.h"
#include"Engine/Image.h"
#include"Engine/SceneManager.h"

OVER::OVER(GameObject* parent)
	:GameObject(parent, "OVER"), hPict_(-1)
{

}

void OVER::Initialize()
{
	hPict_ = Image::Load("Image\\OVER2.png");
	assert(hPict_ >= 0);
	transform_.scale_ = { 4,10,5, };
}
//ok
void OVER::Update()
{

}

void OVER::Draw()
{
	Image::SetTransform(hPict_, transform_);
	Image::Draw(hPict_);
}

void OVER::Release()
{
}
