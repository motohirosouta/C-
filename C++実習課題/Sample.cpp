/*
   Sample.cpp
   SampleClassクラスの各メンバを定義
*/
//ヘッダをインクルード
#include <iostream>
#include "Sample.h"		//クラスを宣言しているヘッダ

//メンバ関数に値を代入するメンバ関数
void SampleClass::Input() {
	a = 10;
	b = 3;
}

//メンバ変数同士の計算を行うメンバ関数
void SampleClass::Plus() {
	c = a + b;
}

//メンバ変数の内容を出力するメンバ関数
void SampleClass::Disp() {
	std::cout << "変数Cの値は" << c << "\n";
}