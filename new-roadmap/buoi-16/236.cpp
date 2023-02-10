#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a[200001], c = 10000000;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 1; i < n; i++) c = min(c, a[i] - a[i - 1]);
    for (int i = 0; i < n - 1; i++) {
        if ((a[i + 1] - a[i]) == c)
            cout << a[i] << " " << a[i + 1] << " ";
    }
}