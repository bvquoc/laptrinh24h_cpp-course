#include "VeTungPhan.h"

VeTungPhan::VeTungPhan()
{
	GiaVao = 70000;
	GiaMoiTro = 20000;
	SoTroChoi = 0;
}

void VeTungPhan::Nhap()
{
	Ve::Nhap();
	cout << "Nhap so tro choi: ";
	cin >> SoTroChoi;
}

int VeTungPhan::Tinhtien() const
{
	return GiaVao + SoTroChoi * GiaMoiTro;
}

bool VeTungPhan::LaVeTP() const
{
	return true;
}

VeTungPhan::~VeTungPhan()
{
	GiaVao = GiaMoiTro = SoTroChoi = 0;
}
