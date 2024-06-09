#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mx = 200000;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> d (mx + 2, 0);
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;

        d[l]++;

        if (r + 1 <= mx) {
            d[r + 1]--;
        }
    }

    vector<int> x (mx + 1, 0);
    for (int i = 1; i <= mx; i++) {
        x[i] = x[i - 1] + d[i];
    }

    vector<int> y (mx + 1, 0);
    for (int i = 1; i <= mx; i++) {
        if (x[i] >= k) {
            y[i] = 1;
        }
    }

    vector<int> pref (mx + 1, 0);
    for (int i = 1; i <= mx; i++) {
        pref[i] = pref[i - 1] + y[i];
    }
    
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a - 1] << '\n';
    }
    
    return 0;
}