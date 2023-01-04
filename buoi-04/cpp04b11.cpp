#include <bits/stdc++.h>
using namespace std;

void printReverse(long long n) {
    if (0 <= n && n <= 9) {
        cout << n;
        return;
    }

    cout << (n % 10);
    printReverse(n / 10);
}

signed main(void) {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    long long n;
    cin >> n;
    printReverse(n);
    
    return 0;
}