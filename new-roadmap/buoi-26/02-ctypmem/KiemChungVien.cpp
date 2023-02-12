#include "KiemChungVien.h"

void KiemChungVien::Nhap()
{
	NhanVienIT::Nhap();
	cout << "Nhap so loi phat hien: ";
	cin >> SoLoi;
}

void KiemChungVien::Xuat() const
{
	cout << "Kiem Chung Vien\t";
	NhanVienIT::Xuat();
}

int KiemChungVien::Tinhluong() const
{
	return LuongCoBan + SoLoi * 50000;
}
