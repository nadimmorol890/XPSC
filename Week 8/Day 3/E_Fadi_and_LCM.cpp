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

    ll x, a, b;
    cin >> x;

    for (ll i = sqrt(x); i >= 1; i--) {
        if (x % i == 0) {
            if (gcd(i, x/i) == 1) {
                a = i;
                b = x/i;
                break;
            }
        }
    }

    cout << a << " " << b << '\n';
    
    return 0;
}
