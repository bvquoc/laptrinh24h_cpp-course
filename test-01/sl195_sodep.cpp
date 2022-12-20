#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int reverseNum(int x) {
    string s = to_string(x);
    reverse(s.begin(), s.end());
    return atoi(s.c_str());
}

bool isBeautyNum(int x, const int &k) {
    return ((x - reverseNum(x)) % k == 0); 
}

signed main(void) {
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0); cin.tie(nullptr);

    int l, r, k;
    cin >> l >> r >> k;    
    int cnt = 0;
    for (int i = l; i <= r; i++) {
        if (isBeautyNum(i, k))
            cnt++;
    }
    cout << cnt;
    return 0;
}