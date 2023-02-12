#include "NhanVienSX.h"

NhanVienSX::NhanVienSX()
{
	LuongCB = SoSanPham = 0;
}

void NhanVienSX::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap luong co ban: ";
	cin >> LuongCB;
	cout << "Nhap so san pham: ";
	cin >> SoSanPham;
}

int NhanVienSX::TinhLuong()
{
	return LuongCB + SoSanPham * 5000;
}

NhanVienSX::~NhanVienSX()
{
	LuongCB = SoSanPham = 0;
}
