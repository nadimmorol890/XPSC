#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string ans = "";

    for (int i = 0; i < n; i++) {
        if (i % 4 < 2) {
            ans += 'a';
        }
        else {
            ans += 'b';
        }
    }
    
    cout << ans << '\n';

    return 0;
}