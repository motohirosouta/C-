#include<iostream>
#include"Figure.h"

void Figure::SetTeihen(float f)
{
	teihen = f;
}

void Figure::SetTakasa(float f)
{
	takasa = f;
}

void Figure::Disp()
{
	std::cout  <<  "�ʐς�"  <<  menseki  <<  std::endl;
}