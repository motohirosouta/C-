#include<iostream>
#include"Circle.h"

int main()
{
	float m;  //面積
	float r = 5.0f; //半径

	Circle c; //クラスのインスタンスを作る

	m = c.Menseki(r);
	std::cout << "半径" << r << "の面積は" << m << "\n";
}