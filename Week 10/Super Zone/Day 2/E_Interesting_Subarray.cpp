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

        bool found = false;

        for (ll i = 1; i < n; i++) {
            ll len = abs(a[i] - a[i-1]);
            
            if (len >= 2) {
                cout << "YES" << '\n';
                cout << i << " " << i+1 << '\n';
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}