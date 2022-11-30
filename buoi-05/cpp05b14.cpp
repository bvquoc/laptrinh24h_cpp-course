#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++)
    {   bool check=false;
        int dem=0;
        for (int j=0;j<n;j++)
        {
            if (a[i]==a[j])dem+=1;
        }
        // for (j =i-1 ->1)
        // if (a[i]==a[i-1]) check=true;
        else cout << a[i] << " " << dem << endl;
    }
    return 0;
}