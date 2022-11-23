#include <bits/stdc++.h>
using namespace std;

bool isSquare(long long x) {
    long long canX = sqrt(x);
    return (canX * canX == x);
}
bool isPrime(long long x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0) return false;
    return true;
}


int main() {
    int T; cin >> T;
    while (T--) { // for (int i = 1; i <= T; i++) {
        long long l, r;
        cin >> l >> r;
        int dem = 0;
        for (long long x = 1; 1LL * x * x <= r; x++) {
            if ((long long) x * x < l) continue;
            if (isPrime(x) == true) {
                dem++;
            }
        }
        cout << dem << endl;
    }
    
    return 0;
}