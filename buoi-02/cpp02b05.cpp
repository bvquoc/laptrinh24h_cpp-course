#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;

    bool coSo2021 = false;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x == 2021) {
            coSo2021 = true;
            // break;
        }
    }

    if (coSo2021)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}