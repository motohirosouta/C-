#include<iostream>
#include"Player.h"
#include"Enemy.h"

int main()
{
	Player pl;
	Enemy ene;

	int damage;

	//どちらかのHPが0以下になるまでグループ
	for (int turn = 1; ; turn++)
	{
		std::cout << "\n＝＝＝＝＝＝" << turn << "ターン目＝＝＝＝＝＝\n";

		//それぞれのHPを表示
		pl.DispHp();
		ene.DispHp();

		//主人公の攻撃
		damage = pl.Attack(ene.GetDef());
		ene.Damage(damage);
		if(ene.IsDead()) break;

		//敵の攻撃
		damage = ene.Attack(pl.GetDef());
		pl.Damege(damage);
		if (pl.IsDead()) break;

	}

	std::cout << "終了\n";
}