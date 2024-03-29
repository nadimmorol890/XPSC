#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'M') s[i] = 'm';
            if (s[i] == 'E') s[i] = 'e';
            if (s[i] == 'O') s[i] = 'o';
            if (s[i] == 'W') s[i] = 'w';
        }

        string x;
        for (int i = 0; i < n; i++) {
            if(x.empty() || x.back() != s[i]) {
                x.push_back(s[i]);
            }
        }

        if (x == "meow") {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}