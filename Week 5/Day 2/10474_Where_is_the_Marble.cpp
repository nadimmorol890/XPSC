#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int caseNum = 1;

    int n, q;
    while (true) {
        cin >> n >> q;
        if (n == 0 && q == 0) break;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        cout << "CASE# " << caseNum << ":" << '\n';

        while (q--) {
            int x;
            cin >> x;

            int l = 0, r = n-1, mid, ans = -1;

            while (l <= r) {
                mid = (l + r) / 2;
                
                if (a[mid] == x) {
                    ans = mid;
                    r = mid - 1;
                }
                else if (a[mid] < x) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }

            if (ans == -1) {
                cout << x << " not found" << '\n'; 
            }
            else {
                cout << x << " found at " << ans+1 << '\n';
            }
        }
        caseNum++;
    }
    
    return 0;
}