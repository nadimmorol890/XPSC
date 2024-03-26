#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll l = 0, r = 0, ans = LLONG_MAX, sum = 0;

    while (r < n) {
        sum += a[r];
        
        while (sum >= s) {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }
        
        r++;
    }

    if (ans == LLONG_MAX) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }

    return 0;
}
