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

    bool ok = true;
    int sum = 0;

    for (auto [idx, val] : d) {
        sum += val;
        
        if (sum > 2) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    
    return 0;
}