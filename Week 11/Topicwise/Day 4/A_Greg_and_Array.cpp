#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> l(m), r(m), d(m); 
    for (ll i = 0; i < m; i++) {
        cin >> l[i] >> r[i] >> d[i];
        l[i]--;
        r[i]--;
    }

    vector<long long> query_count(m + 1, 0);
    for (ll i = 0; i < k; i++) {
        ll x, y;
        cin >> x >> y;
        x--; y--;
        query_count[x]++;
        if (y + 1 < m) query_count[y + 1]--;
    }

    for (ll i = 1; i < m; i++) {
        query_count[i] += query_count[i - 1];
    }

    vector<long long> pref(n + 1, 0);
    for (ll i = 0; i < m; i++) {
        if (query_count[i] > 0) {
            pref[l[i]] += d[i] * query_count[i];
            if (r[i] + 1 < n) pref[r[i] + 1] -= d[i] * query_count[i];
        }
    }

    for (ll i = 1; i < n; i++) {
        pref[i] += pref[i - 1];
    }

    for (ll i = 0; i < n; i++) {
        a[i] += pref[i];
    }

    for (ll i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';
    
    return 0;
}