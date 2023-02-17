#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct HinhChuNhat
{
    float cd;
    float cr;

    HinhChuNhat() { // Dufng cho việc khởi tạo
        cout << "Da co HCN duoc khai bao\n";
        cd = 0;
        cr = 0;
    }

    // Dung cho việc gán
    HinhChuNhat(float cdMoi, float crMoi) {
        cd = cdMoi;
        cr = crMoi;
        cout << "Vua duoc gan gia tri\n";
    }

    float ChuVi() {
        return (cd + cr) * 2;
    }

    float DienTich() {
        return cd * cr;
    }

    void In() {
        cout << "Chieu dai: " << cd << endl;
        cout << "Chieu rong: " << cr << endl;
        cout << "Chu vi: " << ChuVi() << endl;
        cout << "Dien tich: " << DienTich() << endl;
        cout << endl;
    }
};

HinhChuNhat operator+ (HinhChuNhat &a, HinhChuNhat &b) {
    HinhChuNhat ketqua = {a.cd + b.cd, a.cr + b.cr};
    return ketqua;
}

void operator++(HinhChuNhat &a) {
    cout << "Tang cd, cr len 1\n";
    a.cd++;
    a.cr++;
}

// struct SinhVien 
// {
//     string MaSV;
//     string HoTen;
//     string Truong;
//     int NamSinh;
// };

signed main(void) {

    // Hình chữ nhật: Chiều dài, chiều rộng


    HinhChuNhat a = {1,2};
    HinhChuNhat b = {3,5};

    ++a;
    a.In();

    // SinhVien sv1 = { "K221234", "Nguyen Van Nam", "HCMUT", 2002 };
    // cout << "Ma sinh vien: " << sv1.MaSV << endl;
    // cout << "Ho ten: " << sv1.HoTen << endl;
    // cout << "Truong: " << sv1.Truong << endl;
    // cout << "Nam sinh: " << sv1.NamSinh << endl;
    // cout << "DONE!";
    return 0;
}