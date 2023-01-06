#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 100005;
int n, h[N];
int rem[N]; // remember

int f(int n) {
    if (n == 1) return 0;
    if (n == 2) return abs(h[1] - h[2]);
    
    if (rem[n] == -1) {
        int a = f(n-1) + abs(h[n-1] - h[n]);
        int b = f(n-2) + abs(h[n-2] - h[n]);
        rem[n] = min(a, b);
    }

    return rem[n];
}

void init() {
    for (int i = 1; i <= n; i++)
        rem[i] = -1;
}

signed main(void) {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> h[i];

    init();
    cout << f(n);    
    
    return 0;
}