#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool ok(vector<int> a, int n, int k) {
    multiset<int> st;
    for (auto val : a) {
        st.insert(val);
    }

    for (int i = 1; i <= k; i++) {
        if (st.empty()) return false;
        
        //Alice move
        
        int req = (k - i + 1);
        auto it = upper_bound(st.begin(), st.end(), req);
        if (it == st.begin()) return false;
        it--;
        st.erase(it);
        
        //Bob move
        
        if (!st.empty()) {
            it = st.begin();
            int x = *it;
            x += req;

            st.erase(it);
            st.insert(x);
        }
    }
    return true;
}

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

        int l = 0, r = n, mid, ans = 0;

        while (l <= r) {
            mid = l + (r - l) / 2;

            if (ok (a, n, mid)) {
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}