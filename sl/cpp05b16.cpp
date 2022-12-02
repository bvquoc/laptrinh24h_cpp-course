#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 100005;
int n, a[N_MAX];
long long f[N_MAX];
int q, l, r;

void build_f() {
    // f[i]: tổng các phần tử từ a[1] -> a[i]
    f[1] = a[1];
    for (int i = 2; i <= n; i++) {
        f[i] = f[i-1] + a[i];
    }
}

signed main(void) {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    build_f();

    cin >> q;
    while (q--) {
        cin >> l >> r;
        long long sum = 0; // int64_t
        sum = f[r] - f[l-1];
        cout << sum << endl;
    }
    return 0;
}