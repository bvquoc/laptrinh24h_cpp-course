#include <bits/stdc++.h>
using namespace std;

const int N = 100001;

int n, k, a[N];

int main() {
    cin >> n;
    cin >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int sum = 0;
    for (int i = 1; i <= k; i++)
        sum += a[i];

    int maxSum = sum;
    for (int i = 2; i <= n - k + 1; i++) {
        sum -= a[i-1];
        sum += a[i+k-1];
        if (maxSum < sum) 
            maxSum = sum;
    }
        
    cout << maxSum << endl;

    sum = 0;
    for (int i = n - k + 1; i <= n; i++)
        sum += a[i];

    if (sum == maxSum) {
        for (int i = n - k + 1; i <= n; i++)
            cout << a[i] << ' ';
    }
    else
        for (int i = n - 1; i >= k; i--) {
            sum -= a[i+1];
            sum += a[i-k+1];
            if (sum == maxSum) {
                for (int j = i - k + 1; j <= i; j++)
                    cout << a[j] << ' ';
                break;
            }
        }
    return 0;
}