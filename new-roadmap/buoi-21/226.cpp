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
    multiset<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }

    for (int x : a) cout << x << ' ';
    return 0;
}