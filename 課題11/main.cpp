#include<iostream>
#include"Player.h"
#include"Enemy.h"

int main()
{
	Player pl;
	Enemy ene;

	int damage;

	//�ǂ��炩��HP��0�ȉ��ɂȂ�܂ŃO���[�v
	for (int turn = 1; ; turn++)
	{
		std::cout << "\n������������" << turn << "�^�[���ځ�����������\n";

		//���ꂼ���HP��\��
		pl.DispHp();
		ene.DispHp();

		//��l���̍U��
		damage = pl.Attack(ene.GetDef());
		ene.Damage(damage);
		if(ene.IsDead()) break;

		//�G�̍U��
		damage = ene.Attack(pl.GetDef());
		pl.Damege(damage);
		if (pl.IsDead()) break;

	}

	std::cout << "�I��\n";
}