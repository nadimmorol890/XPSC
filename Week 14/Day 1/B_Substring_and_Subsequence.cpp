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
        string a, b;
        cin >> a >> b;

        int n = a.size(), m = b.size(), ans = 0;

        for (int i = 0; i < m; i++) {
            int cnt = 0;
            int idx = i;

            for (int j = 0; j < n; j++) {
                if (a[j] == b[idx]) {
                    idx++;
                    cnt++;
                    if (idx == m) break;
                }
            }

            ans = max(ans, cnt);
        }

        cout << (n + m) - ans << '\n';
    }
    
    return 0;
}