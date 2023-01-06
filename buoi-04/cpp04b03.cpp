#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MOD = 1000000007;
int pw(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a;

    if (b % 2 == 0) {
        int tmp = pw(a, b / 2);
        return (1LL * tmp * tmp) % MOD;
    }

    // (b % 2 != 0)
    int tmp = pw(a, b / 2);
    tmp = (1LL * tmp * tmp) % MOD;
    return (1LL * tmp * a) % MOD;
}

signed main(void) {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << pw(a,b);
    
    return 0;
}