#include <iostream>
#include "VeTronGoi.h"
#include "VeTungPhan.h"
using namespace std;

signed main()
{
	int n;
	cout << "Nhap so ve: ";
	cin >> n;
	Ve** a = new Ve * [n];
	enum { VE_TRON_GOI, VE_TUNG_PHAN };
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap ve " << i + 1 << ":";
		int LoaiVe;
		cout << "\n[" << VE_TRON_GOI << "] Ve tron goi.";
		cout << "\n[" << VE_TUNG_PHAN << "] Ve tung phan.";
		cout << "\nNhap loai ve: ";
		cin >> LoaiVe;
		while (LoaiVe != VE_TRON_GOI && LoaiVe != VE_TUNG_PHAN) {
			cout << "Nhap lai: ";
			cin >> LoaiVe;
		}

		if (LoaiVe == VE_TUNG_PHAN)
			a[i] = new VeTungPhan;
		else
			a[i] = new VeTronGoi;
		a[i]->Nhap();
	}

	// Tong tien ve
	int Tongtien = 0;
	for (int i = 0; i < n; i++)
		Tongtien += a[i]->Tinhtien();
	cout << "\n\nTong tien ma cong vien thu duoc: " << Tongtien;

	// So ve tung phan
	int DemVeTP = 0;
	for (int i = 0; i < n; i++)
		DemVeTP += a[i]->LaVeTP();
	cout << "\n\nSo ve tung phan da ban: " << DemVeTP;

	// Huy
	for (int i = 0; i < n; i++)
		delete a[i];
	delete[] a;
}