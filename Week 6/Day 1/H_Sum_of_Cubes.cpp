#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxN = 1e4;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> pw;
    for (ll i = 1; i <= maxN; i++) {
        pw.push_back(pow(i, 3));
    }

    ll t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        bool found = false;

        for (ll i = 0; i < maxN; i++) {
            if (pw[i] >= x) {
                break;
            }

            ll need = (x - pw[i]);
            ll l = 0, r = maxN - 1, mid;

            while (l <= r) {
                mid = l + (r - l) / 2;
                if (need == pw[mid]) {
                    found = true;
                    break;
                }
                else if (need < pw[mid]) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }

            if (found) break;
        }

        if (found) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}
