#include <iostream> 
using namespace std;

int main()
{
    int n;
    cin >>n;

    int tong = 0;
    int x = 1;
    while (x <= n) {
        if (n % x == 0) { // n chia het cho x <-> x la uoc cua n
            // cout << x << endl;
            tong += x;
        }
        x++;
    }
    cout << tong;
    return 0;
}