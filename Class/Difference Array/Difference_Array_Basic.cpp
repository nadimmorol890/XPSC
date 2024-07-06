#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> diff(n + 2);
    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;

        diff[l] += x;
        diff[r + 1] -= x;
    }

    // for (int i = 0; i <= n+1; i++) {
    //     cout << diff[i] << " ";
    // }
    // cout << '\n';

    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i- 1];
    }

    // for (int i = 0; i <= n+1; i++) {
    //     cout << diff[i] << " ";
    // }
    // cout << '\n';

    for (int i = 1; i <= n; i++) {
        cout << a[i] + diff[i] << " ";
    }
    cout << '\n';
    
    return 0;
}