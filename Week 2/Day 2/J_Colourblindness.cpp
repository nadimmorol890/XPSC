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

        vector<char> v1(n);
        vector<char> v2(n);

        for (int i = 0; i < n; i++) {
            cin >> v1[i];
            if (v1[i] == 'G'){
                v1[i] = 'B';
            }
        }
        for (int i = 0; i < n; i++) {
            cin >> v2[i];
            if (v2[i] == 'G'){
                v2[i] = 'B';
            }
        }

        bool same = true;

        for (int i = 0; i < n; i++) {
            if (v1[i] != v2[i]){
                same = false;
            }
        }

        if (same)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}