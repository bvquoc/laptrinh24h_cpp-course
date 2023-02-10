#include <bits/stdc++.h>
#define fw(a, b, c) for (ll c = a; c <= b; c++)
#define bw(a, b, c) for (ll c = a; c >= b; c--)
#define maxn 1001
#define base 31ull
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;
queue<int> st;
int main() {
    effective int t, m;
    cin >> t;
    fw(1, t, i) {
        cin >> m;
        switch (m) {
            case 1:
                int n;
                cin >> n;
                st.push(n);
                break;
            case 2:
                if (!st.empty())
                    st.pop();
                break;
            case 3:
                if (!st.empty())
                    cout << st.front() << '\n';
                else
                    cout << "Empty!\n";
                break;
        }
    }
}