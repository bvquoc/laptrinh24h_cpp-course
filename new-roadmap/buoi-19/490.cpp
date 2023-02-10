#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

signed main(void) {
  ios::sync_with_stdio(0); cin.tie(nullptr);
  #ifdef ziwok
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  stack <int> S;  // stack <kieudulieu> ten_stack

  int T;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    int q; cin >> q;
    if (q == 1) {
      int n;
      cin >> n;
      S.push(n);
    }
    if (q == 2) {
      if (S.size())
        S.pop();
    }
    if (q == 3) {
      if (S.size() == 0 /* S.empty() */)
      {
        cout  << "Empty!\n";
      } else {
        cout << S.top() << endl;
      }
    }
  }

  
  return 0;
}