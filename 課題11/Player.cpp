#include"Player.h"
#include<iostream>

//コンストラクタ
Player::Player()
{
	hp = 300;
	atk = 50;
	def = 35;
}

//HPを表示
//引数：なし
//戻値：なし
void Player::DispHp()
{
	std::cout << "プレイヤーＨＰ＝" << hp << "\n";
}

//攻撃
//引数：敵の防御力
//戻値：ダメージ量
int Player::Attack(int i)
{
	printf("プレイヤーの攻撃！　");
	return atk - i / 2;
}

//ダメージを受ける（HPを減らす）
//引数：受けるダメージ量
//戻値：なし
int Player::Damege(int i)
{
	std::cout << "プレイヤーは" << i << "のダメージ\n";
	return hp -= i;
}

//防御力を取得(アクセス関数）
//引数：なし
//戻値：防御力
int Player::GetDef()
{
	return def;
}

//戦闘不能判定
//引数：なし
//戻値：戦闘不能＝true その他＝false
bool Player::IsDead()
{
	//HPが０以下だったらtrueを返す
	if (hp <= 0)
		return true;

	//それ以外ならfalseを返す
	return false;
}