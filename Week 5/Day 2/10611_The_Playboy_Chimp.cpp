#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;

        int l = 0, r = n-1, mid, ans = -1;

        while (l <= r) {
            mid = (l + r) / 2;
            if (a[mid] < x) {
                ans = a[mid];
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        if (ans == -1)
            cout << "X ";
        else
            cout << ans << " ";

        auto it = upper_bound(a.begin(), a.end(), x);

        if (it != a.end())
            cout << *it << '\n';
        else
            cout << "X" << '\n';
    }
    
    return 0;
}