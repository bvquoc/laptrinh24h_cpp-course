#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
    if (n == 1 || n == 2) return 1;
    int f1 = 1, f2 = 1;
    int fi;
    for (int i = 3; i <= n; i++) {
        fi = f1 + f2;
        f1 = f2;
        f2 = fi;
    }
    return fi;
}

int fiboRecursion(int n) {
    if (n < 0) return -1;
    if (n == 1 || n == 2) return 1;
    // f[n] = f[n-1] + f[n-2];
    return fiboRecursion(n-1) + fiboRecursion(n-2);
}

signed main(void) {
    for (int i = 1; i <= 10; i++) {
        cout << i << ' ' << fibo(i) << ' ' << fiboRecursion(i) << endl;
    }
    return 0;
}