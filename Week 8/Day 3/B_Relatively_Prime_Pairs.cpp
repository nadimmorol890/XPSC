#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd (ll a, ll b) {
    return __gcd(a, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r;
    cin >> l >> r;

    cout << "YES" << '\n';

    for (ll i = l; i <= r; i += 2) {
        if (gcd(i, i+1) == 1) {
            cout << i << " " << i+1 << '\n';
        }
    }
    
    return 0;
}