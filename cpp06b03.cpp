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

    int num = 0; // số lượng snt của hàng có nhiều snt nhất
    int id = 0; // chỉ số của hàng có nhiều snt nhất

    for (int i = 1; i <= n; i++) {
        int cnt = 0; // count
        for (int j = 1; j <= m; j++)
            if (isPrime(a[i][j])) cnt++;
        
        if (num < cnt) {
            num = cnt;
            id = i;
        }
    }

    cout << id << endl;
    for (int j = 1; j <= m; j++)
        if (isPrime(a[id][j]))
            cout << a[id][j] << ' ';
    return 0;
}