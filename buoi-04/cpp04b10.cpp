#include <bits/stdc++.h>
using namespace std;

long long giaithua(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    return giaithua(n-1) * n;
}

signed main(void) {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    int n; cin >> n;
    cout << giaithua(n) << endl;
    
    return 0;
}