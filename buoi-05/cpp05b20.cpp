#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 1000006;
int n, m, a[N], b[N];

signed main(void) {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++) 
        cin >> b[i];

    int cnt = 0;
    int i = 1, j = 1;
    while (cnt < n + m) {
        if (i > n) {
            cout << b[j] << ' ';
            j++;
            cnt++;
            continue;
        }

        if (j > m) {
            cout << a[i] << ' ';
            i++;
            cnt++;
            continue;
        }

        if (a[i] < b[j]) {
            cout << a[i] << ' ';
            i++;
        } else {
            cout << b[j] << ' ';
            j++;
        }
        cnt++;
    }
    
    return 0;
}