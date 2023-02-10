#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 102;
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

    sort(a, a+n);
    
    int cur = INT_MAX, cnt = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != cur) {
            res += (cnt / 2);
            cur = a[i];
            cnt = 1;
        } else {
            cnt++;
        }
    }
    res += (cnt / 2);

    
    cout << res;
    
    return 0;
}