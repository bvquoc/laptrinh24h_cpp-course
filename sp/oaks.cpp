// https://oj.luyencode.net/problem/OAKS
#include <bits/stdc++.h>
#define endl '\n'
// #define int long long
using namespace std;

using ii = pair <int, int>;
using ll = long long;

const int N = 300005;
int n;
ii a[N];
map <int, vector<int>> x, y;

void readInput() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &a[i].first, &a[i].second);
        x[a[i].first].push_back(a[i].second);
        y[a[i].second].push_back(a[i].first);
    }

    for (auto &cur: x) sort(cur.second.begin(), cur.second.end());
    for (auto &cur: y) sort(cur.second.begin(), cur.second.end());
}

int count(const vector<int> &a, int l, int r) {
    if (l > r) return 0;
    
    // find left 
    int lf = -1;
    {
        int lo = 0, hi = a.size() - 1;
        while (lo <= hi) {
            int mi = (lo + hi) >> 1;
            if (a[mi] >= l) {
                lf = mi;
                hi = mi - 1;
            } else lo = mi + 1;
        }
    }

    // find right 
    int rt = -1;
    {
        int lo = 0, hi = a.size() - 1;
        while (lo <= hi) {
            int mi = (lo + hi) >> 1;
            if (a[mi] <= r) {
                rt = mi;
                lo = mi + 1;
            } else hi = mi - 1;
        }
    }

    if (lf < 0 || rt < 0) return 0;
    return rt - lf + 1;
}

void solve() {
    int q; scanf("%d", &q);
    int x1, y1, x2, y2;
    while (q--) {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        int res = 0;
        res += count(x[x1], y1, y2);
        res += count(x[x2], y1, y2);
        res += count(y[y1], x1+1, x2-1);
        res += count(y[y2], x1+1, x2-1);
        cout << res << endl;
    }
}

signed main(void) {
    #ifdef ziwok
    freopen("oaks.inp","r",stdin);
    freopen("oaks.out","w",stdout);
    #endif
    ios::sync_with_stdio(0); cin.tie(nullptr);
    
    readInput();
    solve();
    // cerr << "\nExecution time: " << (double) clock() / 1000.0 << " second(s).";
    return 0;
}