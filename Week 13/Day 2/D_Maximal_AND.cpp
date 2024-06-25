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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        for (int bit = 30; bit >= 0; bit--) {
            int cnt = 0;
            
            for (int i = 0; i < n; i++) {
                if ((a[i] & (1 << bit)) == 0) {
                    cnt++;
                }
            }
            
            if (cnt <= k) {
                ans |= (1 << bit);
                k -= cnt;
            }
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}