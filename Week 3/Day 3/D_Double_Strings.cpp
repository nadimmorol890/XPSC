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
        
        vector<string> a(n);
        map<string, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        string ans(n, '0');

        for (int i = 0; i < n; i++) {
            if(a[i].size() == 1) continue;

            for (int j = 0; j < a[i].size()-1; j++) {
                string x = "", y = "";

                for (int k = 0; k <= j; k++) {
                    x.push_back(a[i][k]);
                }
                for (int k = j+1; k < a[i].size(); k++) {
                    y.push_back(a[i][k]);
                }

                if(x == y) {
                    if (freq[x] > 0) {
                        ans[i] = '1';
                        break;
                    }
                }
                else {
                    if (freq[x] > 0 && freq[y] > 0) {
                        ans[i] = '1';
                        break;
                    }
                }
                if (ans[i] == '1') break;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
