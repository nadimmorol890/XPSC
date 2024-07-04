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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int valA = 0, valB = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) continue;

            if (a[i] > b[i]) {
                valA += a[i];
            }
            else {
                valB += b[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) continue;

            if (a[i] == -1) {
                if (valA < valB) {
                    valB += b[i];
                }
                else {
                    valA += a[i];
                }
            }
            else {
                if (valA > valB) {
                    valB += b[i];
                }
                else {
                    valA += a[i];
                }
            }
        }

        cout << min (valA, valB) << '\n';
    }
    
    return 0;
}