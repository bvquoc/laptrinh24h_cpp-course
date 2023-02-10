#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 100005;
int n, a[N];

signed main(void) {
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0); cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int k = n - 1;
    long long res = accumulate(a, a+n, 0LL);

    for (int i = n-1, k = n / 3; k != 0; k--, i--) {
        res -= a[i];
    }

    cout << res;
    
    
    return 0;
}