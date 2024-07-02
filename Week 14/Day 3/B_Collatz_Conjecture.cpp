#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        while (k > 0 && x != 1) {
            ll tmp = (x / y + 1) * y - x;
            tmp = max(1ll, tmp);
            tmp = min(tmp, k);
            x += tmp;

            while (x % y == 0) {
                x /= y;
            }

            k -= tmp;
        }

        cout << x + k % (y - 1) << '\n';
    }
    
    return 0;
}