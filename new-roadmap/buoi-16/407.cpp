#include <bits/stdc++.h>
#define maxn 100005
using namespace std;
int a[maxn], N, M, k;
int find(int l, int r, int u) {
    if (l > r)
        return 0;
    int mid = (l + r) >> 1;
    if (u == a[mid])
        return 1;
    else if (u < a[mid])
        return find(l, mid - 1, u);
    else
        return find(mid + 1, r, u);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> M;
    for (int i = 1; i <= N; i++) cin >> a[i];
    string res(M, '0');
    for (int i = 1; i <= M; i++) {
        cin >> k;
        if (find(1, N, k))
            res[i - 1] = '1';
    }
    cout << res;
}