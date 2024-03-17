#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;

    ll maxLen = 0;
    ll num = x;

    while (num <= y) {
        maxLen++;
        num *= 2;
    }

    cout << maxLen << '\n';

    return 0;
}
