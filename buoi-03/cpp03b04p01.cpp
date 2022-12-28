#include <bits/stdc++.h>
using namespace std;

const int N = 1000000;
bool isPrime[N+1];

void init() {
    // đánh dấu tất cả các phần tử bằng true, ngoại trừ phần tử 0 và 1
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

signed main(void) {

    init();
    sieve();

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        cout << (isPrime[n] ? "YES" : "NO") << endl;
    }
    return 0;
}