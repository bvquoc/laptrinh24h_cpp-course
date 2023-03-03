#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 100005;
int a[N], b[N];
int n, m;

int BinarySearch(int a[], int n, int x) {
    int p = 0;
    int l = 1, r = n;
    while (l <= r) {
        int mid = (l + r) / 2;

        if (a[mid] > x) {
            r = mid - 1;
        } else 
        if (a[mid] < x) {
            l = mid + 1;
        } else { // a[mid] == x
            p = mid;
            r = mid - 1;
        }
    }

    return p;
}

signed main(void) {

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    
    for (int i = 1; i <= m; i++) {
        cout << BinarySearch(a, n, b[i]) << ' ';
    }
    return 0;
}