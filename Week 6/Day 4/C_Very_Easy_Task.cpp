#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool ok(int time, int n, int x, int y) {
    if (time < min(x, y)) return false;

    int cnt = 1;
    time -= min(x, y);

    cnt += (time/x) + (time/y);

    return cnt >= n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y;
    cin >> n >> x >> y;

    int l = 0, r = max(x, y) * n, mid, ans = 0;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (ok (mid, n, x, y)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans << '\n';
    
    return 0;
}