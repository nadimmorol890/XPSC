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
        ll n, c;
        cin >> n >> c;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            a[i] += (i+1);
        }
        
        sort(a.begin(), a.end());
        ll ans = 0, sum = 0;

        for (ll i = 0; i < n; i++) {
            if (sum + a[i] > c) break;
            sum += a[i];
            ans++;
        }

        cout << ans << '\n';
    }
    
    return 0;
}