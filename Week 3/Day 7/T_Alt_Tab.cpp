#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<string, int> mp;
    string ans;

    for (int i = a.size()-1; i >= 0; i--) {
        string x = a[i];
        
        if (mp.find(x) != mp.end()) {
            continue;
        }
        else {
            ans += x[x.size() - 2];
            ans += x[x.size() - 1];
            mp[x]++;
        }
    }

    cout << ans;

    return 0;
}
