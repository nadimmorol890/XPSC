#include<bits/stdc++.h>
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

        vector<int> a(n);
        set<int> st;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            st.insert(a[i]);
        }

        int removed = (n - st.size());
        
        if (removed % 2 == 0) {
            cout << st.size() << endl;
        }
        else {
            cout << st.size() - 1 << endl;
        }
    }
    return 0;
}