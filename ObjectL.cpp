#include "ObjectL.h"
#include"Engine/Model.h"

ObjectL::ObjectL(GameObject* parent)
	:GameObject(parent,"Object"),hModel_(-1)
{
}

ObjectL::~ObjectL()
{
}

void ObjectL::Initialize()
{
	hModel_ = Model::Load("Model\\STER.fbx");
	assert(hModel_ >= 0);
	SphereCollider* collision = new SphereCollider({ 0, 0, 0 }, -0.4); //　0.1fにしたら小さく　判定
	AddCollider(collision);//当たり判定
	transform_.scale_.x = 1.5f;//スケール
	transform_.scale_.y = 1.5f;
	transform_.position_ = { -1.3, 0, 10 };

	float z = (float)rand() / RAND_MAX;
	transform_.position_.z = 57.0 * (z * 5.0);
}

void ObjectL::Update()
{
	transform_.position_.z -= 0.8;
}

void ObjectL::Draw()
{
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void ObjectL::Release()
{
}

void ObjectL::OnCollision(GameObject* pTarget)
{
}
