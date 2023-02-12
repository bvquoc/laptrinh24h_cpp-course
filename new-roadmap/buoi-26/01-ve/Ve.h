#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ve
{
protected:
	string MaVe;
	string HoTen;
	int NamSinh;
public:
	Ve();
	virtual void Nhap();
	virtual int Tinhtien() const = 0;
	virtual bool LaVeTP() const = 0;
	virtual ~Ve();
};

