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
    ll totalSum = 0;
    ll minOdd = LLONG_MAX;
    
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        totalSum += a[i];
        
        if (a[i] % 2 != 0 && a[i] < minOdd) {
            minOdd = a[i];
        }
    }
    
    if (totalSum % 2 == 0) {
        cout << totalSum << '\n';
        return 0;
    }
    else {
        cout << (totalSum - minOdd) << '\n';
    }

    return 0;
}