#include "Object.h"
#include"Engine/Model.h"
#include"Engine/Collider.h"

Object::Object(GameObject* parent)
	:GameObject(parent,"Object"),hModel_(-1)
{
}

void Object::Initialize()
{
	hModel_ = Model::Load("Model\\box.fbx");
	assert(hModel_ >= 0);
	//¶Šñ‚è s 
	transform_.scale_.x = 0.8f;
	transform_.position_ = { -1.3, 0, 10 };

	SphereCollider* collision = new SphereCollider({ 0, 0, 0 }, 0.1f); //@0.1f‚É‚µ‚½‚ç¬‚³‚­@”»’è
	AddCollider(collision);


}

void Object::Update()
{
	transform_.position_.z -= 0.1f;
}

void Object::Draw()
{
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void Object::Release()
{
}

void Object::OnCollision(GameObject* pTarget)
{
	if (pTarget->GetObjectName() == "Player")
	{
		transform_.position_.z -= 0.2f;
	}
}
