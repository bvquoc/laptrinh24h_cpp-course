#pragma once
#include "NhanVienIT.h"
class LapTrinhVien : public NhanVienIT
{
private:
	int SoGio;
public:
	void Nhap();
	void Xuat() const;
	int Tinhluong() const;
};

