#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 100005;
int n, a[N_MAX];
int q, l, r;

signed main(void) {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    cin >> q;
    while (q--) {
        cin >> l >> r;
        long long sum = 0; // int64_t
        for (int i = l; i <= r; i++)
            sum += a[i];
        cout << sum << endl;
    }
    return 0;
}