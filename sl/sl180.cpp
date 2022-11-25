#include <bits/stdc++.h>
using namespace std;

signed main(void) {
    int n; 
    cin >> n;

    long long res = (long long) n * (n - 1) / 2; // result
    cout << res;
    return 0;
}