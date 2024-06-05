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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        
        int max_teams = 0;

        for (int s = 2; s <= 2 * n; s++) {
            int l = 0, r = n - 1, teams = 0;

            while (l < r) {
                int sum = a[l] + a[r];

                if (sum == s) {
                    teams++;
                    l++;
                    r--;
                } 
                else if (sum < s) {
                    l++;
                } 
                else {
                    r--;
                }
            }

            max_teams = max(max_teams, teams);
        }

        cout << max_teams << '\n';
    }
    
    return 0;
}