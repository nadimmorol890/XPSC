#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    
    int sum = 0, totalSum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 1; i <= n; i++) {
        totalSum += i;
    }

    int ans = (totalSum - sum);
    
    cout << ans << '\n';

    return 0;
}