#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int S(int n) {
    if (n == 1) return -1;
    int k = 1; // khi n chan
    if (n % 2 != 0) k = -1;
    return S(n - 1) + k * n;
}

signed main(void) {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    int n;
    cin >> n;
    cout << S(n);
    
    return 0;
}