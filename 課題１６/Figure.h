#pragma once
#include <iostream>
//基本となる図形クラス
class Figure
{
protected:
	float teihen, takasa, menseki;
public:
	void SetTeihen(float f);
	void SetTakasa(float f);
	void Disp();
};
