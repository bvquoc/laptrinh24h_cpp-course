#include "NhanVien.h"

NhanVien::NhanVien()
{
	hoten = "";
	ngaysinh = "";
}

int NhanVien::getLoai()
{
	return LoaiNV;
}

void NhanVien::setLoai(int x)
{
	LoaiNV = x;
}

void NhanVien::Nhap()
{
	cin.ignore();
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "Nhap ngay sinh: ";
	getline(cin, ngaysinh);
}

void NhanVien::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nNgay sinh: " << ngaysinh;
}

int NhanVien::TinhLuong()
{
	return 0;
}

NhanVien::~NhanVien()
{
	hoten = "";
	ngaysinh = "";
}
