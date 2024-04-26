#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> a(n), pref(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    pref[0] = a[0];
    for (ll i = 1; i < n; i++) {
        pref[i] = pref[i-1] + a[i];
    }
    
    ll m;
    cin >> m;
    while (m--) {
        ll q;
        cin >> q;

        auto it = lower_bound(pref.begin(), pref.end(), q);
        
        cout << (it - pref.begin()) + 1 << '\n';
    }
    
    return 0;
}