#include <bits/stdc++.h>
using namespace std;

int reverseNum(int x) {
    string s = to_string(x);
    reverse(s.begin(), s.end());
    return atoi(s.c_str()); // return stoi(s);
}

bool isBeautyNum(int x, int k) {
    return ((x - reverseNum(x)) % k == 0);
}

signed main(void) {

    int l, r, k;
    cin >> l >> r >> k;
    int res = 0;
    for (int i = l; i <= r; i++) {
        if (isBeautyNum(i, k) == true)
            res++;
    }
    cout << res;
    return 0;
}