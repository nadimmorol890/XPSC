#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<ll, ll> pref;
    ll currentSum = 0, cnt = 0;

    pref[0] = 1;

    for (int i = 0; i < n; i++) {
        currentSum += a[i];
        
        ll modVal = ((currentSum % n) + n) % n; 

        cnt += pref[modVal];

        pref[modVal]++;
    }
    
    cout << cnt << '\n';
    
    return 0;
}

