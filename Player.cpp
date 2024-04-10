#include "Player.h"
#include"Engine/SceneManager.h"
#include"Engine/Model.h"
#include"Engine/Input.h"


namespace {
	const float PLAYER_MOVE_SPEED{ 0.1f };
}

Player::Player(GameObject* parent)
	:GameObject(parent,"Player"),hModel_(-1),speed_(PLAYER_MOVE_SPEED)
{

}

void Player::Initialize()
{
	hModel_ = Model::Load("Model\\Player.fbx");
	assert(hModel_ >= 0);
	transform_.position_ = { 0,0,-6 };
	SphereCollider* collision = new SphereCollider({ 0, 0, 0 }, 1.0f);
	AddCollider(collision);

}

void Player::Update()
{
	if (Input::IsKey(DIK_LEFT))//¶
	{
		transform_.position_ = {-1,0,-6};
	}

	else if (Input::IsKey(DIK_RIGHT))
	{
		transform_.position_ = { 1,0,-6 };
	}
	else{
		transform_.position_ = { 0,0,-6 };//’†‰›
	}
	


}

void Player::Draw()
{
	Model::SetTransform(hModel_,transform_);
	Model::Draw(hModel_);
}

void Player::Release()
{
}

void Player::OnCollision(GameObject* pTarget)
{
	if (pTarget->GetObjectName() == "Object")
	{
		SceneManager* pS = (SceneManager*)FindObject("SceneManeger");
		pS->ChangeScene(SCENE_ID_hOVER);


			//transform_.rotate_.y += 24.0f;
		
		//transform_.scale_.y += 1; ”»’è‚Íok
	}
}
