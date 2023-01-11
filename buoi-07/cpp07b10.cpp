#include <bits/stdc++.h>
using namespace std;

bool isPangram(string s) {

    for (char x = 'a'; x <= 'z'; x++) {
        // Kiem tra xau s co chua chu cai x hay ko
        if (s.find(x) == string::npos) {
            return false;
        }
    }
    return true;
}

signed main(void) {

    string s;
    cin >> s;
    if (isPangram(s)) cout << "YES";
    else cout << "NO";
    
    return 0;
}