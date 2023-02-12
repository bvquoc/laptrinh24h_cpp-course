#pragma once
#include "Ve.h"
class VeTronGoi : public Ve
{
private:
	int Gia;
public:
	VeTronGoi();
	void Nhap();
	int Tinhtien() const;
	bool LaVeTP() const;
	~VeTronGoi();
};

