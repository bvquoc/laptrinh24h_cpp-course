#include <iostream>
using namespace std;
int main() 
{
    long long n;
    cin >> n;

    int tongChuSo = 0;
    while (n != 0) {
        int x = n % 10;
        n = n / 10;
        tongChuSo += x;
    }
    cout << tongChuSo;

    return 0;
}