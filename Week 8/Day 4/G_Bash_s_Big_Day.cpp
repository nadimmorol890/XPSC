#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int maxN = 1e5+5;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> factor_count(maxN, 0);

    while (n--) {
        ll x;
        cin >> x;

        for (ll i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                while (x % i == 0) {
                    x /= i;
                }
                factor_count[i]++;
            }
        }

        if (x > 1) { 
            factor_count[x]++;
        }
    }

    ll ans = 1;

    for (ll i = 2; i <= maxN; i++) {
        ans = max(ans, factor_count[i]);
    }

    cout << ans << endl;

    return 0;
}
