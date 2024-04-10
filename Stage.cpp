#include "Stage.h"
#include"Engine/Model.h"
#include"Engine/Camera.h"

Stage::Stage(GameObject* parent)
	:GameObject(parent,"Stage"),hModel_(-1)
{
}

void Stage::Initialize()
{
	hModel_ = Model::Load("Model\\douro.fbx");
	assert(hModel_ >= 0);
	transform_.scale_.z += 8;
	transform_.position_ = { -1.3,0,-1 };

	Camera::SetPosition({ 0, 2, -10 }); 
	Camera::SetTarget({ 0, 0, 6.5 });

	// 道路、キャラ (出現済み
	// �@キャラの横移動(済み（仮) )
	// �A障害物の配置、手前移動   (□ pos.-z していく　)
	//                            �Bのあと→ □ ランダム配置 (何個かのposを用意) □ 画面外削除　
	// �Bキャラ＆障害物の当たり判定
	//  →�@当たったら点滅（一時的に色が変わる）
	//  　�Aすり抜ける（障害物を消す[可]） もしくは　[GameOver] 画面に移動
	//    �Bゲージの追加
	// 〇タイトル、pose..etc
}

void Stage::Update()
{
}

void Stage::Draw()
{
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void Stage::Release()
{
}
