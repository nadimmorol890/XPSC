#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll q;
    cin >> q;
    while (q--) {
        ll x;
        cin >> x;
        
        // ll l = 0, r = n-1, mid, idx = -1;

        // while (l <= r) {
        //     mid = (l + r) / 2;

        //     if (a[mid] <= x) {
        //         idx = mid;
        //         l = mid + 1;
        //     }
        //     else {
        //         r = mid - 1;
        //     }
        // }

        // cout << idx+1 << '\n';

        auto it = upper_bound(a.begin(), a.end(), x);
        cout << it - a.begin() << '\n';
    }
    
    return 0;
}