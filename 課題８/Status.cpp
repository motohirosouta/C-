#include"Status.h"

//���x���l���󂯎��i�A�N�Z�X�֐��j
bool Status::SetLv(int i)
{
	
	if (i >= 100) {
		lv = 99;
	}
	else {
		lv = i;
	}
	return lv;
}

void Status::Calc()
{
	hp = lv * lv + 50;
	atk = lv * 10;
	def = lv * 9;
}

//hp�l��Ԃ��i�A�N�Z�X�֐��j
int Status::GetHp()
{
	return hp;
}

//�U���͒l��Ԃ��i�A�N�Z�X�֐��j
int Status::GetAtk()
{
	return atk;
}

//�h��͒l��Ԃ��i�A�N�Z�X�֐��j
int Status::GetDef()
{
	return def;
}