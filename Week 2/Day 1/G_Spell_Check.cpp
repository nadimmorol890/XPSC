#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string x = "Timur";
        sort(x.begin(), x.end());

        if (n != 5) {
            cout << "NO" << '\n';
        }
        else {
            sort(s.begin(), s.end());
            
            if (s == x) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
    }

    return 0;
}