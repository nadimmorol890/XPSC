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

        vector<ll> a(n), b(n), c(n);
        vector<pair<ll, ll>> va, vb, vc;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            va.push_back(make_pair(a[i], i));
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            vb.push_back(make_pair(b[i], i));
        }
        for (ll i = 0; i < n; i++) {
            cin >> c[i];
            vc.push_back(make_pair(c[i], i));
        }

        sort (va.begin(), va.end(), greater<> ());
        sort (vb.begin(), vb.end(), greater<> ());
        sort (vc.begin(), vc.end(), greater<> ());

        ll ans = 0;

        for (ll i = 0; i < 3; i++) {
            for (ll j = 0; j < 3; j++) {
                for (ll k = 0; k < 3; k++) {
                    if (va[i].second != vb[j].second && va[i].second != vc[k].second && vb[j].second != vc[k].second) {
                        ans = max(ans, (va[i].first + vb[j].first + vc[k].first));
                    }
                }
            }
        }
        
        cout << ans << '\n';
    }
    return 0;
}