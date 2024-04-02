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
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<ll> st;
        ll visited = 0;

        for (ll i = n-1; i >= 0; i--) {
            st.insert(a[i]);
            visited++;

            if (visited > st.size()) break;
        }

        ll ans = (n - st.size());
        cout << ans << '\n';
    }
    return 0;
}