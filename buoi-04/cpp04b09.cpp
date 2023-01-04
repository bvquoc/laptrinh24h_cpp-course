#include <bits/stdc++.h>
using namespace std;

int num_of_digit(long long n) {
    if (0 <= n && n <= 9) return 1;
    return 1 + num_of_digit(n / 10);
}

signed main(void) {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    long long n;
    cin >> n;
    cout << num_of_digit(n);
    
    return 0;
}