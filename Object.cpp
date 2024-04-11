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
	isAlive_ = true;

	transform_.scale_.x = 0.8f;
	transform_.position_ = {-0.1, 0, 10 };//座標を決めないと当たり判定がおかしい

	//XMVECTOR pos[]{ {-1.3, 0, 10 }, { -0.1, 0, 10 }, { 1.2, 0, 10 } }; //左,中心,右
	

#if 0
	float x = (float)rand() / RAND_MAX;
	x = 2.0f - x;
	transform_.position_.x = 25.0 * (x - 1.0);
	float z = (float)rand() / RAND_MAX;
	z = 2.0 * z;
	transform_.position_.z = 10.0 * (z * 1.0);
#endif 

	

	SphereCollider* collision = new SphereCollider({ 0, 0, 0 }, -0.5); //　0.1fにしたら小さく　判定
	AddCollider(collision);


}

void Object::Update()
{//オブジェクトがなかったら
	transform_.position_.z -= 0.1f;
	//if (FindObject("Ovject") != nullptr)
	//{
	//	transform_.position_ = { -1.3, 0, 10 };
	//	//{ -0.1, 0, 10 }, { 1.2, 0, 10 }
	//}

	//if (transform_.position_.z < -10) {
	//	KillMe();
	//	isAlive_ = false;
	//}
}

void Object::Draw()
{
	//XMFLOAT3 pos[] = { {-1.3, 0, 10 }, { -0.1, 0, 10 }, { 1.2, 0, 10 } };



	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);

	
}

void Object::Release()
{
}

void Object::OnCollision(GameObject* pTarget)
{
	//if (pTarget->GetObjectName() == "Player")
	//{
	//	pTarget->KillMe();
	//	//transform_.position_.z -= 0.2f;
	//}


}
