#include <cstdio>
#include <cstring>
using namespace std;
int mp[1000001];
int main() {
    int n, a, dem = 0;
    scanf("%d\n", &n);
    memset(mp, 0, sizeof mp);
    while (n--) {
        scanf("%d", &a);
        mp[a]++;
        if (mp[a] > 1)
            dem++;
        if (mp[a] == 2)
            dem++;
    }
    printf("%d", dem);
}