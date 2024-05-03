#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> diff(n);
        for (int i = 0; i < n; i++) {
            int left = -1, right = -1;
            
            if (i-1 >= 0) left = abs(a[i] - a[i-1]);
            if (i+1 < n) right = abs(a[i] - a[i+1]);
            
            diff[i] = max(left, right);
        }

        sort(diff.begin(), diff.end());
        
        cout << diff[0] << '\n';
    }
    
    return 0;
}