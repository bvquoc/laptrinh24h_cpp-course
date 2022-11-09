#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    // if (n % 3 == 0 && n % 5 == 0) // n chia het cho 3 va 5 
    if (n % 15 == 0) // n chia het cho 15
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}