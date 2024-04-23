#include "ObjectR.h"
#include"Engine/Model.h"
#include"Engine/Collider.h"

ObjectR::ObjectR(GameObject* parent)
	:GameObject(parent, "Object"), hModel_(-1)
{
}

ObjectR::~ObjectR()
{
}

void ObjectR::Initialize()
{
	hModel_ = Model::Load("Model\\STER.fbx");
	assert(hModel_ >= 0);
	SphereCollider* collision = new SphereCollider({ 0, 0, 0 }, -0.4); //�@0.1f�ɂ����珬�����@����
	AddCollider(collision);//�����蔻��
	transform_.scale_.x = 1.5f;//�X�P�[��
	transform_.scale_.y = 1.5f;
	transform_.position_ = { 1.2, 0.5, 10 };

	float z = (float)rand() / RAND_MAX;
	transform_.position_.z = 50.0 * (z * 5.0);
}

void ObjectR::Update()
{//�I�u�W�F�N�g���Ȃ�������
	transform_.position_.z -= 0.5;

}

void ObjectR::Draw()
{
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void ObjectR::Release()
{
}

void ObjectR::OnCollision(GameObject* pTarget)
{

}
