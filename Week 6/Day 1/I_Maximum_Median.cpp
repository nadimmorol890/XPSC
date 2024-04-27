#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    auto ok = [&](ll mid) {
        ll cnt = 0;

        for (ll i = (n / 2); i < n; i++) {
            if (a[i] < mid) {
                cnt += (mid - a[i]);
            }
        }
        return cnt <= k;
    };
    
    ll l = 1, r = 2e9, mid, ans = 0;

    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok (mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}