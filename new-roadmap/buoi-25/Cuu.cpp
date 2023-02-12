#include "Cuu.h"

void Cuu::SinhCon()
{
	srand(time(NULL));
	sua.push_back(rand() % 6);
}

int Cuu::LaySua()
{
	int tong = 0;
	for (int x : sua)
		tong += x;
	return tong;
}

void Cuu::TiengKeu()
{
	cout << "Cuu keu";
}

int Cuu::getSoluong()
{
	return sua.size();
}
