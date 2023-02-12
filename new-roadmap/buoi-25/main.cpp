#include <iostream>
#include "De.h"
#include "Bo.h"
#include "Cuu.h"
using namespace std;

int main()
{
	De de;
	Bo bo;
	Cuu cuu;
	int x;
	cout << "Nhap so luong bo: ";
	cin >> x;
	while (x--)
		bo.SinhCon();

	cout << "Nhap so luong de: ";
	cin >> x;
	while (x--)
		de.SinhCon();

	cout << "Nhap so luong cuu: ";
	cin >> x;
	while (x--)
		cuu.SinhCon();

	cout << "Tat ca tieng keu trong nong trai: \n";
	if (de.getSoluong() != 0)
	{
		de.TiengKeu();
		cout << "\n";
	}
	if (cuu.getSoluong() != 0)
	{
		cuu.TiengKeu();
		cout << "\n";
	}
	if (bo.getSoluong() != 0)
	{
		bo.TiengKeu();
		cout << "\n";
	}

	cout << "\nDang sinh con...\n";
	x = rand() % 5;
	while (x--)
		bo.SinhCon();
	x = rand() % 5;
	while (x--)
		cuu.SinhCon();
	x = rand() % 5;
	while (x--)
		de.SinhCon();

	cout << "\nSo luong sau khi sinh: \n";
	cout << "\nBo: " << bo.getSoluong();
	cout << "\nDe: " << de.getSoluong();
	cout << "\nCuu: " << cuu.getSoluong();
	cout << "\n\nTong so luong sua: " << bo.LaySua() + de.LaySua() + cuu.LaySua();
}