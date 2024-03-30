#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll a[n][m];
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        ll maxSum = 0;

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                ll sum = a[i][j];

                for (ll x = i+1, y = j-1; x < n && y >= 0; x++, y--) {
                    sum += a[x][y];
                }

                for (ll x = i+1, y = j+1; x < n && y < m; x++, y++) {
                    sum += a[x][y];
                }

                for (ll x = i-1, y = j-1; x >= 0 && y >= 0; x--, y--) {
                    sum += a[x][y];
                }

                for (ll x = i-1, y = j+1; x >= 0 && y < m; x--, y++) {
                    sum += a[x][y];
                }

                maxSum = max (maxSum, sum);
            }
        }

        cout << maxSum << '\n';
    }
    return 0;
}