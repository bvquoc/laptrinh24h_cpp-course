#include <bits/stdc++.h>
using namespace std;

int main() {
    long long b, c, n;
    vector<int> a;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        a.push_back(b);
    }
    sort(a.begin(), a.end());
    cout << a.at(n / 2);
}
