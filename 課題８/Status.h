#pragma once
class Status
{
	//メンバ関数
	int lv, hp, atk, def; //各パラメータ

public:
	bool SetLv(int i);
	void Calc();
	int GetHp();
	int GetAtk();
	int GetDef();
};