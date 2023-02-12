#pragma once
#include <iostream>
#include <string>

using namespace std;

class NhanVien
{
protected:
	string hoten;
	string ngaysinh;
	int LoaiNV;
public:
	NhanVien();
	int getLoai();
	void setLoai(int);
	void Nhap();
	void Xuat();
	int TinhLuong();
	~NhanVien();
};

