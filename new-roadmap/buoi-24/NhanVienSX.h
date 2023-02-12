#pragma once
#include "NhanVien.h"
class NhanVienSX:public NhanVien
{
private:
	int LuongCB;
	int SoSanPham;
public:
	NhanVienSX();
	void Nhap();
	int TinhLuong();
	~NhanVienSX();
};

