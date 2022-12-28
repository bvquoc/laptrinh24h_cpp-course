#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

bool includeD(int x, int d) {
    string s = to_string(x);
    for (char c: s) {
        if (c - '0' == d) return true;
    }
    return false;
}

signed main(void) {
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0); cin.tie(nullptr);

    int l, r, d;
    cin >> l >> r >> d;

    int res = 0;
    for (int i = l; i <= r; i++) {
        if (isPrime(i) && includeD(i, d))
            res++;
    }
    cout << res;

    return 0;
}