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
        ll n, m, h;
        cin >> n >> m >> h;

        vector<ll> a(n), b(m);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort (a.begin(), a.end(), greater<> ());
        sort (b.begin(), b.end(), greater<> ());

        ll sum = 0;

        for (ll i = 0; i < min(n, m); i++) {
            sum += min ((b[i] * h), a[i]);
        }

        cout << sum << '\n';
    }
    return 0;
}