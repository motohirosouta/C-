#include "Calclation.h"
int main()
{
	float a = 42.195f, b = 3.14f;
	//クラスのインスタンスを作成
	Calclation x;
	//メンバ関数を呼び出す
	x.SetA(a); //ａの値を渡す
	x.SetB(b); //ｂの値を渡す
	x.Disp(); //計算して結果を表示
}