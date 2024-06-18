#include "Circle.h"

//コンストラクタ
Circle::Circle()
{
	PI = 3.14f;

}

//円の面積を求める関数
//引数：半径
//戻値：面積
float Circle::Menseki(float r)
{
	return r * r * PI;
}






