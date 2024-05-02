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

        ll cnt = 0, ans = 0;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < 0) {
                cnt++;
            }
            a[i] = abs(a[i]);   
        }

        sort(a.begin(), a.end());

        for (ll i = 1; i < n; i++) {
            ans += abs(a[i]);
        }

        if (cnt % 2 == 1) {
            ans -= a[0];
        }
        else {
            ans += a[0];
        }

        cout << ans << '\n';
    }
    
    return 0;
}