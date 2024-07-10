#include <iostream>
#include"Enemy.h"

//�R���X�g���N�^
Enemy::Enemy()
{
	hp = 200;
	atk = 35;
	def = 40;
}

//HP��\��
//����:�Ȃ�
//�ߒl�F�Ȃ�
void Enemy::DispHp()
{
	std::cout << "�GHP��" << hp << "\n";
}

//�U��
//�����F�v���C���[�̖h���
//�ߒl�F�_���[�W��
int Enemy::Attack(int i)
{
	printf("�G�̍U���I�@");
	return atk - i / 2;
}

int Enemy::Damage(int i)
{
	std::cout << "�v���C���[��" << i << "�̃_���[�W""\n";
	return hp -= i;
}

int Enemy::GetDef()
{
	return def;
}

bool Enemy::IsDead()
{
	if (hp <= 0)
		return true;

	return false;
}