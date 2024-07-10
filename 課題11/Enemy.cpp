#include <iostream>
#include"Enemy.h"

//コンストラクタ
Enemy::Enemy()
{
	hp = 200;
	atk = 35;
	def = 40;
}

//HPを表示
//引数:なし
//戻値：なし
void Enemy::DispHp()
{
	std::cout << "敵HP＝" << hp << "\n";
}

//攻撃
//引数：プレイヤーの防御力
//戻値：ダメージ量
int Enemy::Attack(int i)
{
	printf("敵の攻撃！　");
	return atk - i / 2;
}

int Enemy::Damage(int i)
{
	std::cout << "プレイヤーは" << i << "のダメージ""\n";
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