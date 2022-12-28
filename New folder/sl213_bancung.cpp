#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 10;
const int R[N] = { 20, 40, 60, 80, 100, 120, 140, 160, 180, 200 };
const int P[N] = { 10, 9,  8,  7,  6,   5,   4,   3,   2,   1   };

signed main(void) {
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0); cin.tie(nullptr);

    int nTest; 
    cin >> nTest;
    while (nTest--) {
        int score = 0;
        int n; 
        cin >> n;
        int x, y;
        while (n--) {
            cin >> x >> y;
            int k = ceil(sqrt(x * x + y * y));
            for (int i = 0; i < N; i++) {
                if (k <= R[i]) {
                    score += P[i];
                    break;
                }
            }
        }
        cout << score << endl;
    }
    
    return 0;
}