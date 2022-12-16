#include <bits/stdc++.h>
using namespace std;

int a[101][101];
int n, m;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }

    int num = 0; // số lượng snt của cột có nhiều snt nhất
    int id = 0; // chỉ số của cột có nhiều snt nhất

    for (int j = 1; j <= m; j++) {        
        int cnt = 0; // đếm số lượng snt trên cột j
        for (int i = 1; i <= n; i++)
            if (isPrime(a[i][j])) cnt++;
        
        if (num < cnt) {
            num = cnt;
            id = j;
        }
    }

    for (int i = 1; i <= n; i++)
        if (isPrime(a[i][id])) cout << a[i][id] << endl;
    return 0;
}