#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 200005;
int n, a[N];
int q, k;

signed main(void) {
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0); cin.tie(nullptr);

    cin >> n >> k >> q;
    k %= n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i + n] = a[i];
    }

    while (q--) {
        int i;
        cin >> i;
        cout << a[i - k + n] << endl;
    }
    
    return 0;
}