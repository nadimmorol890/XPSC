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
        ll n, k;
        cin >> n >> k;

        for (ll i = 1; ; i *= 2) {
            ll x = (n / i);
            ll y = (x + 1) / 2;

            if (k <= y) {
                ll k_odd = (2 * k) - 1;
                ll ans = (k_odd * i);

                cout << ans << '\n';
                break;
            }
            else {
                k -= y;
            }
        }
    }
    
    return 0;
}