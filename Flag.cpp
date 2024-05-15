#include "Flag.h"
#include"Engine/Model.h"
Flag::Flag(GameObject* parent)
	:GameObject(parent,"Flag"),hModel_(-1)
{
}

void Flag::Initialize()
{
	hModel_ = Model::Load("Model\\flag3.fbx");
	assert(hModel_ >= 0);

	transform_.scale_.y =2 ;
	transform_.position_ = { -1.3, 0, 60 };
	SphereCollider* collision = new SphereCollider({ 0, 0, 0 }, -0.5); //　0.1fにしたら小さく　判定
	AddCollider(collision);

	// 背景色、フォント、
	// エフェクト ,
	//残機 → Model表示 for 回す x方向に +iしながら

}

void Flag::Update()
{
	transform_.position_.z -= 0.1f;
}

void Flag::Draw()
{
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void Flag::Release()
{
}

void Flag::OnCollision(GameObject* pTarget)
{
}
