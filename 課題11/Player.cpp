#include"Player.h"
#include<iostream>

//�R���X�g���N�^
Player::Player()
{
	hp = 300;
	atk = 50;
	def = 35;
}

//HP��\��
//�����F�Ȃ�
//�ߒl�F�Ȃ�
void Player::DispHp()
{
	std::cout << "�v���C���[�g�o��" << hp << "\n";
}

//�U��
//�����F�G�̖h���
//�ߒl�F�_���[�W��
int Player::Attack(int i)
{
	printf("�v���C���[�̍U���I�@");
	return atk - i / 2;
}

//�_���[�W���󂯂�iHP�����炷�j
//�����F�󂯂�_���[�W��
//�ߒl�F�Ȃ�
int Player::Damege(int i)
{
	std::cout << "�v���C���[��" << i << "�̃_���[�W\n";
	return hp -= i;
}

//�h��͂��擾(�A�N�Z�X�֐��j
//�����F�Ȃ�
//�ߒl�F�h���
int Player::GetDef()
{
	return def;
}

//�퓬�s�\����
//�����F�Ȃ�
//�ߒl�F�퓬�s�\��true ���̑���false
bool Player::IsDead()
{
	//HP���O�ȉ���������true��Ԃ�
	if (hp <= 0)
		return true;

	//����ȊO�Ȃ�false��Ԃ�
	return false;
}