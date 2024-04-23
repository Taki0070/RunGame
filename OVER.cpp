#include "OVER.h"
#include"Engine/Image.h"
#include"Engine/SceneManager.h"
#include"Engine/Input.h"

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
	if (Input::IsKey(DIK_SPACE))
	{
		SceneManager* pS = (SceneManager*)FindObject("SceneManager");
		pS->ChangeScene(SCENE_ID_TEST);
	}
}

void OVER::Draw()
{
	Image::SetTransform(hPict_, transform_);
	Image::Draw(hPict_);
}

void OVER::Release()
{
}
