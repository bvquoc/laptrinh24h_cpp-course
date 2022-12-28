#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1000000007;
int f(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    int f1 = 1, f2 = 1, fn;
    for (int i = 3; i <= n; i++) {
        fn = f1 + f2;
        if (fn >= MOD) fn -= MOD;
        f1 = f2;
        if (f1 >= MOD) f1 -= MOD;
        f2 = fn;
        if (f2 >= MOD) f2 -= MOD;
    }

    if (fn >= MOD) fn -= MOD;
    return fn;
}

signed main(void) {
    ios::sync_with_stdio(0); cin.tie(nullptr);
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n; cin >> n;
    cout << f(n);
    
    return 0;
}