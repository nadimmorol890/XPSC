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

        vector<ll> a(n+1), pref(n+1), mx(n+1);
        for (ll i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
            mx[i] = max(mx[i - 1], a[i]);
        }
        
        while (q--) {
            ll k, ans = 0;
            cin >> k;

            ll x = upper_bound(mx.begin(), mx.end(), k) - mx.begin() - 1;
            
            if (x >= 0) {
                ans = pref[x];
            }
            
            cout << ans << " ";
        }
        
        cout << '\n';
    }
    
    return 0;
}
