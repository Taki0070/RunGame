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

	// ���H�A�L���� (�o���ς�
	// �@�L�����̉��ړ�(�ς݁i��) )
	// �A��Q���̔z�u�A��O�ړ�   (�� pos.-z ���Ă����@)
	//                            �B�̂��Ɓ� �� �����_���z�u (������pos��p��) �� ��ʊO�폜�@
	// �B�L��������Q���̓����蔻��
	//  ���@����������_�Łi�ꎞ�I�ɐF���ς��j
	//  �@�A���蔲����i��Q��������[��]�j �������́@[GameOver] ��ʂɈړ�
	//    �B�Q�[�W�̒ǉ�
	// �Z�^�C�g���Apose..etc
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
