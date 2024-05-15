#include "life.h"
#include"Engine/Model.h"


life::life(GameObject* parent)
	:GameObject(parent, "Life"), hModel_(-1)
{
}

void life::Initialize()
{
	hModel_ = Model::Load("Model\\life.fbx");
	assert(hModel_ >= 0);

	transform_.scale_.x = 1;
	transform_.position_ = { -2, 3, 1 };
	
}

void life::Update()
{

}

void life::Draw()
{
	/*for (int i = 0; i < 3; i++)
	{
		
		transform_.position_.x = -5+i;
		Model::SetTransform(hModel_, transform_);
		Model::Draw(hModel_);

	}*/
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void life::Release()
{
}

void life::OnCollision(GameObject* pTarget)
{
}
