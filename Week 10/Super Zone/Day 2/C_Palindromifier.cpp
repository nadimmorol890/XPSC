#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check_palindrome (string s) {
    ll n = s.size();
    bool ok = true;

    for (ll i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            ok = false;
            break;
        }
    }

    return ok;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    ll n = s.size();

    if (check_palindrome(s)) {
        cout << 0 << '\n';
    }
    else {
        cout << 3 << '\n';

        cout << "R " << n-1 << '\n';
        cout << "L " << n << '\n';
        cout << "L " << 2 << '\n';
    }
    
    return 0;
}