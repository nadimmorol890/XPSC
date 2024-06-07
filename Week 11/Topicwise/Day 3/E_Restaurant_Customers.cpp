#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<int, int> d;
    while (n--) {
        int l, r;
        cin >> l >> r;

        d[l]++;
        d[r + 1]--;
    }

    int ans = 0, curr = 0;

    for (auto [idx, val] : d) {
        curr += val;
        ans = max(ans, curr);
    }

    cout << ans << '\n';
    
    return 0;
}
