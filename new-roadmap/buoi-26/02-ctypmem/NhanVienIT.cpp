#include "NhanVienIT.h"

void NhanVienIT::Nhap()
{
	cin.ignore();
	cout << "\nNhap ma nhan vien: ";
	getline(cin, MaNhanVien);
	cout << "Nhap ho va ten: ";
	getline(cin, HoTen);
	cout << "Nhap tuoi: ";
	cin >> Tuoi;
	cin.ignore();
	cout << "Nhap std: ";
	getline(cin, std);
	cout << "Nhap email: ";
	getline(cin, email);
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
}

void NhanVienIT::Xuat() const
{
	cout << MaNhanVien << "\t" << HoTen << "\t" << Tuoi << "\t" << std << "\t" << email << "\t" << Tinhluong() << "vnd\n";
}
