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
        string a, b;
        cin >> a >> b;

        if (a == b) {
            cout << '=' << '\n';
            continue;
        }

        int n = a.size(), m = b.size(), x1 = 0, x2 = 0;
        char c1, c2;

        for (int i = 0; i < n; i++) {
            if (a[i] != 'X') c1 = a[i];
            else x1++;
        }
        for (int i = 0; i < m; i++) {
            if (b[i] != 'X') c2 = b[i];
            else x2++;
        }
        
        if (c1 == c2) {
            if (c1 == 'S') {
                if (x1 > x2) cout << '<' << '\n';
                else cout << '>' << '\n';
            }
            if (c1 == 'L') {
                if (x1 > x2) cout << '>' << '\n';
                else cout << '<' << '\n';
            }
        }
        else {
            if (c1 == 'S') {
                cout << '<' << '\n';
            }
            else if (c1 == 'L') {
                cout << '>' << '\n';
            }
            else if (c1 == 'M' && c2 == 'L') {
                cout << '<' << '\n';
            }
            else if (c1 == 'M' && c2 == 'S') {
                cout << '>' << '\n';
            }
        }
    }
    return 0;
}