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
        string s;
        cin >> s;

        vector<ll> dispatch;
        ll total = 0;
        ll mnChange = 0;

        for (ll i = 0; i < n; i++) {
            ll l = i, r = (n - i -1);

            if (s[i] == 'L') {
                if (r > l) {
                    mnChange++;
                    total += r;
                    dispatch.push_back(r-l);
                }
                else {
                    total += l;
                }
            }
            else {
                if (l > r) {
                    mnChange++;
                    dispatch.push_back(l-r);
                    total += l;
                }
                else {
                    total += r;
                }
            }
        }

        vector<ll> ans(n+1);
        for (ll i = mnChange; i <= n; i++) {
            ans[i] = total;
        }

        sort(dispatch.begin(), dispatch.end(), greater<ll> ());

        for (ll i = mnChange - 1; i >= 1; i--) {
            total -= dispatch.back();
            dispatch.pop_back();
            ans[i] = total;
        }

        for (ll i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}