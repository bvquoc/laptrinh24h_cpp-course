#include <bits/stdc++.h>
using namespace std;

int n, m, u, v, k, ans;
vector<vector<int> > g;
stack<int> st;
int a[100002];
bool dd[100002];
int main() {
    scanf("%d%d%d", &n, &m, &k);
    g.resize(n + 1);
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d", &u, &v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1; i <= n; ++i) {
        if (int(g[i].size()) < k) {
            st.push(i);
            dd[i] = true;
        }
        a[i] = int(g[i].size());
    }
    while (!st.empty()) {
        int u = st.top();
        for (int v : g[u])
            if (!dd[v]) {
                a[v]--;
                if (a[v] < k) {
                    st.push(v);
                    dd[v] = true;
                }
            }
        st.pop();
    }
    for (int i = 1; i <= n; ++i)
        if (a[i] >= k)
            ans++;
    printf("%d\n", ans);
    for (int i = 1; i <= n; ++i)
        if (a[i] >= k)
            printf("%d ", i);
    return 0;
}