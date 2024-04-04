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
        ll sum = 0;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += abs(a[i]);
        }

        ll op = 0;
        bool negativeSegment = false;

        for (ll i = 0; i <= n; i++) {
            if (negativeSegment) {
                if ((i == n) || a[i] > 0) {
                    op++;
                    negativeSegment = false;
                }
            }
            else {
                if (a[i] < 0) {
                    negativeSegment = true;
                }
            }
        }

        cout << sum <<" "<< op << '\n';
    }
    return 0;
}