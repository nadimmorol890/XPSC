#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n;
    cin >> n;
 
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    ll l = 0, r = l+1, moves = 0;
 
    while (r < n) {
        if (a[l] > a[r]) {
            moves += (a[l] - a[r]);
            a[r] = a[l];
        }
        l++;
        r++;
    }
 
    cout << moves << '\n';
    
    return 0;
}
