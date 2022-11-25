#include <bits/stdc++.h>
using namespace std;


int a[1000001];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int mx = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (a[i] > mx)
            mx = a[i];
    }
    cout << mx << ' ';

    int mi = a[1];
    for (int i = 2; i <= n; i++) {
        if (a[i] < mi)
            mi = a[i];
    }
    cout << mi;
    return 0;
}