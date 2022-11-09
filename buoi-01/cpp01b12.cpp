#include <iostream>
using namespace std;

int main() 
{
    long long n;
    cin >> n;

    long long Sn = 0;

    if (n % 2 == 0) // n chan
    {
        Sn = n / 2;
    }
    else
    { // n le
        Sn = (-n - 1) / 2;
    }

    cout << Sn;
    return 0;
}