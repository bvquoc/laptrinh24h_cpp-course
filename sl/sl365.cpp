#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 100005;
int n, k, a[N_MAX];
long long f[N_MAX];

void build_f() {
    // f[i]: tổng các phần tử từ a[1] -> a[i]
    f[1] = a[1];
    for (int i = 2; i <= n; i++) {
        f[i] = f[i-1] + a[i];
    }
}

signed main(void) {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build_f();

    while (k--) {
        int u, v;
        cin >> u >> v;
        long long sum = 0;
        sum = f[v] - f[u-1];
        cout << sum << ' ';
    }
    
    return 0;
}