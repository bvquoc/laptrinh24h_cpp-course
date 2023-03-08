#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void insertionSort(int a[], int n) {
    for (int i = 2; i <= n; i++) {
        // Tìm cách chèn a[i] vào trong dãy [1..i]
        int pos = 1;
        while (a[i] > a[pos] && pos < i) {
            pos++;
        }

        if (pos == i) {
            for (int i = 1; i <= n; i++)
                cout << a[i] << " \n"[i == n];
            continue;
        }

        int x = a[i];
        for (int j = i-1; j >= pos; j--) {
            a[j+1] = a[j];
        }
        a[pos] = x;

        for (int i = 1; i <= n; i++)
            cout << a[i] << " \n"[i == n];
    }
}

signed main(void) {
    
    int a[] = { 0, -2, 3, 5, 3, -10, 4, 2, 6, 8, 7, 3, 15, 97, 16, 23, 14 };
    int n = 16;
    for (int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i == n];

    insertionSort(a, n);

    for (int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i == n];

    return 0;
}