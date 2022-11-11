#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if ('a' <= x && x <= 'z')
        cout << "YES";
    else cout << "NO";
}