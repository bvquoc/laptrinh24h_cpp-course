#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    long long A = (long long) x*x*x + 3LL*x*x + x + 1;
    cout << A;
    return 0;
}