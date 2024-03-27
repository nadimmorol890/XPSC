#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    ll k;
    cin >> n >> k;
    
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll l = 0, r = 0, cnt = 0, ans = 0;
    map<ll, ll> freq;

    while (r < n) {
        if (freq[a[r]] == 0) {
            cnt++;
        }

        freq[a[r]]++;

        if (cnt <= k) {
            ans += (r - l + 1);
        }
        else {
            while (cnt > k) {
                freq[a[l]]--;
                
                if (freq[a[l]] == 0) {
                    cnt--;
                }
                l++;
            }
            ans += (r - l + 1);
        }
        r++;
    }

    cout << ans << '\n';

    return 0;
}