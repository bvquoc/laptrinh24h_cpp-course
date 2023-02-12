#include "LapTrinhVien.h"

void LapTrinhVien::Nhap()
{
	NhanVienIT::Nhap();
	cout << "Nhap so gio overtime: ";
	cin >> SoGio;
}

void LapTrinhVien::Xuat() const
{
	cout << "Lap trinh vien\t";
	NhanVienIT::Xuat();
}

int LapTrinhVien::Tinhluong() const
{
	return LuongCoBan + SoGio * 200000;
}

