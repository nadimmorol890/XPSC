#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m+1);
    for (int i = 0; i <= m; i++) {
        cin >> a[i];
    }

    vector<vector<int>> allMask;
    for (int i = 0; i <= m; i++) {
        vector<int> s;

        for (int k = 0; k < n; k++) {
            if ((a[i] >> k) & 1) {
                s.push_back(1);
            }
            else {
                s.push_back(0);
            }
        }
        allMask.push_back(s);
    }

    int ans = 0;

    vector<int> fedorMask = allMask[m];
    for (int i = 0; i < allMask.size()-1; i++) {
        vector<int> v = allMask[i];

        int cnt = 0;

        for (int j = 0; j < n; j++) {
            if (fedorMask[j] != v[j])   cnt++;
        }
        
        if (cnt <= k)   ans++;
    }

    cout << ans << '\n';

    return 0;
}