#include "Bo.h"

void Bo::SinhCon()
{
	srand(time(NULL));
	sua.push_back(rand() % 21);
}

int Bo::LaySua()
{
	int tong = 0;
	for (int x : sua)
		tong += x;
	return tong;
}

void Bo::TiengKeu()
{
	cout << "Bo keu";
}

int Bo::getSoluong()
{
	return sua.size();
}
