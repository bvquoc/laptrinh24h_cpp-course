#include <iostream>
#include "LapTrinhVien.h"
#include "KiemChungVien.h"
using namespace std;

signed main()
{
	int n;
	cout << "Nhap so nhan vien: ";
	cin >> n;
	NhanVienIT** a = new NhanVienIT * [n];
	enum { CODER, TESTER };
	for (int i = 0; i < n; i++)
	{
		int loaiNV;
		cout << "\n\nNhap nhan vien " << i + 1 << ":";
		cout << "\n[" << CODER << "] Lap trinh vien.";
		cout << "\n[" << TESTER << "] Kiem chung vien.";
		cin >> loaiNV;
		while (loaiNV != CODER && loaiNV != TESTER)
		{
			cout << "Nhap lai: ";
			cin >> loaiNV;
		}

		if (loaiNV == CODER)
			a[i] = new LapTrinhVien;
		else 
			a[i] = new KiemChungVien;
		a[i]->Nhap();
	}

	int luongtb = 0;
	for (int i = 0; i < n; i++)
		luongtb += a[i]->Tinhluong();
	luongtb /= n;

	cout << "\nLuong trung binh: " << luongtb;

	cout << "\n\nDanh sach nhan vien co luong thap hon muc trung binh: \n\n";
	for (int i = 0; i < n; i++)
		if (a[i]->Tinhluong() < luongtb)
			a[i]->Xuat();

	for (int i = 0; i < n; i++)
		delete a[i];
	delete[] a;
}