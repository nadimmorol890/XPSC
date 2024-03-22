#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        if (a[i] != x) {
            v.push_back(a[i]);
        }
    }

    for (int ans : v) {
        cout << ans << " ";
    }
    cout << '\n';

    return 0;
}