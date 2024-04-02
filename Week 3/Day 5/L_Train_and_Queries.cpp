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

        vector<ll> a(n);
        map<ll, vector<ll>> mp;
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }

        while (k--) {
            ll x, y;
            cin >> x >> y;

            if (mp[x].empty() || mp[y].empty()) {
                cout << "NO" << '\n';
                continue;
            }
            if (x == y) {
                cout << "YES" << '\n';
                continue;
            }
            if (mp[x].front() < mp[y].back()) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}