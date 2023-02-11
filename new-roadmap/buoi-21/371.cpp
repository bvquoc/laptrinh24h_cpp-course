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
    map <int, int> cnt;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    pair <int,int> res = *max_element(cnt.begin(), cnt.end(), [](const pair<int,int> &a, const pair<int,int> &b) {
        return a.second < b.second || (a.second == b.second && a.first < b.first);
    });

    cout << res.first << ' ' << res.second;
    return 0;
}