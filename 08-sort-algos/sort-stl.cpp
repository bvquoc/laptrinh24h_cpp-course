#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isOdd(const int &x) { 
    if (x % 2 == 0) return false;
    return true;
}

bool compare(const int &x, const int &y) {
    // return (x >= y);
    // sắp xếp: số chẵn đứng trước, lẻ đứng sau

    if (!isOdd(x) && !isOdd(y)) { // 2 số đều là số chẵn
        return x <= y;
    }
    if (isOdd(x) && isOdd(y)) { // 2 số đều là số lẻ
        return x >= y;
    }

    if (isOdd(x) == true && isOdd(y) == false) {
        return false;
    }

    return true;
}


signed main(void) {

    int a[] = { 0, -2, 3, 5, 3, -10, 4, 2, 6, 8, 7, 3, 15, 97, 16, 23, 14 };
    int n = 16;


    // Sắp xếp mảng số nguyên theo quy tắc sau:
    // - Số chẵn đứng trước, Số lẻ đứng sau
    // - Các số chẵn được sắp xếp tăng dần
    // - Các số lẻ được sắp xếp giảm dần
    sort(a + 1, a + n + 1, compare);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i == n];
    
    return 0;
}