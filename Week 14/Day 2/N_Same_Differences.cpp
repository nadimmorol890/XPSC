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

        map <ll, ll> cnt;
        for (ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            x -= i;
            cnt[x]++;
        }

        ll  ans = 0;

        for (auto it : cnt) {
            ll a = it.second;
            ans += (a * (a - 1) / 2);
        }

        cout << ans << '\n';
    }
    
    return 0;
}