#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool compare(int a, int b) {
    return a <= b;
}

void bubbleSort(int a[], int n) {
    // Thuật toán: 
    // Duyệt mảng từ phần tử đầu tiên. 
    // Ta sẽ so sánh mỗi phần tử với phần tử liền trước nó, nếu chúng đứng sai vị trí, ta sẽ đổi chỗ chúng cho nhau.
    // Quá trình này sẽ được dừng nếu gặp lần duyệt từ đầu dãy đến cuối dãy 
    // mà không phải thực hiện đổi chỗ bất kì 2 phần từ nào (tức là tất cả các phần tử đã được sắp xếp đúng vị trí).

    while (true) {
        int cnt = 0;
        for (int i = 2; i <= n; i++) {
            if (compare(a[i-1], a[i]) == false) {
                swap(a[i-1], a[i]);
                cnt++;
            }
            for (int i = 1; i <= n; i++)
                cerr << a[i] << " \n"[i == n];
        }

        
        if (cnt == 0) break;
    }
}

signed main(void) {
    
    int a[] = { 0, -2, 3, 5, 3, -10, 4, 2, 6, 8, 7, 3, 15, 97, 16, 23, 14 };
    int n = 16;
    for (int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i == n];

    bubbleSort(a, n);

    for (int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i == n];

    return 0;
}