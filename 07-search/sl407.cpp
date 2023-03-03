#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 100005;
int a[N], b[N];
int n, m;

bool LinearSearch(int a[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (a[i] == k)
            return 1;
    }

    return 0;
}

int BinarySearch(int a[], int n, int k) {
    int l = 0, r = n - 1; // quản lí vùng tìm kiếm

    while (l <= r) { // trong khi vùng tìm kiếm đang hợp lệ
        int mid = (l + r) / 2;

        if (a[mid] == k) { // phần tử ở giữa đúng bằng k
            return mid;
        }

        if (k < a[mid]) { 
            // tim kiem trong doan ben trai
            r = mid - 1;
        } else { // k > a[mid]
            l = mid + 1;
        }
    }

    // vùng tìm kiếm ko còn hợp lệ nữa
    return -1;
}

signed main(void) {

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++) 
        cin >> b[i];    
    
    for (int i = 0; i < m; i++) {
        // kiem tra b[i] co xuat hien trong a hay ko 
        // cout << LinearSearch(a, n, b[i]);
        if (BinarySearch(a, n, b[i]) != -1) cout << 1;
        else cout << 0;
    }
    return 0;
}