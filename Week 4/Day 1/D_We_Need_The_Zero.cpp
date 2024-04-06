#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x = 0; 
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            x ^= a[i];
        }

        for (int i = 0; i < n; i++) {
            a[i] ^= x;
        }

        int XOR = 0;

        for (int i = 0; i < n; i++) {
            XOR ^= a[i];
        }

        if (XOR == 0)
            cout << x << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}