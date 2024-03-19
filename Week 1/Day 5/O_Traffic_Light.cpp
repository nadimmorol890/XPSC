
// Approach 1

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        char ch;
        cin >> n >> ch;
        string s;
        cin >> s;

        s += s;
        int mx = 0, cnt = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ch) {
                cnt = 0;
                while (s[i]  != 'g' && i < s.size()) {
                    cnt++;
                    i++;
                }
                if (cnt > mx)
                    mx = cnt;
            }
        }

        cout << mx << '\n';
        
    }
    return 0;
}

// Approach 2

// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         string s;
//         char ch;
//         cin >> n >> ch;
//         cin >> s;
 
//         set<int> green_signals_pos;
//         for (int i = 0;i < n;i++) {
//             if (s[i] == 'g') {
//                 green_signals_pos.insert(i + 1);
//             }
//         }
 
//         int ans = INT_MIN;
//         for (int i = 0;i < n;i++) {
//             if (s[i] == ch) {
//                 auto LB = green_signals_pos.lower_bound(i + 1);
//                 if (LB != green_signals_pos.end()) {
//                     int diff = (*LB - (i + 1));
//                     ans = max(ans, diff);
//                 }
//                 else {
//                     int x = n - (i + 1), y = *green_signals_pos.begin();
//                     ans = max(ans, x + y);
//                 }
//             }
//         }
//         cout << ans << '\n';
//     }
//     return 0;
// }
