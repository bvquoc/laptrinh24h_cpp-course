#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 100005;
int n, a[N];
int res = 1;

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

    int i = 0;
    for (int i = 0; i < n; i++) {
        if (res < a[i])
            break;
        if (res == a[i]) 
            res++;
    }
    cout << res;
    
    return 0;
}