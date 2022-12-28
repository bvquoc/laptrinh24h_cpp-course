#include <bits/stdc++.h>
using namespace std;

const int N = 1000000;
bool isPrime[N+1];
int f[N+1];

void init() {
    for (int i = 0; i <= N; i++)
        isPrime[i] = true;
    isPrime[0] = isPrime[1] = false;
}

void sieve() {
    for (int i = 2; i <= sqrt(N); i++) {
        if (isPrime[i] == false) continue;
        for (int j = i * i; j <= N; j += i) {
            isPrime[j] = false;
        }
    }
}

void buildPrefixSum() {
    f[0] = 0;
    // f[i]: tổng các phần tử của isPrime từ isPrime[0] -> isPrime[i];
    for (int i = 1; i <= N; i++) {
        f[i] = f[i-1] + isPrime[i];
    }
}

int answer(int l, int r) {
    return f[r] - f[l-1];
}

signed main(void) {

    init();
    sieve();
    buildPrefixSum();
    
    int T; cin >> T;
    while (T--) {
        int L, R;
        cin >> L >> R;
        cout << answer(L, R) << endl;
    }
    return 0;
}