#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo
{
private:
    int tu;
    int mau;
public:

    static int count; // Số lượng đối tượng PhanSo được khởi tạo

    PhanSo();
    PhanSo(int, int);
    ~PhanSo();

    void nhap();
    void xuat();
    void rutgon();

    PhanSo operator+ (const PhanSo &);
};
