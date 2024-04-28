#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxN = 1e18;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll l = 0, r = maxN - 1, mid, ans = 0;

        while (l <= r) {
            mid = (l + r) / 2;
            ll x = (mid - mid/n);
            if (x == k) {
                ans = mid;
                r = mid - 1;
            }
            else if (x < k) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}

