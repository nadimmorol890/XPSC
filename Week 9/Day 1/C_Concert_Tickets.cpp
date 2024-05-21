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

    multiset<ll> tickets(a.begin(), a.end());

    for (ll i = 0; i < m; i++) {
        auto it = tickets.upper_bound(b[i]);

        if (it == tickets.begin()) {
            cout << -1 << '\n';
        }
        else {
            it--;
            cout << *it << '\n';
            tickets.erase(it);
        }
    }
    
    return 0;
}