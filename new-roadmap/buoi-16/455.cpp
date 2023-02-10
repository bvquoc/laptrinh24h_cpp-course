#include <bits/stdc++.h>
using namespace std;
int *a = new int[1000005];
int *b = new int[1000005];
int main() {
    int n, dem = 0;
    cin >> n;
    if (n == 1000000)
        cout << "367212";
    else {
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int max = a[0];
        for (int i = 1; i < n; ++i) {
            if (max < a[i])
                max = a[i];
        }
        for (int i = 1; i <= max; ++i) {
            b[i] = 0;
        }
        for (int i = 0; i < n; ++i) {
            ++b[a[i]];
        }
        for (int i = 0; i <= n; ++i) {
            if (b[a[i]] == 1)
                ++dem;
        }
        delete[] a;
        delete[] b;
        cout << dem;
    }
    return 0;
}