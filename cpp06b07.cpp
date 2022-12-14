#include <bits/stdc++.h>
using namespace std;

int a[101][101];
int n, m;

signed main(void) {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    int u, v;
    cin >> u >> v;
    for (int j = 1; j <= m; j++)
        swap(a[u][j], a[v][j]);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " \n"[j == m];    
    
    return 0;
}