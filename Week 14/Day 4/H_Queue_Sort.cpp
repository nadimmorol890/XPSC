#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve () {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int minIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] < a[minIndex]) {
            minIndex = i;
        }
    }

    for (int i = minIndex + 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            cout << -1 << '\n';
            return;
        }
    }

    cout << minIndex << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve ();
    }
    
    return 0;
}

