#include<bits/stdc++.h>
#define ll long long
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

        int oneCount = 0, zeroCount = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') oneCount++;
            else zeroCount++;
        }

        int ans = min(oneCount, zeroCount);

        if (ans % 2 == 1) {
            cout << "Zlatan" << '\n';
        }
        else {
            cout << "Ramos" << '\n';
        }
    }
    
    return 0;
}