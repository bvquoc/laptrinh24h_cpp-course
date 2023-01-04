#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int firstDigitOf(long long n) {
    if (0 <= n && n <= 9) return n;
    return firstDigitOf(n / 10);
}

signed main(void) {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    long long n;
    cin >> n;
    cout << firstDigitOf(n);
    
    return 0;
}