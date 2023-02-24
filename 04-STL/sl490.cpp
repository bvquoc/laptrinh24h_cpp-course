#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

signed main(void) {

    int T;
    cin >> T;

    stack <int> s;

    while (T--)
    {
        int num;
        cin >> num;

        if (num == 1) { // xu li truy van 1
            int n;
            cin >> n;
            s.push(n);
        }

        if (num == 2) { // xu li truy van 2
            if (s.empty() == false)
                s.pop();
        }

        if (num == 3) { // xu li truy van 3
            if (s.empty()) 
                cout << "Empty!\n";
            else 
                cout << s.top() << endl;
        }
    }
    
    
    return 0;
}