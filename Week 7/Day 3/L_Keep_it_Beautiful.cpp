#include<bits/stdc++.h>
#define ll long long
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

        vector<int> a(n), v;
        string ans = "";
        bool Broken = false;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            
            if (v.empty()) {
                ans.push_back('1');
                v.push_back(a[i]);
            }
            else {
                if (Broken) {
                    if (a[i] < v.back()) {
                        ans.push_back('0');
                    }
                    else {
                        if (a[i] > v[0]) {
                            ans.push_back('0');
                        }
                        else {
                            ans.push_back('1');
                            v.push_back(a[i]);
                        }
                    }
                }
                else {
                    if (a[i] >= v.back()) {
                        ans.push_back('1');
                        v.push_back(a[i]);
                    }
                    else {
                        if (a[i] > v[0]) {
                            ans.push_back('0');
                        }
                        else {
                            Broken = true;
                            ans.push_back('1');
                            v.push_back(a[i]);
                        }
                    }
                }
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}