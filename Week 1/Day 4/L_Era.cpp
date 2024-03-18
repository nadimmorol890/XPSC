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
        
        ll x = 0, ans = 0;
        
        for (ll i = 0; i < n; i++) {
            if (a[i] > i+1) {
                x = abs((i+1) - a[i]);
                ans = max(ans, x);
            }
        }
        
        cout << ans << '\n';
    }
    return 0;
}