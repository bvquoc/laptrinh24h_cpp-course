#include <bits/stdc++.h>
using namespace std;

int fiboRecursion(int n) {
    if (n < 0) return -1;
    if (n == 1 || n == 2) return 1;
    return fiboRecursion(n-1) + fiboRecursion(n-2);
}

signed main(void) {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    int n;
    cin >> n;
    cout << fiboRecursion(n);
    
    return 0;
}