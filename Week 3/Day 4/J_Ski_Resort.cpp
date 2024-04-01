#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll Solution(ll n, ll k, ll q, vector<ll> a) {
    ll count = 0;
    ll days = 0;

    for (ll i = 0; i < n; i++) {
        if (a[i] <= q) {
            days++;
            if (days >= k) {
                count += (days - k + 1);
            }
        }
        else {
            days = 0;
        }
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll ans = Solution(n, k, q, a);

        cout << ans << '\n';
    }

    return 0;
}