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
        ll n, d, c;
        cin >> n >> c >> d;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        ll l = 0, r = d + 2;

        while (l < r) {
            ll mid = l + (r - l + 1) / 2;
            ll total = 0;

            for (ll i = 0; i < d; i++) {
                if (i % mid < n) {
                    total += a[i % mid];
                }
            }

            if (total >= c) {
                l = mid;
            } 
            else {
                r = mid - 1;
            }
        }

        if (l == d+2) {
            cout << "Infinity" << '\n';
            continue;
        } 
        if (l == 0) {
            cout << "Impossible" << '\n';
            continue;
        } 
        
        cout << l - 1 << '\n';
    }

    return 0;
}
