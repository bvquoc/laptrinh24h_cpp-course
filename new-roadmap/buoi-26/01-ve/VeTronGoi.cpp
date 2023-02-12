#include "VeTronGoi.h"

VeTronGoi::VeTronGoi()
{
	Gia = 200000;
}

void VeTronGoi::Nhap()
{
	Ve::Nhap();
}

int VeTronGoi::Tinhtien() const
{
	return Gia;
}

bool VeTronGoi::LaVeTP() const
{
	return false;
}

VeTronGoi::~VeTronGoi()
{
	Gia = 0;
}
