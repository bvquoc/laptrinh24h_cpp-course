#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

signed main(void) {
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0); cin.tie(nullptr);

    int n; 
    cin >> n;

    int res = 0;
    string s;    
    for (int i = 1; i <= n; i++) {
        cin >> s;
        reverse(s.begin(), s.end());
        if (isPrime(atoi(s.c_str())))
            res++;
    }
    
    cout << res;
    return 0;
}