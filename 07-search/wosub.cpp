#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 100005;
int n, a[N], S;
int p[N];

int BinarySearch(int a[], int l, int r, int x) {
    int p = -1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (a[mid] > x) {
            r = mid - 1;
        } else
        if (a[mid] < x) {
            l = mid + 1;
        } else { // a[mid] == x
            p = mid;
            l = mid + 1;
        }
    }

    return p;
}

signed main(void) {

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> S;

    for (int i = 1; i <= n; i++)
        p[i] = p[i-1] + a[i];

    int k = -1;

    for (int l = 1; l <= n; l++) {
        int pr = p[l-1] + S;

        int cur = BinarySearch(p, l, n, pr);
        if (cur != -1) { // tìm được pr
            int len = (cur - l + 1);
            if (k < len)
                k = len;
        }
    }

    cout << k;
    return 0;
}