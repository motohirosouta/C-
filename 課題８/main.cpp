#include <iostream>
#include "Status.h"
int main()
{
	int lv;
	Status st;
	while (true)
	{
		std::cout << "レベルを入力⇒";
		std::cin >> lv;
		if (!st.SetLv(lv)) break;
		st.Calc();
		std::cout << " ＨＰ =" << st.GetHp() << "\n";
		std::cout << "攻撃力=" << st.GetAtk() << "\n";
		std::cout << "防御力=" << st.GetDef() << "\n";
	}
	std::cout << "プログラムを終了します\n";
}