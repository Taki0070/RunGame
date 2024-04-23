#include "Object.h"
#include"Engine/Model.h"
#include"Engine/Collider.h"

Object::Object(GameObject* parent)
	:GameObject(parent,"Object"),hModel_(-1)
{
}

Object::~Object()
{
}

void Object::Initialize()
{
	hModel_ = Model::Load("Model\\box.fbx");
	assert(hModel_ >= 0);
	isAlive_ = true;
	SphereCollider* collision = new SphereCollider({ 0, 0, 0 }, -0.5); //　0.1fにしたら小さく　判定
	AddCollider(collision);//当たり判定
	transform_.scale_.x = 0.8f;//スケール
	transform_.position_= { -0.1, 0, 10 };

	//transform_.position_ = {-0.1, 0, 10 };//座標を決めないと当たり判定がおかしい
	//XMVECTOR pos[] = { {-1.3, 0, 10 }, { -0.1, 0, 10 }, { 1.2, 0, 10 } }; //左,中心,右

#if 0
	float x = (float)rand() / RAND_MAX;
	x = 2.0f - x;
	transform_.position_.x = 25.0 * (x - 1.0);
	float z = (float)rand() / RAND_MAX;
	z = 2.0 * z;
	transform_.position_.z = 10.0 * (z * 1.0);
#endif 
	float z = (float)rand() / RAND_MAX;
	transform_.position_.z = 50.0 * (z * 5.0);


	/*Transform kai;
	Transform Left;
	Left.position_ = { -1.3, 0, 10 };
	Transform Right;
	Right.position_ = { 1.2, 0, 10 };
	Transform None;
	None.position_ = { -0.1, 0, 10 };
	for (int i = 0; i < 3; i++) {

		kai = Left;
		Left = Right;
		Right = kai;

	}*/

	

}

void Object::Update()
{//オブジェクトがなかったら
	transform_.position_.z -= 0.2f;
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
	/*Transform Left;
	Left.position_ = { -1.3, 0, 10 };
	Transform Right;
	Right.position_ = { 1.2, 0, 10 };
	Transform None;
	None.position_ = { -0.1, 0, 10 };*/
	//画面外に行ったらdelete と ik++
	/*for (int ik = 0; ik  < 5; ik++)
	{*/
	//	switch (ik)
	//	{
	//	case 1:	
	//	    transform_.position_ = { -1.3, 0, 10 };
	//		Model::SetTransform(hModel_, transform_);
	//		Model::Draw(hModel_);
	//		break;
	//	case 2:
	//		transform_.position_ = { -0.1, 0, 20 };
	//		Model::SetTransform(hModel_, transform_);
	//		Model::Draw(hModel_);
	//		break;
	//	case 3:
	//	//	transform_.position_ = { 1.2, 0, 30 };
	//		Model::SetTransform(hModel_, transform_);
	//		Model::Draw(hModel_);
	//		break;
	//	case 4:
	//	//	transform_.position_ = { -1.3, 0, 40 };
	//		Model::SetTransform(hModel_, transform_);
	//		Model::Draw(hModel_);
	//		break;
	//	case 5:
	//		//transform_.position_ = { 1.2, 0, 45 };
	//		Model::SetTransform(hModel_, transform_);
	//		Model::Draw(hModel_);
	//		break;
	//	default:
	//		break;
	//	}
	//}

	

	Model::SetTransform(hModel_,transform_ );
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
