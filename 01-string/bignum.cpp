#include <bits/stdc++.h>
using namespace std;

using bignum = string;

bignum sum(bignum a, bignum b) {
    bignum res = "";
    int carry = 0;

    while (a.length() < b.length()) a = '0' + a;
    while (b.length() < a.length()) b = '0' + b; 

    for (int i = a.length() - 1; i >= 0; i--) {
        int current = (a[i] - '0') + (b[i] - '0') + carry;
        res = char(current % 10 + '0') + res;
        carry = current / 10;
    }

    if (carry != 0) res = char(carry + '0') + res;
    return res;
}

signed main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    bignum a, b;
    cin >> a >> b;
    cout << sum(a, b);
    return 0;
}