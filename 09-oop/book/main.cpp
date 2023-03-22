#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Sach {
public:
    string ten;
    string nxb;
    int namXB;
    int soTrang;
    int gia;

    virtual void nhap() {
        cin.ignore();
        cout << "Ten: "; getline(cin, ten);
        cout << "NXB: "; getline(cin, nxb);
        cout << "Nam xuat ban: "; cin >> namXB;
        cout << "So trang: "; cin >> soTrang;
        cout << "Gia: "; cin >> gia;
    }

    virtual void thongtin() {
        cout << ten << " | " << nxb << " | " << namXB << endl;
        cout << "So trang: " << soTrang << endl;
        cout << "Gia ban: " << gia << endl;
    }
};

class SachGiaoKhoa: public Sach {
public:
    int lop;

    void nhap() {
        Sach::nhap();
        cout << "Khoi lop: "; cin >> lop;
    }
    void thongtin() {
        Sach::thongtin();
        cout << "Khoi lop: " << lop << "\n\n";
    }
};

class TieuThuyet: public Sach {
    string theLoai;

    void nhap() {
        Sach::nhap();
        cin.ignore();
        cout << "The loai: "; getline(cin, theLoai);
    }
    void thongtin() {
        Sach::thongtin();
        cout << "The loai: " << theLoai << "\n\n";
    }
};

class TapChi: public Sach {
    string dang;

    void nhap() {
        Sach::nhap();
        cin.ignore();
        cout << "Dang tap chi: "; getline(cin, dang);
    }
    void thongtin() {
        Sach::thongtin();
        cout << "Dang: " << dang << "\n\n";
    }
};

Sach *pTmp = NULL;

class QlySach
{
private:
    int sz;
    vector <Sach*> arr;
public:

    void nhap() {
        cout << "Nhap so luong sach: ";
        cin >> sz;

        arr.resize(sz);

        cout << "Loai sach:\n";
        cout << "1. Sach giao khoa\n";
        cout << "2. Tieu thuyet\n";
        cout << "3. Tap chi\n\n";

        for (auto &x : arr) { // for-range loop

            cout << "Nhap loai sach: ";
            int t; cin >> t;

            if (t == 1) {
                x = new SachGiaoKhoa;
            } else if (t == 2) {
                x = new TieuThuyet;
            } else if (t == 3) {
                x = new TapChi;
            }

            x->nhap();
        }
    }

    void xuat() {
        for (auto x: arr) {
            x->thongtin();
        }
        cout << endl;
    }

    QlySach(/* args */);
    ~QlySach();
};

QlySach::QlySach(/* args */)
{   
    cout << "LOG: Vua khai bao mot object quan ly sach\n";
    this->nhap();
    pTmp = arr[0];
}

QlySach::~QlySach()
{
    cout << "LOG: Vua huy mot object quan ly sach\n";
    for (auto x: arr) {
        delete x;
    }
    arr.clear();
}


void doSomething() {
    QlySach ql;

}

signed main(void) {


    doSomething();

    pTmp->thongtin();
    // ql.xuat();

    return 0;
}