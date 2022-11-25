#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0) return false;
    return true;
}

bool fullDigitIsPrime(int x) {
    if (x < 2) return false;

    while (x != 0) {
        int dv = x % 10;
        x = x / 10;
        if (isPrime(dv) == false)
            return false;
    }

    return true;
}

signed main(void) {
    int T; cin >> T; // so luong testcase

    while (T--) {
        int l, r;
        cin >> l >> r;
        int dem = 0;
        for (int x = l; x <= r; x++) {
            if (isPrime(x) && fullDigitIsPrime(x)) {
                dem++;
            }
        }
        cout << dem << endl;
    }
    
    return 0;
}