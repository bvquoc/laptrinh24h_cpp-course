#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector <int> LinearSearch(int a[], int n, int k) {
    vector <int> res; // luu tru cac vi tri co a[i] = k

    for (int i = 0; i < n; i++) {
        if (a[i] == k)
            res.push_back(i);
    }

    return res;
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

    int n = 12;
    int a[] = { 1, 2, 8, 8, 8, 9, 44, 44, 52, 64, 73, 99 };

    int k;
    cout << "Nhap k: ";
    cin >> k;

    cout << BinarySearch(a, n, k);
    return 0;
}