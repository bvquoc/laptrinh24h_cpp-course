#include "NhanVien.h"
#include "NhanVienSX.h"
#include "NhanVienVP.h"

int TinhLuongNV(NhanVien*);

int main()
{
	int n;
	cout << "Nhap so nhan vien: ";
	cin >> n;
	NhanVien** a = new NhanVien * [n];
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "\nNhap thong tin nhan vien " << i + 1 << ":\n";
		cout << "[0] Nhan vien san xuat\n";
		cout << "[1] Nhan vien van phong\n";
		cout << "Chuc vu: ";
		cin >> loai;
		while (loai != 0 && loai != 1)
		{
			cout << "Nhap lai: ";
			cin >> loai;
		}

		if (loai == 0)
		{
			a[i] = new NhanVienSX;
			((NhanVienSX*)a[i])->Nhap();
			a[i]->setLoai(loai);
		}
		else
		{
			a[i] = new NhanVienVP;
			((NhanVienVP*)a[i])->Nhap();
			a[i]->setLoai(loai);
		}
	}

	// in thong tin & luong
	cout << "\n--Thong tin va luong cua tung nhan vien--\n";
	for (int i = 0; i < n; i++)
	{
		if (a[i]->getLoai() == 0)
		{
			cout << "\nNhan vien san xuat";
			a[i]->Xuat();
			cout << "\nLuong: ";
			cout << TinhLuongNV(a[i]) << "\n";
		}
		else
		{
			cout << "\nNhan vien van phong";
			a[i]->Xuat();
			cout << "\nLuong: ";
			cout << TinhLuongNV(a[i]) << "\n";
		}
	}

	// Tinh tong luong
	int Tongluong = 0;
	for (int i = 0; i < n; i++)
		Tongluong += TinhLuongNV(a[i]);

	cout << "\n\n--Tong luong ma cong ty phai tra: " << Tongluong;


	// Find max
	NhanVien* NhanVien1st = NULL;
	int Max = -1;
	for (int i = 0; i < n; i++)
	{
		int Luong = TinhLuongNV(a[i]);
		if (Max < Luong)
		{
			Max = Luong;
			NhanVien1st = a[i];
		}
	}

	cout << "\n\n--Nhan vien co luong cao nhat--";
	NhanVien1st->Xuat();

	// Sort giam
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (TinhLuongNV(a[i]) < TinhLuongNV(a[j]))
			{
				NhanVien* temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "\n\n--Danh sach nhan vien sap xep theo luong (giam)--";
	for (int i = 0; i < n; i++)
	{
		a[i]->Xuat();
		cout << endl;
	}

	// Destuctor
	if (n == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] != NULL)
			delete a[i];
	delete[] a;
}

int TinhLuongNV(NhanVien* x)
{
	if (x->getLoai() == 0)
		return ((NhanVienSX*)x)->TinhLuong();
	else
		return ((NhanVienVP*)x)->TinhLuong();
}
