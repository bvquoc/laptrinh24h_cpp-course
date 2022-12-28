#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 10000007;
int n;
long long a[N];

signed main(void) {

    cin >> n;
    int m;
    cin >> m;
    while (m--) {
        int l, r, k;
        cin >> l >> r >> k;
        a[l] += k;
        a[r+1] -= k;
    }

    for (int i = 1; i <= n; i++)
        a[i] = a[i] + a[i - 1];

    cout << *max_element(a + 1, a + 1 + n);
    return 0;
}