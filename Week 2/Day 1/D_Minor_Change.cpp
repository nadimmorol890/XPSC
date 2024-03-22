#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    int cnt = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}