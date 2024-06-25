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
        int v;
        cin >> v;

        int ans = 15;

        for (int i = 0; i <= 15; i++) {
            for (int j = 0; j <= 15; j++) {
                if (((v + i) << j) % 32768 == 0) {
                    ans = min(ans, (i + j));
                }
            }
        }

        cout << ans << " ";
    }
    
    return 0;
}