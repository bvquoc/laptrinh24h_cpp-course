#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

signed main(void) {
    ios::sync_with_stdio(0); cin.tie(nullptr);
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int n, k, p;
    cin >> n >> k >> p;

    long long res = (long long) (n / (k + 1) * k) * p  + (long long) (n % (k + 1)) * p;
    cout << res;
    return 0;
}