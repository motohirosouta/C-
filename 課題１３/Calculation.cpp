#include <iostream>
#include"Calculation.h"

void Calclation::SetA(float c) {
	x = c;
}

void Calclation::SetB(float i) {
	y = i;
}

void Calclation::Disp() {
	std::cout << x << "+" << y << "=" << (x + y) << "\n";
	std::cout << x << "-" << y << "=" << (x - y) << "\n";
}