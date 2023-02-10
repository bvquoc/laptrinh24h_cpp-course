#include <bits/stdc++.h>
using namespace std;

#define file "test"
#define fileinout() freopen(file ".inp", "r", stdin), freopen(file ".out", "w", stdout);
#define io() ios_base::sync_with_stdio(0), cin.tie(0);

#define forr(_a, _b, _c) for (_a = _b; _a <= _c; ++_a)
#define ford(_a, _b, _c) for (_a = _b; _a >= _c; --_a)
#define forf(_a, _b, _c) for (_a = _b; _a < _c; ++_a)

typedef long long ll;
const ll mo = ll(1e9) + 7;
const ll inf = ll(1e15) + 1;

#define fi first
#define se second
typedef pair<int, int> pa;
typedef pair<int, pa> paa;

int n, m, i, vt, k;
vector<int> a, b;
vector<int>::iterator ct;

int main() {
    io();
#ifndef ONLINE_JUDGE
    fileinout();
#endif

    cin >> n >> m;
    a.push_back(-mo);
    while (n-- > 0) {
        cin >> k;
        a.push_back(k);
    }
    a.push_back(mo);
    while (m-- > 0) {
        cin >> k;
        ct = lower_bound(a.begin(), a.end(), k);
        vt = ct - a.begin();
        if (a[vt] != k)
            cout << "0 ";
        else
            cout << vt << " ";
    }

    return 0;
}