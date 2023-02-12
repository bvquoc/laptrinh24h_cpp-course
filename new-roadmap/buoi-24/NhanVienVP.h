#pragma once
#include "NhanVien.h"

class NhanVienVP : public NhanVien
{
private:
	int SoNgayLamViec;
public:
	NhanVienVP();
	void Nhap();
	int TinhLuong();
	~NhanVienVP();
};

