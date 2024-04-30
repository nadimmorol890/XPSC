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
        sort(a.begin(), a.end());

        auto ok = [&](ll diff) {
            ll cnt = 1;
        
            ll l = 0, r = l + 1;
            while(r < n) {
                if ((a[l] + diff + diff) >= a[r]) {
                    r++;
                }
                else {
                    cnt++;
                    l = r;
                    r = l;
                }
            }
            return cnt < 4;
        };

        ll l = 0, r = 2e14, mid, ans = 0;

        while (l <= r) {
            mid = l + (r - l) / 2;

            if (ok (mid)) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}