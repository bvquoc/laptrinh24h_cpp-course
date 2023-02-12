#include "Ve.h"

Ve::Ve()
{
	MaVe = HoTen = "";
	NamSinh = 0;
}

void Ve::Nhap()
{
	cin.ignore();
	cout << "\nNhap ma ve: ";
	getline(cin, MaVe);
	cout << "Nhap ho va ten: ";
	getline(cin, HoTen);
	cout << "Nhap nam sinh: ";
	cin >> NamSinh;
}

Ve::~Ve()
{
	MaVe = HoTen = "";
	NamSinh = 0;
}
