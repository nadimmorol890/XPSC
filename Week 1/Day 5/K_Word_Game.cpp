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

        string s;
        vector<vector<string>> v(3);
        map<string, int> mp;
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> s;
                v[i].push_back(s);
                mp[s]++;
            }
        }

        vector<int> ans(3,0);

        for (int i = 0; i < 3; i++) {
            for (auto x : v[i]) {
                if (mp[x] == 1) {
                    ans[i] += 3;
                }
                else if (mp[x] == 2) {
                    ans[i] += 1;
                }
            }
        }

        cout << ans[0] <<" "<< ans[1] <<" "<< ans[2] << '\n';
    }
    return 0;
}