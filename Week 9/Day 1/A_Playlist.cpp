#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    set<ll> st;
    ll l = 0, r = 0, maxLength = 0;
    
    while (r < n) {
        if (st.find(a[r]) == st.end()) {
            st.insert(a[r]);
            r++;
            maxLength = max(maxLength, r - l);
        } 
        else {
            st.erase(a[l]);
            l++;
        }
    }

    cout << maxLength << '\n';
    
    return 0;
}