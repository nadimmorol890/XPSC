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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int OR = 0;

        for (int i = 0; i < n; i++) {
            OR |= a[i];
        }

        cout << OR << '\n';
    }
    return 0;
}