#include <bits/stdc++.h>
#include "PhanSo.h"

#define endl '\n'
using namespace std;

int PhanSo::count = 0;

signed main(void) {
    cout << "So luong doi tuong PhanSo: " << PhanSo::count << endl;

    PhanSo a(15,3);
    cout << a;
    cout << endl;
    cin >> a;
    cout << a;
    
    return 0;
}