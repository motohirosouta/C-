#pragma once
class Status
{
	//�����o�֐�
	int lv, hp, atk, def; //�e�p�����[�^

public:
	void SetLv(int i);
	void Calc();
	int GetHp();
	int GetAtk();
	int GetDef();
};