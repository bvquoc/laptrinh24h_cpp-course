#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int dem = 0;

    for(int x; n != 0; n = n / 10) {
        x = n % 10;
        if (x == 2 || x == 3 || x == 5 || x == 7) {
            dem++;
        }
    }

    cout << dem;

    return 0;
}