#include "De.h"

void De::SinhCon()
{
	srand(time(NULL));
	sua.push_back(rand() % 11);
}

int De::LaySua()
{
	int tong = 0;
	for (int x : sua)
		tong += x;
	return tong;
}

void De::TiengKeu()
{
	cout << "De keu";
}

int De::getSoluong()
{
	return sua.size();
}
