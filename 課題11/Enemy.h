#pragma once

class Enemy
{
	int hp;
	float atk;
	int def;

public:
	Enemy();
	void DispHp();
	int Attack(int i);
	int Damage(int i);
	int GetDef();
	bool IsDead();
};