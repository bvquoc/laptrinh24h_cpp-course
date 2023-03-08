#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void selectionSort(int a[], int n) {

    for (int pos = 1; pos < n; pos++) {
        // pos: vị trí dành cho phần tử min
        int mini = pos;
        for (int i = pos + 1; i <= n; i++) // tìm i có a[i] nhỏ nhất
            if (a[mini] > a[i]) {
                mini = i;
            }
        
        swap(a[mini], a[pos]);

        for (int i = 1; i <= n; i++)
            cerr << a[i] << " \n"[i == n];
    }
}

signed main(void) {
    
    int a[] = { 0, -2, 3, 5, 3, -10, 4, 2, 6, 8, 7, 3, 15, 97, 16, 23, 14 };
    int n = 16;
    for (int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i == n];

    selectionSort(a, n);

    for (int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i == n];

    return 0;
}