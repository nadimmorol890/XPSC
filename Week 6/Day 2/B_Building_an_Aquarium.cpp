#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxN = 1e10;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll l = 0, r = maxN - 1, mid, ans;

        while (l <= r) {
            ll total = 0;
            mid = l + (r - l) / 2;

            for (ll i = 0; i < n; i++) {
                if (a[i] < mid) {
                    total +=  (mid - a[i]);
                }
            }
            if (total <= x) {
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }

        }
        
        cout << ans << '\n';
    }
    
    return 0;
}