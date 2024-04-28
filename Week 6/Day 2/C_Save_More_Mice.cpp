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
        int n, k;
        cin >> n >> k;

        vector<int> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        
        int catPosition = 0, saves = 0;

        for (int i = 0; i < k; i++) {
            if (catPosition < a[i]) {
                catPosition += (n - a[i]);
                saves++;
            }
        }

        cout << saves << '\n';
    }
    
    return 0;
}