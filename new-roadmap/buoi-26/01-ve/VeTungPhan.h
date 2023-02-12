#pragma once
#include "Ve.h"
class VeTungPhan : public Ve
{
private:
	int GiaVao;
	int SoTroChoi;
	int GiaMoiTro;
public:
	VeTungPhan();
	void Nhap();
	int Tinhtien() const;
	bool LaVeTP() const;
	~VeTungPhan();
};

