#pragma once
#include <iostream>
#include <string>

using namespace std;

class NhanVienIT
{
protected:
	string MaNhanVien;
	string HoTen;
	int Tuoi;
	string std;
	string email;
	int LuongCoBan;
public:
	virtual void Nhap();
	virtual void Xuat() const;
	virtual int Tinhluong() const = 0;
};

