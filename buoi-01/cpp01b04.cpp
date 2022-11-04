#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int tong = a + b;
    int hieu = a - b;
    long long tich = (long long) a * b;
    double thuong = (double) a / b;

    cout << tong << " " << hieu << " " << tich << " ";
    cout << fixed << setprecision(2) << thuong;

    return 0;
}