#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

signed main(void) {
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0); cin.tie(nullptr);

    int n;
    cin >> n;
    map <int,int> cnt;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    for (int i = 0; i < 100; i++)
        cout << cnt[i] << ' ';
    
    return 0;
}