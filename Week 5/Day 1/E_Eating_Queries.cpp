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
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n), pre(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        pre[0] = a[0];
        for (ll i = 1; i < n; i++) {
            pre[i] = pre[i-1] + a[i];
        }

        while (q--) {
            ll x;
            cin >> x;

            ll l = 0, r = n-1, mid, ans = -1;

            while (l <= r) {
                mid = (l + r) / 2;
                if (pre[mid] >= x) {
                    ans = mid;
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }

            if (ans != -1) cout << ans+1 << '\n';
            else cout << ans << '\n';
        }
    }
    
    return 0;
}