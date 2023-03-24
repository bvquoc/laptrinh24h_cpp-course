#include "PhanSo.h"

PhanSo::PhanSo()
{
    count++;
    this->tu = 0;
    this->mau = 1;
}

PhanSo::PhanSo(int tu, int mau) {
    count++;
    this->tu = tu;
    this->mau = mau;
}

PhanSo::~PhanSo()
{
    count--;
}

void PhanSo::nhap() {
    cout << "Tu so: ";
    cin >> tu;
    cout << "Mau so: ";
    cin >> mau;
}

void PhanSo::xuat() {
    cout << tu;
    if (mau != 1) 
        cout << "/" << mau;
}

void PhanSo::rutgon() {
    // Tìm ucln của tử và mẫu
    int ucln = __gcd(tu, mau);

    // Chia cả tử và mẫu cho ucln
    tu /= ucln;
    mau /= ucln;
}

PhanSo PhanSo::operator+ (const PhanSo &B) {
    PhanSo ketqua;
    int tu1 = this->tu, mau1 = this->mau;
    int tu2 = B.tu, mau2 = B.mau;

    int mauchung = (1LL * mau1 * mau2) / __gcd(mau1, mau2);

    ketqua.tu = (mauchung / mau1 * tu1) + (mauchung / mau2 * tu2);
    ketqua.mau = mauchung;
    ketqua.rutgon();

    return ketqua;
}