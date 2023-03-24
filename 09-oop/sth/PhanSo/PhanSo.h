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

    friend ostream& operator << (ostream &os, PhanSo &a) {
        os << a.tu;
        if (a.mau != 1) 
            os << "/" << a.mau;

        return os;
    }

    friend istream& operator >> (istream &is, PhanSo &a) {
        cout << "Tu so: ";
        is >> a.tu;
        cout << "Mau so: ";
        is >> a.mau;
        
        return is;
    }

    PhanSo operator+ (const PhanSo &);
};
