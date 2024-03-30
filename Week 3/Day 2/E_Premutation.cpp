#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        ll a[n][n-1];
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n-1; j++) {
                cin >> a[i][j];
            }
        }
 
        map<ll, ll> freq;
 
        for (ll i = 0; i < n; i++) {
            freq[a[i][0]]++;
        }
 
        auto it = freq.begin();
        auto itr = freq.begin();
        it++;
 
        if (it->second > itr->second) {
            cout << it->first <<" "<< itr->first <<" ";
        }
        else {
            cout << itr->first <<" "<< it->first <<" ";
        }
        
        for (ll i = 0; i < n-1; i++) {
            for (ll j = 1; j < n; j++) {
                if (freq[a[j][i]] > 0) {
                    continue;
                }
                else {
                    cout << a[j][i] << " ";
                    freq[a[j][i]]++;
                    break;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}