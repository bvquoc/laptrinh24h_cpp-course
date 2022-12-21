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
    int n;
    cin >> n;

    string s;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        reverse(s.begin(), s.end());
        if (isPrime(stoi(s)))
            res++;
    }

    cout << res;
    return 0;
}