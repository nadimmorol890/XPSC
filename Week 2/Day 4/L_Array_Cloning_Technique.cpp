#include<bits/stdc++.h>
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

        map<int, int> freq;
        int mx = 0;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
            mx = max(mx, freq[a[i]]);
        }

        int maxFreq = mx, ans = 0;
        
        while(maxFreq < n) {
            ans++;  // clone count kortechi

            int remain = (n - maxFreq);
            
            ans += min(remain, maxFreq);
            maxFreq += min(remain, maxFreq);
        }
        cout << ans << '\n';
    }
    return 0;
}