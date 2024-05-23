#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;

    vector<ll> a(k+1), b(k+1);
    a[0] = 0;
    b[0] = 0;

    for (ll i = 1; i <= k; i++) {
        cin >> a[i];
    }
    for (ll i = 1; i <= k; i++) {
        cin >> b[i];
    }

    while (q--) {
        ll d;
        cin >> d;

        ll l = 0, r = k;

        while(l <= r) {
            ll mid = l+r>>1;
            
            if(a[mid] > d) {
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }
        if(a[r] == d) {
            cout << b[r] << " ";
            continue;
        }

        ll ans = b[r] + (d - a[r]) * (b[r+1] - b[r]) / (a[r+1] - a[r]);
        cout << ans << " ";
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

