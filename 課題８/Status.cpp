#include"Status.h"

//レベル値を受け取る（アクセス関数）
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

//hp値を返す（アクセス関数）
int Status::GetHp()
{
	return hp;
}

//攻撃力値を返す（アクセス関数）
int Status::GetAtk()
{
	return atk;
}

//防御力値を返す（アクセス関数）
int Status::GetDef()
{
	return def;
}