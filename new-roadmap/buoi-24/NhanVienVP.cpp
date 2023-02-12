#include "NhanVienVP.h"

NhanVienVP::NhanVienVP()
{
	SoNgayLamViec = 0;
}

void NhanVienVP::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> SoNgayLamViec;
}

int NhanVienVP::TinhLuong()
{
	return SoNgayLamViec * 100000;
}

NhanVienVP::~NhanVienVP()
{
	SoNgayLamViec = 0;
}
