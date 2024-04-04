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
        ll n;
        cin >> n;

        vector<ll> a(n);

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }

        ll ans = a[n-1] - a[0];

        for (int i = 1; i <= n-1; i++) {
            ans = max (ans, (a[i] - a[0]));
        }
        for (int i = 0; i <= n-2; i++) {
            ans = max (ans, (a[n-1] - a[i]));
        }
        for (int i = 1; i <= n-1; i++) {
            ans = max (ans, (a[i-1] - a[i]));
        }

        cout << ans << '\n';
    }
    return 0;
}