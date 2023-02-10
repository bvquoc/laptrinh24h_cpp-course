#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 1003;
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

    sort(a, a+n, [](const int &a, const int &b) {
        return abs(a) < abs(b);
    });
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    
    return 0;
}