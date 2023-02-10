#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isOpen(char x) {
  if (x == '(') return true;
  return false;
}

signed main(void) {
  ios::sync_with_stdio(0); cin.tie(nullptr);
  #ifdef ziwok
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  string str;
  cin >> str;

  stack <int> S;
  for (int i = 0; i < str.size(); i++) {
    if (isOpen(str[i])) {
      S.push(i+1);
    } else {
      cout << S.top() << ' ' << i + 1 << endl;
      S.pop();
    }
  }

  return 0;
}