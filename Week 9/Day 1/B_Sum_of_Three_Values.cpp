#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;

    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(), a.end());

    for (ll i = 0; i < n-2; i++) {
        ll l = i+1, r = n-1;

        while (l < r) {
            ll curr = a[i].first + a[l].first + a[r].first;
            
            if (curr == x) {
                cout << a[l].second << " " << a[r].second << " " << a[i].second << endl;
                return 0;
            }
            else if (curr < x) {
                l++;
            } 
            else {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << '\n';
    
    return 0;
}