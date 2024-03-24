#include<bits/stdc++.h>
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
        string s;
        cin >> s;

        map<char, int> mp;
        
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        int odd_count = 0;

        for (auto it : mp) {
            if (it.second % 2 != 0) {
                odd_count++;
            }
        }
       
        if (odd_count - 1 > k) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}