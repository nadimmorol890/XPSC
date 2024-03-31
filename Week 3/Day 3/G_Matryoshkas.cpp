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
        ll n;
        cin >> n;
        
        vector<ll> a(n);
        map<ll, ll> freq;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        sort(a.begin(), a.end());
        ll ans = 0;

        for (ll i = 0; i < n; i++) {
            ll val = a[i];
            if (freq[val] != 0) {
                ans++;

                while (freq[val] > 0) {
                    freq[val]--;
                    val++;
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
