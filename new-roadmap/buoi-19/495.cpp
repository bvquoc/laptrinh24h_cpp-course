#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int N = 100005;
int n, a[N];

bool check() {
  int validId = 1;
  stack <int> S;

  for (int i = 1; i <= n; i++) 
    if (a[i] == validId)
      validId++;
    else {
      while (S.empty() == false && S.top() == validId) {
        validId++;
        S.pop();
      }
      S.push(a[i]);
    }
  
  while (S.empty() == false && S.top() == validId) {
    S.pop();
    validId++;
  }

  return S.empty();
}

signed main(void) {
  ios::sync_with_stdio(0); cin.tie(nullptr);
  #ifdef ziwok
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  while (cin >> n) 
  {
    if (n == 0)
      break;
    for (int i = 1; i <= n; i++)
      cin >> a[i];

    if (check() == true) 
      cout << "yes\n";
    else
      cout << "no\n";
  }

  return 0;
}