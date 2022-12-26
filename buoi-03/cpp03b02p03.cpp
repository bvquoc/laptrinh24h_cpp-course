#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isSquare(long long n) {
    long long canN = sqrt(n);
    return canN * canN == n;
}

signed main(void) {
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0); cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        long long n; 
        cin >> n;
        cout << (isSquare(n) ? "YES\n" : "NO\n");
    }
    
    return 0;
}