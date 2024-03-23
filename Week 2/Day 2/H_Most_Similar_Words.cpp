#include<bits/stdc++.h>
using namespace std;

int solution(string x, string y) {
    
    int n = x.length();
    int cnt = 0;
    
    for(int i = 0; i < n; i++) {
        cnt += abs(x[i] - y[i]);
    }
    
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<string> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int ans = INT_MAX;

        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                ans = min(ans, solution(s[i], s[j]));
            }
        }
        cout << ans << '\n';
    }

    return 0;
}