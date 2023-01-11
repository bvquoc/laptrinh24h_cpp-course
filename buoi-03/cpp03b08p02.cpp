#include <bits/stdc++.h>
using namespace std;

const int N = 1000006;
int calc[N];

void init() {
    for (int i = 0; i < N; i++)
        calc[i] = -1;
}

void sieve() {
    for (int i = 2; i < N; i++) {
        if (calc[i] == -1 || calc[i] == i) {
            // cout << i << endl;
            for (int j = i * 2; j < N; j += i)
                calc[j] = i;
        }
    }
    for (int i = 2; i < N; i++)
        if (calc[i] == -1)
            calc[i] = i;
}

signed main(void) {

    init();
    sieve();

    int T; cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << calc[n] << endl;
    }
    
    return 0;
}