#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll l = 0, r = 0, cnt = 0, currentSum = 0;

    while (r < n) {
        currentSum += a[r];

        while (currentSum > x && l <= r) {
            currentSum -= a[l];
            l++;
        }

        if (currentSum == x) {
            cnt++;
        }

        r++;
    }

    cout << cnt << '\n';
    
    return 0;
}
