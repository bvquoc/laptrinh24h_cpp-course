#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 10000007;
int n, q;
long long a[N];

signed main(void) {
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0); cin.tie(nullptr);

    cin >> n >> q;
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        a[l] += k;
        a[r + 1] -= k;
    }

    for (int i = 1; i <= n; i++)
        a[i] += a[i - 1];

    cout << *max_element(a + 1, a + 1 + n);
    
    return 0;
}