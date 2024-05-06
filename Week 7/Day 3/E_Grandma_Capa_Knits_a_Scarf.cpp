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

        int ans = INT_MAX;

        for (int i = 'a'; i <= 'z'; i++) {
            int deleted = 0;
            int l = 0, r = n-1;

            while (l <= r) {
                if (s[l] == s[r]) {
                    l++;
                    r--;
                }
                else {
                    if (s[l] == i) {
                        l++;
                        deleted++;
                    }
                    else if (s[r] == i) {
                        r--;
                        deleted++;
                    }
                    else {
                        deleted = INT_MAX;
                        break;
                    }
                }
            }
            
            ans = min(ans, deleted);
        }

        if (ans == INT_MAX) {
            cout << -1 << '\n';
        }
        else {
            cout << ans << '\n';
        }
    }
    return 0;
}