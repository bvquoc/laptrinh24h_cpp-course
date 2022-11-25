#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0) return false;
    return true;
}

signed main(void) {
    int n;
    cin >> n;

    int x = 2;
    while (n != 0) { // Nếu như còn cần phải in ra một số snt nào đó
        while(isPrime(x) == false) {
            x++;
            n--;
        }
        cout << x << endl;
        x++;
    }
    
    return 0;
}