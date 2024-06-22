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

        map<int, int> freq;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int cnt1 = 0, cnt2 = 0;

        for (auto it : freq) {
            if (it.second > 1) {
                cnt1++;
                cnt2++;
            }
            else {
                if (cnt1 <= cnt2) cnt1++;
                else cnt2 ++;
            }
        }
        cnt2++;
        
        cout << min(cnt1, cnt2) << '\n';
    }
    
    return 0;
}