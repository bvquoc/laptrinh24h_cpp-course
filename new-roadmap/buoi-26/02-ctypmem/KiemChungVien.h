#pragma once
#include "NhanVienIT.h"
class KiemChungVien :public NhanVienIT
{
private:
	int SoLoi;
public:
	void Nhap();
	void Xuat() const;
	int Tinhluong() const;
};

