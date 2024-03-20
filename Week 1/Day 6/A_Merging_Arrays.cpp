#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<ll> merged;
    ll l = 0, r = 0;

    while (l < n || r < m) {
        if (l < n && (r == m || a[l] < b[r])) {
            merged.push_back(a[l]);
            l++;
        }
        else {
            merged.push_back(b[r]);
            r++;
        }
    }
    
    for (ll ans : merged) {
        cout << ans << " ";
    }
    cout << '\n';

    return 0;
}